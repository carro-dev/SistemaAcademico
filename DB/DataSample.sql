use Sisaca;

-- Roles --
insert into TblRoles (rol) values ("Estudiantes");
insert into TblRoles (rol) values ("Admin");

-- Usuarios -- 
Insert into TblUsuarios (id_rol,clave) values (1,"test1");
Insert into TblUsuarios (id_rol,clave) values (1,"test2");
Insert into TblUsuarios (id_rol,clave) values (1,"test3");
Insert into TblUsuarios (id_rol,clave) values (1,"test4");
Insert into TblUsuarios (id_rol,clave) values (1,"test5");

-- Areas --
Insert into TblAreas (codigo_area,nombre_area) values ("ING","Ingenieria");
Insert into TblAreas (codigo_area,nombre_area) values ("CSH","Ciencias Sociales y Humanidades");
Insert into TblAreas (codigo_area,nombre_area) values ("CBM","Ciencias Basicas y Ambientales");

-- Carreras --
Insert into TblCarreras (codigo_carrera,codigo_area,nombre_carrera,max_creditos) values ("IDS","ING","Ingenieria de Software",22);
Insert into TblCarreras (codigo_carrera,codigo_area,nombre_carrera,max_creditos) values ("SIS","ING","Ingenieria en Sistemas",22);
Insert into TblCarreras (codigo_carrera,codigo_area,nombre_carrera,max_creditos) values ("PSI","CSH","Licenciatura en Psicologia",20);

-- Estudiantes --
Insert into TblEstudiantes values ("1090096",1,"IDS","Carlos","Luciano");
Insert into TblEstudiantes values ("1107613",2,"IDS","Aliany","Gonzalez");
Insert into TblEstudiantes values ("1107614",3,"IDS","Metzly","Reyes");
Insert into TblEstudiantes values ("1107615",4,"SIS","Diego","Valentim");
Insert into TblEstudiantes values ("1107616",4,"PSI","Jhon","Torres");

-- Docentes --
Insert into TblDocentes (nombre_docente,apellido_docente) values ("Juan","Perez");
Insert into TblDocentes (nombre_docente,apellido_docente) values ("Pedro","Sosa");

-- TipoMateria --
Insert into TblTipoMateria (tipo_materia) Values ("Carrera");
Insert into TblTipoMateria (tipo_materia) Values ("Area");
Insert into TblTipoMateria (tipo_materia) Values ("Elctiva");

-- Materias --
Insert into TblMaterias (codigo_materia,nombre_materia,id_tipomateria,codigo_area,codigo_carrera,creditos) values ("IDS201","Programacion I",1,NULL,"IDS",4);
Insert into TblMaterias (codigo_materia,nombre_materia,id_tipomateria,codigo_area,codigo_carrera,creditos) values ("CBM101","Matematica I",2,"CBM",NULL,5);

-- MateriasEnCarrea --
Insert into TblMateriasEnCarrera values("IDS","IDS201");
Insert into TblMateriasEnCarrera values("IDS","CBM101");
Insert into TblMateriasEnCarrera values("SIS","IDS201");
Insert into TblMateriasEnCarrera values("SIS","CBM101");
Insert into TblMateriasEnCarrera values("PSI","CBM101");

-- Secciones --
Insert into TblSecciones (numero_seccion,codigo_materia,id_docente,horario) values (1,"IDS201",1,'{"Lunes":[{"Inicio":"14:00","Fin":"16:00"}],"Miercoles":[{"Inicio":"14:00","Fin":"16:00"}]}');
Insert into TblSecciones (numero_seccion,codigo_materia,id_docente,horario) values (2,"IDS201",1,'{"Marte":[{"Inicio":"16:00","Fin":"18:00"}],"Jueves":[{"Inicio":"16:00","Fin":"18:00"}]}');
Insert into TblSecciones (numero_seccion,codigo_materia,id_docente,horario) values (1,"CBM101",2,'{"Lunes":[{"Inicio":"9:00","Fin":"11:00"}],"Miercoles":[{"Inicio":"9:00","Fin":"11:00"}],"Jueves":[{"Inicio":"9:00","Fin":"10:00"}]}');
Insert into TblSecciones (numero_seccion,codigo_materia,id_docente,horario) values (2,"CBM101",2,'{"Martes":[{"Inicio":"7:00","Fin":"9:00"}],"Jueves":[{"Inicio":"7:00","Fin":"9:00"}],"Viernes":[{"Inicio":"10:00","Fin":"11:00"}]}');

-- AlumnosSeccion --
Insert into TblAlumnosSeccion (matricula,id_seccion) values ("1090096",1);
Insert into TblAlumnosSeccion (matricula,id_seccion) values ("1090096",3);
Insert into TblAlumnosSeccion (matricula,id_seccion) values ("1107613",1);
Insert into TblAlumnosSeccion (matricula,id_seccion) values ("1107613",3);
Insert into TblAlumnosSeccion (matricula,id_seccion) values ("1107614",2);
Insert into TblAlumnosSeccion (matricula,id_seccion) values ("1107614",7);
Insert into TblAlumnosSeccion (matricula,id_seccion) values ("1107615",2);
Insert into TblAlumnosSeccion (matricula,id_seccion) values ("1107615",7);
Insert into TblAlumnosSeccion (matricula,id_seccion) values ("1107616",7);


