#include <iostream>
#include <conio.h>
#include "Alumnos.h"
#include "Materias.h"
#include "Notas.h"

using namespace std;

int main() {
	Alumnos alumno;
	Materias materia;
	Notas nota;

	//alumno.agregarAlumno();
	//cout << endl;
	//materia.agregarMateria();
	//cout << endl;
	//nota.agregarNota();

	//cout << endl;

	alumno.listarAlumnos(); 
	cout << endl;
	materia.imprimirMaterias(); 
	cout << endl;
	nota.listarNotas();

	_getch();
}