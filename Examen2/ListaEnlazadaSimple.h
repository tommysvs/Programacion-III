#pragma once

#ifndef LISTA_ENLAZADA_SIMPLE
#define LISTA_ENLAZADA_SIMPLE

#include "Nodo.h"

class ListaEnlazadaSimple {
private:
	const char* name[30];
	const char* lastname[30];
	const char* credit_card[30];
	const char* date[12];
	double total;

	Nodo* primero;
public:
	ListaEnlazadaSimple();

	bool estaVacia();

	void cargarDatos(int, int, int);
	double obtenerTotalxMes(int);
	void eliminarDatosMes(int);
};

#endif // !LISTA_ENLAZADA_SIMPLE