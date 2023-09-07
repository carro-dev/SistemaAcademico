#pragma once
#include <iostream>
#include "Entities.h"

using namespace System::Collections::Generic;

namespace DataMySql {
	class DataHandler {
	public:
		static Entities::Estudiantes^ login(const std::string&,const std::string& password);
		static List<Entities::Pensum^>^ getPensum(const std::string& codigoCarrera);
		static List<Entities::Materias^>^ getMaterias();
		static List<Entities::Secciones^>^ getSecciones(const std::string& codigoCarrera);
	};
}


