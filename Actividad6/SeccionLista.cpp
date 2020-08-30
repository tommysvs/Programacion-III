#include <iostream>
#include "SeccionLista.h"

using namespace std;

SeccionLista::SeccionLista() : primero(nullptr) { }

void SeccionLista::agregarAlumno(const char* _nombre, float _nota) {
	
}

void SeccionLista::listarSeccion() {
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