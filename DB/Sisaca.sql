drop database Sisaca;
create database Sisaca;
use Sisaca;

-- TABLAS --

Create table TblDocentes (
id_docente int auto_increment, 
nombre_docente varchar(50) not null, 
apellido_docente varchar(50) not null,
primary key (id_docente)
);

Create table TblTipoMateria (
id_tipomateria int auto_increment,
tipo_materia varchar(10) not null,
primary key (id_tipomateria)
);

Create table TblAreas ( 
codigo_area char(3) not null,
nombre_area varchar(50) not null,
primary key (codigo_area)
);

Create table TblRoles (
id_rol int auto_increment,
rol varchar(15) not null,
primary key (id_rol)
);

Create table TblCarreras (
codigo_carrera char(3) not null,
codigo_area char(3) not null,
nombre_carrera varchar(50) not null,
primary key (codigo_carrera),
foreign key (codigo_area) references TblAreas(codigo_area)
);

Create table TblUsuarios (
id_usuario int auto_increment,
id_rol int not null,
clave varchar(64) not null,
primary key (id_usuario),
foreign key (id_rol) references TblRoles(id_rol)
);

Create table TblEstudiantes (
matricula char(7) not null,
id_usuario int not null,
codigo_carrera char(3) not null,
nombre_estudiante varchar(50) not null,
apellido_estudiante varchar(50) not null,
primary key (matricula),
foreign key (id_usuario) references TblUsuarios(id_usuario),
foreign key (codigo_carrera) references TblCarreras(codigo_carrera)
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
id_seccion int auto_increment,
numero_seccion int not null,
codigo_materia char(7) not null,
id_docente int not null,
horario json not null,
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

alter table TblCarreras add column max_creditos int after nombre_carrera;

-- PROCEDURES --

-- INSERT --

DELIMITER $$
Create procedure SP_InsertarDocentes (IN SPnombre_docente varchar(50)
, IN SPapellido_docente varchar(50))
begin  
insert into TblDocentes (
nombre_docente,
apellido_docente)
values (
SPnombre_docentes,
SPapellido_docentes);
end$$

DELIMITER $$
Create procedure SP_InsertarCarreras (IN SPcodigo_carrera char(3)
, IN SPnombre_carrera varchar(50), IN SPmax_creditos int)
begin
insert into TblCarreras (
codigo_carrera,
nombre_carrera,
max_creditos)
values (
SPcodigo_carrera,
SPnombre_carrera,
SPmax_creditos);
end$$

DELIMITER $$
Create procedure SP_InsertarTipoMateria (IN SPtipo_materia varchar(10))
begin
insert into TblTipoMateria (
tipo_materia)
values (
SPtipo_materia);
end$$

DELIMITER $$
Create procedure SP_InsertarAreas (IN SPcodigo_area char(3),
IN nombre_area varchar(50))
begin
insert into TblAreas (
codigo_area,
nombre_area)
values (
SPcodigo_area,
SPnombre_area);
end$$

DELIMITER $$
Create procedure SP_InsertarRoles (IN SProl varchar(15))
begin
insert into TblRoles (
rol)
values (
SProl);
end$$

DELIMITER $$
Create procedure SP_InsertarUsuarios (IN SPid_rol int,
IN SPclave varchar(64))
begin
insert into TblUsuarios (
id_rol,
clave)
values (
SPid_rol,
SPclave);
end$$

DELIMITER $$
Create procedure SP_InsertarEstudiantes (IN SPmatricula char(7),
IN SPid_usuario int, IN SPcodigo_carrera char(3), IN SPnombre_estudiante varchar(50), IN SPapellido_estudiante varchar(50))
begin
insert into TblEstudiantes (
matricula,
id_usuario,
codigo_carrera,
nombre_estudiante,
apellido_estudiante)
values (
SPmatricula,
SPid_usuario,
SPcodigo_carrera,
SPnombre_estudiante,
SPapellido_estudiante);
end$$

DELIMITER $$
Create procedure SP_InsertarAdmin (IN SPcodigo_admin char(5), 
IN SPid_usuario int)
begin
insert into TblAdmin (
codigo_admin,
id_usuario)
values (
SPcodigo_admin,
SPid_usuario);
end$$

DELIMITER $$
Create procedure SP_InsertarMaterias (IN SPcodigo_materia char(7), 
IN SPnombre_materia varchar(50), IN SPid_tipomateria int, IN SPcodigo_area char(3), IN SPcodigo_carrera char(3), IN SPcreditos int)
begin
insert into TblMaterias (
codigo_materia,
nombre_materia,
id_tipomateria,
codigo_area,
codigo_carrera,
creditos)
values (
SPcodigo_materia,
SPnombre_materia,
SPid_tipomateria,
SPcodigo_area,
SPcodigo_carrera,
SPcreditos);
end$$

DELIMITER $$
Create procedure SP_InsertarSecciones (IN SPnumero_seccion int, IN SPcodigo_materia char(7), IN SPid_docente int, IN SPhorario json)
begin
insert into TblSecciones (
numero_seccion,
codigo_materia,
id_docente,
horario)
value (
SPnumero_seccion,
SPcodigo_materia,
SPid_docente,
SPhorario);
end$$

DELIMITER $$
Create procedure SP_InsertarAlumnosSeccion (IN SPmatricula char(7), 
IN SPid_seccion int)
begin
insert into TblAlumnosSeccion (
matricula,
id_seccion)
values (
SPmatricula,
SPid_seccion);
end$$

DELIMITER $$
Create procedure SP_InsertarMateriasEnCarrera (IN SPcodigo_carrera char(3),
IN SPcodigo_materia char(7))
begin
insert into TblMateriasEnCarrera (
codigo_carrera,
codigo_materia)
values (
SPcodigo_carrera,
SPcodigo_materia);
end$$

-- UPDATE --

DELIMITER $$
Create procedure SP_EditarDocentes (IN SPid_docente int, IN SPnombre_docente varchar(50)
, IN SPapellido_docente varchar(50))
begin
update TblDocentes 
set nombre_docente = SPnombre_docente, apellido_docente = SPapellido_docente where id_docente = SPid_docente;
end$$

DELIMITER $$
Create procedure SP_EditarCarreras (IN SPcodigo_carrera char(3)
, IN SPnombre_carrera varchar(50), IN SPmax_creditos int)
begin
update TblCarreras
set codigo_carrera = SPcodigo_carrera, nombre_carrera = SPnombre_carrera, max_creditos = SPmax_creditos where codigo_carrera = SPcodigo_carrera;
end$$

DELIMITER $$
Create procedure SP_EditarTipoMateria(IN SPid_tipomateria int, IN SPtipo_materia varchar(10))
begin
update TblTipoMateria
set tipo_materia = SPtipo_materia where id_tipomateria = SPid_tipomateria;
end$$

DELIMITER $$
Create procedure SP_EditarAreas(IN SPcodigo_area char(3),IN SPnombre_area varchar(50))
begin
update TblAreas
set codigo_area = SPcodigo_area, nombre_area = SPnombre_area where codigo_area = SPcodigo_area;
end$$

DELIMITER $$
Create procedure SP_EditarRoles(IN SPid_rol int, IN SProl varchar(15))
begin
update TblRoles
set rol = SProl where id_rol = SPid_rol;
end$$

DELIMITER $$
Create procedure SP_EditarUsuarios(IN SPid_usuario int, IN SPid_rol int, IN SPclave varchar(64))
begin
update TblUsuarios
set id_rol = SPid_rol, clave = SPclave where id_usuario = SPid_usuario;
end$$

DELIMITER $$
Create procedure SP_EditarEstudiantes(IN SPmatricula char(7), IN SPid_usuario int, IN SPcodigo_carrera char(3), IN SPnombre_estudiante varchar(50), IN SPapellido_estudiante varchar(50))
begin
update TblEstudiantes
set id_usuario = SPid_usuario, codigo_carrera = SPcodigo_carrera, nombre_estudiante = SPnombre_estudiante, apellido_estudiante = SPapellido_estudiante where matricula = SPmatricula;
end$$ 

DELIMITER $$
Create procedure SP_EditarAdmin(IN SPcodigo_admin char(5), IN SPid_usario int)
begin
update TblAdmin
set codigo_admin = SPcodigo_admin, id_usuario = SPid_usuario where codigo_admin = SPcodigo_admin;
end$$

DELIMITER $$
Create procedure SP_EditarMaterias(IN SPcodigo_materia char(7), IN SPnombre_materia varchar(50), IN SPid_tipomateria INT, IN SPcodigo_area char(3), IN SPcodigo_carrera char(3), IN SPcreditos int)
begin
update TblMaterias
set codigo_materia = SPcodigo_materia, nombre_materia = SPnombre_materia, id_tipomateria = SPid_tipomateria, codigo_area =SPcodigo_area, codigo_carrera = SPcodigo_carrera, creditos = SPcreditos where codigo_materia = SPcodigo_materia;
end$$

DELIMITER $$
Create procedure SP_EditarSecciones(IN SPid_seccion int, IN SPnumero_seccion int, IN SPcodigo_materia char(7), IN SPid_docente int, IN SPhorario Json)
begin
update TblSecciones
set numero_seccion = SPnumero_seccion, codigo_materia = SPcodigo_materio, id_docente = SPid_docente, horario = SPhorario where id_seccion = SPid_seccion;
end$$

DELIMITER $$
Create procedure SP_EditarAlumnosSeccion(IN SPmatricula char(7), IN SPid_seccion int)
begin
update TblAlumnosSeccion
set matricula = SPmatricula, id_seccion = SPid_seccion where matricula = SPmatricula and id_seccion = SPid_seccion; 
end$$

DELIMITER $$
Create procedure SP_EditarMateriasEnCarrera(IN SPcodigo_carrera char(3), IN SPcodigo_materia char(7))
begin
update TblMateriasEnCarrera
set codigo_carrera = SPcodigo_carrera, codigo_materia = SPcodigo_materia where codigo_carrera = SPcodigo_carrera and codigo_materia = SPcodigo_materia;
end$$

-- DELETE --
DELIMITER $$
Create procedure SP_BorrarDocentes (IN SPid_docente int)
begin
delete from TblDocentes where id_docente = SPid_docente;
end$$

DELIMITER $$
Create procedure SP_BorrarCarreras (IN SPcodigo_carrera char(3))
begin
delete from TblCarreras where codigo_carrera = SPcodigo_carrera;
end$$

DELIMITER $$
Create procedure SP_BorrarTipoMateria(IN SPid_tipomateria int)
begin
delete from TblTipoMateria where id_tipomateria = SPid_tipomateria;
end$$

DELIMITER $$
Create procedure SP_BorrarAreas(IN SPcodigo_area char(3))
begin
delete from TblAreas where codigo_area = SPcodigo_area;
end$$

DELIMITER $$
Create procedure SP_BorrarRoles(IN SPid_rol int)
begin
delete from TblRoles where id_roles = SPid_rol;
end$$

DELIMITER $$
Create procedure SP_BorrarUsuarios(IN SPid_usuario int)
begin
delete from TblUsuarios where id_usuario = SPid_usuario;
end$$

DELIMITER $$
Create procedure SP_BorrarEstudiantes(IN SPmatricula char(7))
begin
delete from TblEstudiantes where matricula = SPmatricula;
end$$

DELIMITER $$
Create procedure SP_BorrarAdmin(IN SPcodigo_admin char(5))
begin
delete from TblEstudiantes where codigo_admin = SPcodigo_admin;
end$$

DELIMITER $$
Create procedure SP_BorrarMaterias(IN SPcodigo_materia char(7))
begin
delete from TblMaterias where codigo_materia = SPcodigo_materia;
end$$

DELIMITER $$
Create procedure SP_BorrarSecciones(IN SPid_seccion int)
begin
delete from TblSecciones where id_seccion = SPid_seccion;
end$$

DELIMITER $$
Create procedure SP_BorrarAlumnosSeccion(IN SPmatricula char(7), IN SPid_seccion int)
begin
delete from TblAlumnosSeccion where matricula = SPmatricula and id_seccion = SPid_seccion;
end$$

DELIMITER $$
Create procedure SP_BorrarMateriasEnCarrera(IN SPcodigo_carrera char(3), IN SPcodigo_materia char(7))
begin
delete from TblMateriasEnCarrera where codigo_carrera = SPcodiga_carrera and codigo_materia = SPcodigo_materia;
end$$


-- View or SP_Select --
DELIMITER $$
Create procedure SP_GetUser(IN SPmatricula char(7),IN SPclave varchar(64))
begin
select TblEstudiantes.matricula,TblCarreras.nombre_carrera,TblEstudiantes.nombre_estudiante,TblEstudiantes.apellido_estudiante,
TblRoles.rol from (((TblUsuarios
inner join TblEstudiantes on TblUsuarios.id_usuario = TblEstudiantes.id_usuario)
inner join TblRoles on TblUsuarios.id_rol = TblRoles.id_rol)
inner join TblCarreras on TblCarreras.codigo_carrera = TblEstudiantes.codigo_carrera
) where TblEstudiantes.matricula = SPmatricula and TblUsuarios.clave = SPclave;
end$$

call SP_GetUser("1090096","test1");


