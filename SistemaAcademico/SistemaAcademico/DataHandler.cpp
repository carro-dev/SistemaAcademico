#include "DataHandler.h"
#include <cstdio>
#include <iostream>
#include <mysql.h>
#include "Entities.h"


using namespace System::Windows::Forms;
using namespace Entities;

namespace DataMySql {

	MYSQL* getDBConnection() {
		MYSQL* conectar = mysql_init(NULL);

        if (conectar == NULL) {
            return NULL;
        }

        if (mysql_real_connect(conectar, "sistemaacademico.cp3s40kwmohr.us-east-2.rds.amazonaws.com", "admin", "sisaca212001", "Sisaca", 3306, NULL, 0) == NULL) {
            mysql_close(conectar);
            return NULL;
        }

        return conectar;
	}

	Estudiantes DataHandler::login(const std::string& username,const std::string& password){
        MYSQL* conn = getDBConnection();
        MYSQL_RES* res;
        MYSQL_ROW row;


        std::string query = "call SP_GetUser('"+username+"','"+password+"')";
        if (mysql_query(conn, query.c_str()) != 0) {
            mysql_close(conn);
            return Estudiantes(); // Error en la consulta
        }

        res = mysql_store_result(conn);
        if (res == NULL) {
            mysql_close(conn);
            return Estudiantes(); // Error al obtener el resultado de la consulta
        }

        row = mysql_fetch_row(res);
        if (row != NULL) {
            std::string matricula = row[0];
            std::string codigocarrera = row[1];
            std::string carrera = row[2];
            std::string nombre = row[3];
            std::string apellido = row[4];
            std::string rol = row[5];

            // Asignar los datos obtenidos al objeto User
            Estudiantes estudiantes(matricula, codigocarrera, carrera, nombre, apellido, rol);

            mysql_free_result(res);
            mysql_close(conn);

            return estudiantes;
        }
        else {
            // No se encontró el usuario con las credenciales proporcionadas
            mysql_free_result(res);
            mysql_close(conn);

            return Estudiantes();
        }

	}

    Pensum DataHandler::getPensum(const std::string& codigoMateria) {
        MYSQL* conn = getDBConnection();
        MYSQL_RES* res;
        MYSQL_ROW row;


        std::string query = "call SP_GetPensum('"+ codigoMateria +"')";
        if (mysql_query(conn, query.c_str()) != 0) {
            mysql_close(conn);
            return Pensum(); // Error en la consulta
        }

        res = mysql_store_result(conn);
        if (res == NULL) {
            mysql_close(conn);
            return Pensum(); // Error al obtener el resultado de la consulta
        }

        row = mysql_fetch_row(res);
        if (row != NULL) {
            std::string nombre_carrera = row[0];
            std::string codigo_materia = row[1];
            std::string nombre_materia = row[2];
            std::string creditos = row[3];


            // Asignar los datos obtenidos al objeto User
            Pensum pensum(nombre_carrera,codigo_materia,nombre_materia,creditos);

            mysql_free_result(res);
            mysql_close(conn);

            return pensum;
        }
        else {
            // No se encontró el usuario con las credenciales proporcionadas
            mysql_free_result(res);
            mysql_close(conn);

            return Pensum();
        }

    }
}
