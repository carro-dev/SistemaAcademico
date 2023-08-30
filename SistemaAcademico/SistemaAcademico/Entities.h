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
}

