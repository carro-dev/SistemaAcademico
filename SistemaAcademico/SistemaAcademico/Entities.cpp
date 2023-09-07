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
	Materias::Materias(System::String^ codigo_materia, System::String^ nombre_materia, System::String^ creditos) 
		: codigo_materia(codigo_materia),
		nombre_materia(nombre_materia),
		creditos(creditos){}


	Pensum::Pensum() : nombre_carrera(""), codigo_materia(""), nombre_materia(""), creditos("") {}
	Pensum::Pensum(System::String^ nombre_carrera, System::String^ codigo_materia, System::String^ nombre_materia, System::String^ creditos)
		: nombre_carrera(nombre_carrera), codigo_materia(codigo_materia), nombre_materia(nombre_materia), creditos(creditos) {}

	Secciones::Secciones() : numero_seccion(""), codigo_materia(""), nombre_materia(""), nombre_docente(""), apellido_docente(""), horario("") {}
	Secciones::Secciones(System::String^ numero_seccion, System::String^ codigo_materia, System::String^ nombre_materia, System::String^ nombre_docente, System::String^ apellido_docente, System::String^ horario)
		: numero_seccion(numero_seccion),
		codigo_materia(codigo_materia),
		nombre_materia(nombre_materia),
		nombre_docente(nombre_docente),
		apellido_docente(apellido_docente),
		horario(horario){}

}