#include <string>
#include "EmpleadoNodo.h"

EmpleadoNodo::EmpleadoNodo() : codigo(-1), nombre(nullptr), salario(-1), anterior(nullptr), siguiente(nullptr) {}

EmpleadoNodo::EmpleadoNodo(int _codigo, const char* _nombre, float _salario, EmpleadoNodo* _anterior, EmpleadoNodo* _siguiente) {
	this->codigo = _codigo;
	this->salario = _salario;

	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);

	this->anterior = _anterior;
	this->siguiente = _siguiente;
}