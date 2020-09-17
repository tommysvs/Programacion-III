#include <iostream>
#include <fstream>
#include "Materias.h"

using namespace std;

void Materias::agregarMateria() {
	ofstream materiasOut("materias.dat", ios::in | ios::out | ios::app | ios::binary);

	materia nueva_materia;

	cout << "Ingrese el codigo de materia: ";
	cin >> nueva_materia.codigo_materia;

	cout << "Ingrese el nombre de materia: ";
	cin >> nueva_materia.materia;

	cout << "Ingrese la cantidad de unidades valorativas: ";
	cin >> nueva_materia.unidad_valorativa;

	materiasOut.seekp(0, ios::end);

	materiasOut.write(reinterpret_cast<const char*>(&nueva_materia), sizeof(materia));

	materiasOut.close();

	cout << "Materia agregada." << endl;
}

void Materias::imprimirMaterias() {
	ifstream materiaIn("materias.dat", ios::in | ios::binary);

	materia leer_materia;

	materiaIn.seekg(0, ios::beg);

	materiaIn.read(reinterpret_cast<char*>(&leer_materia), sizeof(materia));

	while (!materiaIn.eof()) {
		cout << "Materia { codigo: " << leer_materia.codigo_materia << ", nombre: " << leer_materia.materia << ", unidad valorativa: " << leer_materia.unidad_valorativa << " }" << endl;

		materiaIn.read(reinterpret_cast<char*>(&leer_materia), sizeof(materia));
	}

	materiaIn.close();
}

bool Materias::buscarMateria(int _codigoMateria) {
	ifstream materiaIn("materias.dat", ios::in | ios::binary);

	materiaIn.seekg(0, ios::beg);

	materia leer_materia;

	materiaIn.read(reinterpret_cast<char*>(&leer_materia), sizeof(materia));

	while (!materiaIn.eof()) {
		if (leer_materia.codigo_materia == _codigoMateria) {
			materiaIn.close();
			return true;
		}

		materiaIn.read(reinterpret_cast<char*>(&leer_materia), sizeof(materia));
	}

	materiaIn.close();
	return false;
}