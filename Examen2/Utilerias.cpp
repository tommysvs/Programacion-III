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

}