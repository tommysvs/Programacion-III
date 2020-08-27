#pragma once

#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H

#include <iostream>
#include "Nodo.h"

class ListaSimple {
private:
	Nodo* primero;
public:
	ListaSimple();

	void agregarElemento(int);
	bool estaVacia();
	void imprimir();

	void eliminar(int);
	void eliminarEnPosiciion(int);
	int cantidadElementos();
};

#endif // !LISTA_SIMPLE_H