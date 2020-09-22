#include "Nodo.h"

Nodo::Nodo() : anio(-1), mesInicio(-1), mesFinal(-1), siguiente(nullptr) {}

Nodo::Nodo(int _anio, int _mesInicio, int _mesFinal, Nodo* _siguiente) : anio(_anio), mesInicio(_mesInicio), mesFinal(_mesFinal), siguiente(_siguiente) { }

void Nodo::setAnio(int _anio) {
	this->anio = _anio;
}

void Nodo::setMesInicio(int _mesInicio) {
	this->anio = _mesInicio;
}

void Nodo::setMesFinal(int _mesFinal) {
	this->anio = _mesFinal;
}

void Nodo::setSiguiente(Nodo* _siguiente) {
	this->siguiente = _siguiente;
}

int Nodo::getAnio() {
	return this->anio;
}

int Nodo::getMesInicio() {
	return this->mesInicio;
}

int Nodo::getMesFinal() {
	return this->mesFinal;
}

Nodo* Nodo::getSiguiente() {
	return this->siguiente;
}