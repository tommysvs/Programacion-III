#include <iostream>
#include <conio.h>
#include "ArbolBinario.h"

using namespace std;

int main() {
	ArbolBinario arbol;

	arbol.agregarElemento("John");
	arbol.agregarElemento("Omar");
	arbol.agregarElemento("Luis");
	arbol.agregarElemento("Elkin");
	arbol.agregarElemento("Francis");
	arbol.agregarElemento("Rosa");

	arbol.imprimir();

	cout << endl;

	arbol.imprimirAscendente();

	_getch();
}