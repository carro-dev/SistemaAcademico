#include "DataHandler.h"
#include <cstdio>
#include <iostream>
#include <mysql.h>


using namespace System::Windows::Forms;

namespace DataMySql {
	void DataHandler::conexionMySQl() {
		MYSQL* conectar;

		conectar = mysql_init(0);
		conectar = mysql_real_connect(conectar, "sistemaacademico.cp3s40kwmohr.us-east-2.rds.amazonaws.com", "admin", "sisaca212001", "Sisaca", 3306, NULL, 0);

		if (conectar) {
			MessageBox::Show("Conexion Exitosa...", "Conection Test", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("Conexion Fallida...", "Conection Test", MessageBoxButtons::OK);
		}
	}
	bool DataHandler::login(const std::string& username,const std::string& password){
        MYSQL* conn;
        MYSQL_RES* res;
        MYSQL_ROW row;

        conn = mysql_init(NULL);
        if (conn == NULL) {
            return false; // Error al inicializar la conexión
        }

        // Conectarse a la base de datos
        if (mysql_real_connect(conn, "sistemaacademico.cp3s40kwmohr.us-east-2.rds.amazonaws.com", "admin", "sisaca212001", "Sisaca", 3306, NULL, 0) == NULL) {
            mysql_close(conn);
            return false; // Error al conectarse a la base de datos
        }


        std::string query = "SELECT * FROM TblMateriasEnCarrera WHERE codigo_carrera = '" + username + "' AND codigo_materia = '" + password + "'";
        if (mysql_query(conn, query.c_str()) != 0) {
            mysql_close(conn);
            return false; // Error en la consulta
        }

        res = mysql_store_result(conn);
        if (res == NULL) {
            mysql_close(conn);
            return false; // Error al obtener el resultado de la consulta
        }

        int num_rows = mysql_num_rows(res);
        mysql_free_result(res);
        mysql_close(conn);

        return num_rows == 1;
	}
}
