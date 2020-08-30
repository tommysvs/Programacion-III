#pragma once

#ifndef SECCION_LISTA_H
#define SECCION_LISTA_H

#include "AlumnoNodo.h"

class SeccionLista {
private:
	AlumnoNodo* primero;
public:
	SeccionLista();

	void agregarAlumno(const char*, float);
	void listarSeccion();

	bool estaVacia();
	int cantidadAprobados();
};

#endif // !SECCION_LISTA_H
