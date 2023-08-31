#pragma once
#include <iostream>
#include "Entities.h"

namespace DataMySql {
	class DataHandler {
	public:
		static Entities::Estudiantes login(const std::string&,const std::string& password);
		static Entities::Pensum getPensum(const std::string& codigoMateria);
	};
}


