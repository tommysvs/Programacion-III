#include <string>
#include "EmpleadoNodo.h"

EmpleadoNodo::EmpleadoNodo() : codigo(-1), nombre(nullptr), salario(-1), anterior(nullptr), siguiente(nullptr) {}

EmpleadoNodo::EmpleadoNodo(int _codigo, const char* _nombre, float _salario, EmpleadoNodo* _anterior, EmpleadoNodo* _siguiente) {
	setCodigo(_codigo);
	setNombre(_nombre);
	setSalario(_salario);
	setAnterior(_anterior);
	setSiguiente(_siguiente);
}

void EmpleadoNodo::setCodigo(int _codigo) {
	this->codigo = _codigo;
}

void EmpleadoNodo::setNombre(const char* _nombre) {
	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);
}

void EmpleadoNodo::setSalario(float _salario) {
	this->salario = _salario;
}

void EmpleadoNodo::setAnterior(EmpleadoNodo* _anterior) {
	this->anterior = _anterior;
}

void EmpleadoNodo::setSiguiente(EmpleadoNodo* _siguiente) {
	this->siguiente = _siguiente;
}

int EmpleadoNodo::getCodigo() {
	return this->codigo;
}

char* EmpleadoNodo::getNombre() {
	return this->nombre;
}

float EmpleadoNodo::getSalario() {
	return this->salario;
}

EmpleadoNodo* EmpleadoNodo::getAnterior() {
	return this->anterior;
}

EmpleadoNodo* EmpleadoNodo::getSiguiente() {
	return this->siguiente;
}