#include <iostream>
#include <conio.h>
#include "Utilerias.h"
#include "ListaEnlazadaSimple.h"

using namespace std;

int main() {
	Utilerias registros;

	cout << "Cantidad de registros almacenados: " << registros.obtenerCantidadRegistros() << endl;
	cout << "Cantidad de registros almacenados por tipo de pago: " << endl;
	registros.imprimirCantidadPorTipoPago();

	//-------------------------------------------------------

	ListaEnlazadaSimple lista;

	lista.cargarDatos(2009, 4, 8);

	cout << "Monto total adeudado de acuerdo al mes indicado: " << endl;
	lista.obtenerTotalxMes(4);

	lista.eliminarDatosMes(7);

	_getch();
}