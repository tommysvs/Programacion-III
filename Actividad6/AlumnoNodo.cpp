#include <string>
#include "AlumnoNodo.h"

AlumnoNodo::AlumnoNodo() : nombre(nullptr), nota(0.0), siguiente(nullptr) {}

AlumnoNodo::AlumnoNodo(const char* _nombre, float _nota) {
	setNombre(_nombre);
	setNota(_nota);
}

void AlumnoNodo::setNombre(const char* _nombre) {
	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);
}

void AlumnoNodo::setNota(float _nota) {
	this->nota = _nota;
}

void AlumnoNodo::setSiguiente(AlumnoNodo* _siguiente) {
	this->siguiente = _siguiente;
}

char* AlumnoNodo::getNombre() {
	return this->nombre;
}

float AlumnoNodo::getNota() {
	return this->nota;
}

AlumnoNodo* AlumnoNodo::getSiguiente() {
	return this->siguiente;
}