#include <iostream>
#include <conio.h>
#include "Alumnos.h"
#include "Materias.h"

int main() {
	Alumnos alumno;
	Materias materia;

	alumno.agregarAlumno();
	alumno.listarAlumnos();

	materia.agregarMateria();
	materia.imprimirMaterias();

	_getch();
}