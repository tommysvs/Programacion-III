#include "Nodo.h"

Nodo::Nodo() : valor(-1), siguiente(nullptr), anterior(nullptr) {}

Nodo::Nodo(int _valor, Nodo* _siguiente, Nodo* _anterior) : valor(_valor), siguiente(_siguiente), anterior(_anterior) { }

void Nodo::setValor(int _valor) {
	this->valor = _valor;
}

void Nodo::setAnterior(Nodo* _anterior) {
	this->anterior = _anterior;
}

void Nodo::setSiguiente(Nodo* _siguiente) {
	this->siguiente = _siguiente;
}

int Nodo::getValor() {
	return this->valor;
}

Nodo* Nodo::getAnterior() {
	return this->anterior;
}

Nodo* Nodo::getSiguiente() {
	return this->siguiente;
}