#pragma once
#include <string>

//using namespace System;
//using namespace System::Runtime::InteropServices;

namespace Entities {
	public ref class Estudiantes {
    private:
        System::String^ matricula;
        System::String^ codigo_carrera;
        System::String^ carrera;
        System::String^ nombre;
        System::String^ apellido;
        System::String^ rol;

    public:
        Estudiantes();
        Estudiantes(System::String^ matricula, System::String^ codigo_carrera, System::String^ carrera, System::String^ nombre, System::String^ apellido, System::String^ rol);

        property  System::String^ Matricula {
            System::String^ get() {
                return gcnew  System::String(matricula);
            }
        }

        property  System::String^ CodigoCarrera {
            System::String^ get() {
                return gcnew  System::String(codigo_carrera);
            }
        }

        property  System::String^ Carrera {
            System::String^ get() {
                return gcnew  System::String(carrera);
            }
        }

        property  System::String^ Nombre {
            System::String^ get() {
                return gcnew  System::String(nombre);
            }
        }

        property  System::String^ Apellido {
            System::String^ get() {
                return gcnew  System::String(apellido);
            }
        }

        property  System::String^ Rol {
            System::String^ get() {
                return gcnew  System::String(rol);
            }
        }

	};

    public ref class Materias {
    private:
        System::String^ codigo_materia;
        System::String^ nombre_materia;
        System::String^ creditos;

    public:
        Materias();
        Materias(System::String^ codigo_materia, System::String^ nombre_materia, System::String^ creditos);

        property  System::String^ CodigoMateria {
            System::String^ get() {
                return gcnew  System::String(codigo_materia);
            }
        }

        property  System::String^ NombreMateria {
            System::String^ get() {
                return gcnew  System::String(nombre_materia);
            }
        }

        property  System::String^ Creditos {
            System::String^ get() {
                return gcnew  System::String(creditos);
            }
        }
    };

    public ref class Pensum
    {
    private:
        System::String^ nombre_carrera;
        System::String^ codigo_materia;
        System::String^ nombre_materia;
        System::String^ creditos;

    public:
        Pensum();
        Pensum(System::String^ nombre_carrera, System::String^ codigo_materia, System::String^ nombre_materia, System::String^ creditos);

        property System::String^ NombreCarrera {
            System::String^ get() {
                return gcnew System::String(nombre_carrera);
            }
        }

        property System::String^ CodigoMateria {
            System::String^ get() {
                return gcnew System::String(codigo_materia);
            }
        }

        property System::String^ NombreMateria {
            System::String^ get() {
                return gcnew System::String(nombre_materia);
            }
        }

        property System::String^ Creditos {
            System::String^ get() {
                return gcnew System::String(creditos);
            }
        }
    };
}

