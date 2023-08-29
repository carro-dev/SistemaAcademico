#include "DataHandler.h"

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
}
