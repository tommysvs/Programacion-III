#include <iostream>
#include "SeccionLista.h"

using namespace std;

SeccionLista::SeccionLista() : primero(nullptr) { }

void SeccionLista::agregarAlumno(const char* _nombre, float _nota) {
	AlumnoNodo* nuevo = new AlumnoNodo(_nombre, _nota);

	if (estaVacia())
		primero = nuevo;
	else {
		AlumnoNodo* actual = primero;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
	}
}

void SeccionLista::listarSeccion() {

	if (primero == nullptr)
		return;

	cout << "Alumno { nombre: " << primero->getNombre() << ", nota: " << primero->getNota() << " }" << endl;
}

bool SeccionLista::estaVacia() {
	return primero == nullptr;
}

int SeccionLista::cantidadAprobados() {
	int aprobados = 0;

	if (primero->getNota() >= 60)
		aprobados++;

	return aprobados;
}