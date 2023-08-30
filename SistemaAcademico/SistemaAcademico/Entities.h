#pragma once
#include <string>

namespace Entities {
	class Estudiantes {
	private:
		std::string matricula;
		std::string carrera;
		std::string nombre;
		std::string apellido;
		std::string rol;

	public:
		Estudiantes();
		Estudiantes(const std::string& matricula, const std::string& carrera, const std::string& nombre, const std::string& apellido, const std::string& rol);

		std::string Getmatricula() const;
		std::string Getcarrera() const;
		std::string Getnombre() const;
		std::string Getapellido() const;
		std::string Getrol() const;

	};
	class Pensum {
	private:
		std::string nombre_carrera;
		std::string codigo_materia;
		std::string nombre_materia;
		std::string creditos;
		
	public:
		Pensum();
		Pensum(const std::string& nombre_carrera, const std::string& codigo_materia, const std::string& nombre_materia, const std::string& creditos);
		
		std::string Getnombrecarrera() const;
		std::string Getcodigomateria() const;
		std::string Getnombremateria() const;
		std::string Getcreditos() const;

	};
}

