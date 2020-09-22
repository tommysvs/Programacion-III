#include <iostream>
#include <conio.h>
#include "Utilerias.h"

using namespace std;

int main() {
	Utilerias registros;

	cout << "Cantidad de registros almacenados: " << registros.obtenerCantidadRegistros() << endl;
	cout << "Cantidad de registros almacenados por tipo de pago: " << endl;
	registros.imprimirCantidadPorTipoPago();

	_getch();
}