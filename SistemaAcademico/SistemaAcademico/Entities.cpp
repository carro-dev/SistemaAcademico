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

	Pensum::Pensum() : nombre_carrera(""), codigo_materia(""), nombre_materia(""), creditos("") {}
	Pensum::Pensum(const std::string& nombre_carrera, const std::string& codigo_materia, const std::string& nombre_materia, const std::string& creditos)
		: nombre_carrera(nombre_carrera), codigo_materia(codigo_materia), nombre_materia(nombre_materia), creditos(creditos) {}

	std::string Pensum::Getnombrecarrera() const {
		return nombre_carrera;
	}
	std::string Pensum::Getcodigomateria() const {
		return codigo_materia;
	}
	std::string Pensum::Getnombremateria() const {
		return nombre_materia;
	}
	std::string Pensum::Getcreditos() const {
		return creditos;
	}
}