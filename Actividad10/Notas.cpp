#include <iostream>
#include <fstream>
#include "Notas.h"
#include "Alumnos.h"
#include "Materias.h"

using namespace std;

void Notas::agregarNota() {
	Alumnos buscarA;
	Materias buscarM;
	int codigoAlumno;
	int codigoMateria;
	float nota;

	do {
		cout << "Ingrese el numero de cuenta de Alumno: ";
		cin >> codigoAlumno;

	} while (!buscarA.buscarAlumno(codigoAlumno));

	do {
		cout << "Ingrese el codigo de materia: ";
		cin >> codigoMateria;

	} while (!buscarM.buscarMateria(codigoMateria));

	cout << "Ingrese la nota del Alumno: ";
	cin >> nota;

	notas nota_write;
	nota_write.cuenta = codigoAlumno;
	nota_write.codigo = codigoMateria;
	nota_write.nota = nota;

	ofstream notasOut("notas.dat", ios::out | ios::app | ios::binary);

	notasOut.seekp(0, ios::end);

	notasOut.write(reinterpret_cast<const char*>(&nota_write), sizeof(notas));

	actualizarPromedio(codigoAlumno);

	notasOut.close();
}

void Notas::listarNotas() {

}

void Notas::actualizarPromedio(int _codigoAlumno) {

}