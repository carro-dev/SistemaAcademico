#include "Entities.h"
#include <string>

namespace Entities {
	Estudiantes::Estudiantes() : matricula(""), carrera(""), nombre(""), apellido(""), rol("") {}
	Estudiantes::Estudiantes(const std::string& matricula, const std::string& carrera, const std::string& nombre, const std::string& apellido, const std::string& rol)
		: matricula(matricula), carrera(carrera), nombre(nombre), apellido(apellido), rol(rol) {}

	std::string Estudiantes::Getmatricula() const {
		return matricula;
	}

	std::string Estudiantes::Getcarrera() const {
		return carrera;
	}

	std::string Estudiantes::Getnombre() const {
		return nombre;
	}

	std::string Estudiantes::Getapellido() const{
		return apellido;
	}

	std::string Estudiantes::Getrol() const{
		return rol;
	}
}