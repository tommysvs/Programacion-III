#pragma once

#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include "NodoArbol.h"

class ArbolBinario {
private:
	NodoArbol* raiz;

	NodoArbol* agregarRec(NodoArbol*, const char*); //Rec de recursivo xd

	int obtenerPeso();
	int obtenerAlturaMaxima();

	void imprimirRec(NodoArbol*); //Impresion normal
	void imprimirAscRec(NodoArbol*); //Impresion inorden
public:
	ArbolBinario();

	void agregarElemento(const char*);

	void guardarElementos();
	void cargarElementos();

	void imprimir();
	void imprimirAscendente();
};

#endif // !ARBOLBINARIO_H
