#include <string>
#include <fstream>
#include <iostream>
#include "NodoArbol.h"
#include "Utilerias.h"

using namespace std;

NodoArbol::NodoArbol() : apellido(nullptr), hijoDerecho(nullptr), hijoIzquierdo(nullptr) { }

NodoArbol::NodoArbol(const char* _apellido, NodoArbol* _hDerecho, NodoArbol* _hIzquierdo) {
	setApellido(_apellido);
	setHijoDerecho(_hDerecho);
	setHijoIzquierdo(_hIzquierdo);
}

void NodoArbol::setApellido(const char* _apellido) {
	fstream registrosIn("datab.bin", ios::in | ios::binary);

	if (!registrosIn) {
		cout << "Error al intentar abrir el archivo datab.bin" << endl;
		return;
	}

	registrosIn.seekg(0, ios::beg);

	registro registroAct;

	apellido = new char[strlen(_apellido)];
	strcpy_s(apellido, strlen(_apellido) + 1, _apellido);

	registrosIn.close();
}

void NodoArbol::setHijoDerecho(NodoArbol* _hDer) {
	this->hijoDerecho = _hDer;
}

void NodoArbol::setHijoIzquierdo(NodoArbol* _hIzq) {
	this->hijoIzquierdo = _hIzq;
}

char* NodoArbol::getApellido() {
	return this->apellido;
}

NodoArbol* NodoArbol::getHijoDerecho() {
	return this->hijoDerecho;
}

NodoArbol* NodoArbol::getHijoIzquierdo() {
	return this->hijoIzquierdo;
}