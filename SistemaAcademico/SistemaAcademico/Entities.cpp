#include "Entities.h"
#include <string>

namespace Entities {
	Estudiantes::Estudiantes() : matricula(""), codigo_carrera(""), carrera(""), nombre(""), apellido(""), rol("") {}
	Estudiantes::Estudiantes(System::String^ matricula, System::String^ codigo_carrera, System::String^ carrera, System::String^ nombre, System::String^ apellido, System::String^ rol)
		: matricula(matricula),
		codigo_carrera(codigo_carrera),
		carrera(carrera),
		nombre(nombre),
		apellido(apellido),
		rol(rol) {}

	Materias::Materias() : codigo_materia(""), nombre_materia(""),creditos(""){}
	Materias::Materias(System::String^ codigo_materia, System::String^ nombre_materia, System::String^ creditos) :
		codigo_materia(codigo_materia),
		nombre_materia(nombre_materia),
		creditos(creditos){}


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