#include "DataHandler.h"
#include <cstdio>
#include <iostream>
#include <mysql.h>
#include "Entities.h"

using namespace System::Windows::Forms;
using namespace Entities;
using namespace std;
using namespace System::Collections::Generic;

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

	Estudiantes^ DataHandler::login(const std::string& username,const std::string& password){
        Estudiantes^ estudiante = gcnew Estudiantes();
        try
        {
            MYSQL* conn = getDBConnection();
            MYSQL_RES* res;
            MYSQL_ROW row;

            std::string query = "call SP_GetUser('" + username + "','" + password + "')";
            if (mysql_query(conn, query.c_str()) != 0) {
                mysql_close(conn);
                return estudiante; // Error en la consulta
            }

            res = mysql_store_result(conn);
            if (res == NULL) {
                mysql_close(conn);
                return estudiante; // Error al obtener el resultado de la consulta
            }

            row = mysql_fetch_row(res);
            if (row != NULL) {
                System::String^ matricula = gcnew  System::String(row[0]);
                System::String^ codigocarrera = gcnew  System::String(row[1]);
                System::String^ carrera = gcnew  System::String(row[2]);
                System::String^ nombre = gcnew  System::String(row[3]);
                System::String^ apellido = gcnew  System::String(row[4]);
                System::String^ rol = gcnew  System::String(row[5]);

                // Asignar los datos obtenidos al objeto User
                estudiante = gcnew Estudiantes(matricula, codigocarrera, carrera, nombre, apellido, rol);

                mysql_free_result(res);
                mysql_close(conn);

                return estudiante;
            }
            else {
                // No se encontró el usuario con las credenciales proporcionadas
                mysql_free_result(res);
                mysql_close(conn);

                return estudiante;
            }
        }
        catch (const std::exception& e)
        {
            MessageBox::Show("Algo ha fallado");
        }
        

	}

    List<Pensum^>^ DataHandler::getPensum(const std::string& codigoCarrera) {
        MYSQL* conn = getDBConnection();
        MYSQL_RES* res;
        MYSQL_ROW row;
        List<Pensum^>^ pensums = gcnew List<Pensum^>();

        std::string query = "call SP_GetPensum('"+ codigoCarrera +"')";
        if (mysql_query(conn, query.c_str()) != 0) {
            mysql_close(conn);
            return pensums; // Error en la consulta
        }

        res = mysql_store_result(conn);
        if (res == NULL) {
            mysql_close(conn);
            return pensums; // Error al obtener el resultado de la consulta
        }

        while ((row = mysql_fetch_row(res)) != nullptr) {
  
            System::String^ nombre_carrera = gcnew System::String(row[0]);
            System::String^ codigo_materia = gcnew System::String(row[1]);
            System::String^  nombre_materia = gcnew System::String(row[2]);
            System::String^ creditos = gcnew System::String(row[3]);

            Pensum^ pensum = gcnew Pensum(nombre_carrera, codigo_materia, nombre_materia, creditos);

            pensums->Add(pensum);
        }

        mysql_free_result(res);
        mysql_close(conn);

        return pensums;
      
    }

    List<Materias^>^ DataHandler::getMaterias() {
        MYSQL* conn = getDBConnection();
        MYSQL_RES* res;
        MYSQL_ROW row;
        List<Entities::Materias^>^ materias = gcnew List<Entities::Materias^>();

        std::string query = "select * from VW_GetMaterias";
        if (mysql_query(conn, query.c_str()) != 0) {
            mysql_close(conn);
            return materias; // Error en la consulta
        }

        res = mysql_store_result(conn);
        if (res == NULL) {
            mysql_close(conn);
            return materias; // Error al obtener el resultado de la consulta
        }

        while ((row = mysql_fetch_row(res)) != nullptr) {

            System::String^ codigo_materia = gcnew System::String(row[0]);
            System::String^ nombre_materia = gcnew System::String(row[1]);
            System::String^ creditos = gcnew System::String(row[2]);


            Entities::Materias^ materia = gcnew Entities::Materias(codigo_materia, nombre_materia, creditos);
            materias->Add(materia);

        }

        mysql_free_result(res);
        mysql_close(conn);

        return materias;
    }

    List<Secciones^>^ DataHandler::getSecciones(const std::string& codigoCarrera) {
        MYSQL* conn = getDBConnection();
        MYSQL_RES* res;
        MYSQL_ROW row;
        List<Entities::Secciones^>^ secciones = gcnew List<Entities::Secciones^>();

        std::string query = "call SP_GetSecciones('"+ codigoCarrera +"')";
        if (mysql_query(conn, query.c_str()) != 0) {
            mysql_close(conn);
            return secciones; // Error en la consulta
        }

        res = mysql_store_result(conn);
        if (res == NULL) {
            mysql_close(conn);
            return secciones; // Error al obtener el resultado de la consulta
        }

        while ((row = mysql_fetch_row(res)) != nullptr) {
            System::String^ id_seccion = gcnew System::String(row[0]);
            System::String^ numero_seccion = gcnew System::String(row[1]);
            System::String^ codigo_materia = gcnew System::String(row[2]);
            System::String^ nombre_materia = gcnew System::String(row[3]);
            System::String^ nombre_docente = gcnew System::String(row[4]);
            System::String^ apellido_docente = gcnew System::String(row[5]);
            System::String^ horario = gcnew System::String(row[6]);

            Entities::Secciones^ seccion = gcnew Entities::Secciones(id_seccion,numero_seccion, codigo_materia, nombre_materia, nombre_docente, apellido_docente, horario);
            secciones->Add(seccion);

        }

        mysql_free_result(res);
        mysql_close(conn);

        return secciones;
    }

    void DataHandler::Seleccionar(std::string& matricula, std::string& idSeccion) {
        MYSQL* conn = getDBConnection();

        List<Entities::Secciones^>^ secciones = gcnew List<Entities::Secciones^>();

        std::string query = "call SP_InsertarAlumnosSeccion("+matricula+","+idSeccion+")";
        if (mysql_query(conn, query.c_str()) != 0) {
            mysql_close(conn);
            MessageBox::Show("Hubo un error"); // Error en la consulta
        }

        mysql_close(conn);

        MessageBox::Show("Hubo un error");

    }

}
