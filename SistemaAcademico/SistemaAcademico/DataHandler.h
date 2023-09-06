#pragma once
#include <iostream>
#include "Entities.h"
#include <vector>

namespace DataMySql {
	class DataHandler {
	public:
		static Entities::Estudiantes^ login(const std::string&,const std::string& password);
		static std::vector<Entities::Pensum> getPensum(const std::string& codigoCarrera);
	};
}


