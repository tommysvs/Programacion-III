#include <string>
#include "NodoArbol.h"

NodoArbol::NodoArbol() : nombre(nullptr), hijoDerecho(nullptr), hijoIzquierdo(nullptr) { }

NodoArbol::NodoArbol(const char* _nombre, NodoArbol* _hDerecho, NodoArbol* _hIzquierdo) {
	setNombre(_nombre);
	setHijoDerecho(_hDerecho);
	setHijoIzquierdo(_hIzquierdo);
}

void NodoArbol::setNombre(const char* _nombre) {
	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);
}

void NodoArbol::setHijoDerecho(NodoArbol* _hDer) {
	this->hijoDerecho = _hDer;
}

void NodoArbol::setHijoIzquierdo(NodoArbol* _hIzq) {
	this->hijoIzquierdo = _hIzq;
}

char* NodoArbol::getNombre() {
	return this->nombre;
}

NodoArbol* NodoArbol::getHijoDerecho() {
	return this->hijoDerecho;
}

NodoArbol* NodoArbol::getHijoIzquierdo() {
	return this->hijoIzquierdo;
}