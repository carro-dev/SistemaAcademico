create database Sisaca;
use Sisaca;

-- TABLAS --

Create table TblDocentes (
id_docente int auto_increment, 
nombre_docente varchar(50) not null, 
apellido_docente varchar(50) not null,
primary key (id_docente)
);

Create table TblCarreras (
codigo_carrera char(3) not null, 
nombre_carrera varchar(50) not null,
primary key (codigo_carrera)
);

Create table TblTipoMateria (
id_tipomateria int auto_increment not null,
tipo_materia varchar(10) not null,
primary key (id_tipomateria)
);

Create table TblAreas ( 
codigo_area char(3) not null,
nombre_area varchar(50) not null,
primary key (codigo_area)
);

Create table TblRoles (
id_rol int auto_increment not null,
rol varchar(15) not null,
primary key (id_rol)
);

Create table TblUsuarios (
id_usuario int auto_increment not null,
id_rol int not null,
clave varchar(64) not null,
primary key (id_usuario),
foreign key (id_rol) references TblRoles(id_rol)
);

Create table TblEstudiantes (
matricula char(7) not null,
id_usuario int not null,
nombre_estudiante varchar(50),
apellido_estudiante varchar(50),
primary key (matricula),
foreign key (id_usuario) references TblUsuarios(id_usuario)
);

Create table TblAdmin (
codigo_admin char(5) not null,
id_usuario int not null,
primary key (codigo_admin),
foreign key (id_usuario) references TblUsuarios(id_usuario)
);

Create table TblMaterias (
codigo_materia char(7) not null, 
nombre_materia varchar(50) not null, 
id_tipomateria int not null,
codigo_area char(3),
codigo_carrera char(3),
creditos int not null,
primary key (codigo_materia),
foreign key (id_tipomateria) references TblTipoMateria(id_tipomateria),
foreign key (codigo_area) references TblAreas(codigo_area),
foreign key (codigo_carrera) references TblCarreras(codigo_carrera)
);

Create table TblSecciones (
id_seccion int auto_increment not null,
numero_seccion int not null,
codigo_materia char(7) not null,
id_docente int not null,
horario json,
primary key (id_seccion),
foreign key (codigo_materia) references TblMaterias(codigo_materia),
foreign key (id_docente) references TblDocentes(id_docente)
);

Create table TblAlumnosSeccion (
matricula char(7) not null,
id_seccion int not null,
primary key (matricula, id_seccion),
foreign key (matricula) references TblEstudiantes(matricula),
foreign key (id_seccion) references TblSecciones(id_seccion)
);

Create table TblMateriasEnCarrera (
codigo_carrera char(3) not null,
codigo_materia char(7) not null,
primary key (codigo_carrera, codigo_materia),
foreign key (codigo_carrera) references TblCarreras(codigo_carrera),
foreign key (codigo_materia) references TblMaterias(codigo_materia)
);





