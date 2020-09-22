#include <iostream>
#include <conio.h>
#include "Utilerias.h"

using namespace std;

int main() {
	Utilerias registros;

	cout << "Cantidad de registros almacenados: " << registros.obtenerCantidadRegistros() << endl;

	_getch();
}