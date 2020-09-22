#include <iostream>
#include <fstream>
#include "Utilerias.h"

using namespace std;

int Utilerias::obtenerCantidadRegistros() {
	fstream registrosIn("datab.bin", ios::in | ios::binary);

	if (!registrosIn) {
		cout << "Error al intentar abrir el archivo datab.bin" << endl;
		return -1;
	}

	registrosIn.seekg(0, ios::end);

	int pos = registrosIn.tellg();

	return pos / sizeof(registro);
}

void Utilerias::imprimirCantidadPorTipoPago() {
	ifstream registrosIn("datab.bin", ios::in | ios::binary);

	if (!registrosIn) {
		cout << "Error al intentar leer el archivo datab.bin" << endl;
		return;
	}

	registrosIn.seekg(0, ios::beg);

	registro actual;
	int pos;

	registrosIn.read(reinterpret_cast<char*>(&actual), sizeof(registro));

	while (!registrosIn.eof()) {
		if (actual.payment_type == "Cash") {
			pos = registrosIn.tellg();
			pos = pos / sizeof(registro);
			cout << "Cash: " << pos << endl;
		}
		else if (actual.payment_type == "Credit") {
			pos = registrosIn.tellg();
			pos = pos / sizeof(registro);
			cout << "Credit: " << pos << endl;
		}
		else if (actual.payment_type == "NA") {
			pos = registrosIn.tellg();
			pos = pos / sizeof(registro);
			cout << "NA: " << pos << endl;
		}

		registrosIn.read(reinterpret_cast<char*>(&actual), sizeof(registro));
	}

	registrosIn.close();
}