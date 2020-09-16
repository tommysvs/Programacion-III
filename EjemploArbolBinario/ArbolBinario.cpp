#include <iostream>
#include <fstream>
#include "ArbolBinario.h"

using namespace std;

ArbolBinario::ArbolBinario() : raiz(nullptr) { }

void ArbolBinario::agregarElemento(const char* _nombre) {
	raiz = agregarRec(raiz, _nombre);
}

NodoArbol* ArbolBinario::agregarRec(NodoArbol* _raiz, const char* _nombre) {
	if (_raiz == nullptr) {
		NodoArbol* nuevo = new NodoArbol(_nombre, nullptr, nullptr);
		_raiz = nuevo;
		cout << "Nodo agregado." << endl;
	}
	else if (strcmp(_nombre, _raiz->getNombre()) > 0) {
		_raiz->setHijoDerecho(agregarRec(_raiz->getHijoDerecho(), _nombre));
	}
	else if (strcmp(_nombre, _raiz->getNombre()) < 0) {
		_raiz->setHijoIzquierdo(agregarRec(_raiz->getHijoIzquierdo(), _nombre));
	}

	return _raiz;
}

int ArbolBinario::obtenerPeso() {
	return obtenerPesoRec(raiz);
}

int ArbolBinario::obtenerPesoRec(NodoArbol* _raiz) {
	int peso = 1;

	if (_raiz == nullptr)
		return 0;

	if (_raiz->getHijoIzquierdo() != nullptr)
		peso += obtenerPesoRec(_raiz->getHijoIzquierdo());

	if (_raiz->getHijoDerecho() != nullptr)
		peso += obtenerPesoRec(_raiz->getHijoDerecho());

	return peso;
}

int ArbolBinario::obtenerAlturaMaxima() {
	return obtenerAlturaMaximaRec(raiz);
}

int ArbolBinario::obtenerAlturaMaximaRec(NodoArbol* _raiz) {
	if (_raiz == nullptr)
		return 0;
	else
		return (1 + mayor(obtenerAlturaMaximaRec(_raiz->getHijoIzquierdo()), obtenerAlturaMaximaRec(_raiz->getHijoDerecho())));
}

int ArbolBinario::mayor(int _hijoIzq, int _hijoDer) {
	int mayor;
	_hijoIzq > _hijoDer ? mayor = _hijoIzq : mayor = _hijoDer;

	return mayor;
}

void ArbolBinario::guardarElementos() {
	guardarEleRec(raiz);
	cout << "Los elementos se han guardado correctamente." << endl;
}

void ArbolBinario::guardarEleRec(NodoArbol* _raiz) {
	ofstream elemento("ArbolBinario.dat", ios::app);

	if (!elemento) {
		cout << "Error: No se pudo abrir el archivo.";
		return;
	}

	if (_raiz == nullptr)
		return;

	elemento << _raiz->getNombre() << endl;
	guardarEleRec(_raiz->getHijoIzquierdo());
	guardarEleRec(_raiz->getHijoDerecho());

	elemento.close();
}

void ArbolBinario::cargarElementos() {
	ifstream elemento("ArbolBinario.dat", ios::in);

	if (!elemento) {
		cout << "Error: No se pudo abrir el archivo.";
		return;
	}

	cout << "*** C A R G A  D E  E L E M E N T O S ***\n\n";

	char nombre[30];
	while (elemento >> nombre) {
		agregarElemento(nombre);
	}

	elemento.close();
}

void ArbolBinario::imprimir() {
	imprimirRec(raiz);
}

void ArbolBinario::imprimirRec(NodoArbol* _raiz) {
	if (_raiz == nullptr)
		return;

	cout << "[ " << _raiz->getNombre() << " ]";
	imprimirRec(_raiz->getHijoIzquierdo());
	imprimirRec(_raiz->getHijoDerecho());
}

void ArbolBinario::imprimirAscendente() {
	imprimirAscRec(raiz);
}

void ArbolBinario::imprimirAscRec(NodoArbol* _raiz) {
	if (_raiz == nullptr)
		return;

	imprimirAscRec(_raiz->getHijoIzquierdo());
	cout << "[ " << _raiz->getNombre() << " ]";
	imprimirAscRec(_raiz->getHijoDerecho());
}