#include <iostream>
#include <conio.h>
#include "ArbolBinario.h"

using namespace std;

int main() {
	ArbolBinario arbol;

	//agregar elementos
	//arbol.agregarElemento("John");
	//arbol.agregarElemento("Omar");
	//arbol.agregarElemento("Luis");
	//arbol.agregarElemento("Elkin");
	//arbol.agregarElemento("Francis");
	//arbol.agregarElemento("Rosa");

	//guardar elementos
	//arbol.guardarElementos();

	//cargar elementos;
	arbol = ArbolBinario();
	arbol.cargarElementos();
	cout << endl;

	arbol.imprimir();
	cout << endl;

	arbol.imprimirAscendente();
	cout << "\n\n";

	cout << "Peso (arbol): " << arbol.obtenerPeso() << endl;
	cout << "Altura maxima (arbol): " << arbol.obtenerAlturaMaxima() << endl;

	_getch();
}