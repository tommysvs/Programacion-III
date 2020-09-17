#include <iostream>
#include <fstream>
#include "Alumnos.h"

using namespace std;

void Alumnos::agregarAlumno() {
	ofstream alumnosOut("alumnos.dat", ios::in | ios::out | ios::app | ios::binary);

	alumno nuevo_alumno;

	cout << "Ingrese numero de cuenta: ";
	cin >> nuevo_alumno.cuenta_alumno;

	cout << "Ingrese nombre de alumno: ";
	cin >> nuevo_alumno.nombre;

	nuevo_alumno.promedio = 0;

	alumnosOut.seekp(0, ios::end);

	alumnosOut.write(reinterpret_cast<const char*>(&nuevo_alumno), sizeof(alumno));

	alumnosOut.close();

	cout << "Alumno agregado." << endl;
}

void Alumnos::listarAlumnos() {
	ifstream alumnoIn("alumnos.dat", ios::in | ios::binary);

	alumno leer_alumno;

	alumnoIn.seekg(0, ios::beg);

	alumnoIn.read(reinterpret_cast<char*>(&leer_alumno), sizeof(alumno));

	while (!alumnoIn.eof()) {
		cout << "Alumno { cuenta: " << leer_alumno.cuenta_alumno << ", nombre: " << leer_alumno.nombre << ", promedio: " << leer_alumno.promedio << " }" << endl;
		alumnoIn.read(reinterpret_cast<char*>(&leer_alumno), sizeof(alumno));
	}

	alumnoIn.close();
}

bool Alumnos::buscarAlumno(int _codigoAlumno) {
	ifstream alumnoIn("alumnos.dat", ios::in | ios::binary);

	alumnoIn.seekg(0, ios::beg);

	alumno leer_alumno;

	alumnoIn.read(reinterpret_cast<char*>(&leer_alumno), sizeof(alumno));

	while (!alumnoIn.eof()) {
		if (leer_alumno.cuenta_alumno == _codigoAlumno ) {
			alumnoIn.close();
			return true;
		}

		alumnoIn.read(reinterpret_cast<char*>(&leer_alumno), sizeof(alumno));
	}

	alumnoIn.close();
	return false;
}