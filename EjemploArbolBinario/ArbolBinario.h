#pragma once

#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include "NodoArbol.h"

class ArbolBinario {
private:
	NodoArbol* raiz;
public:
	ArbolBinario();

	void agregarElemento(const char*);
	NodoArbol* agregarRec(NodoArbol*, const char*); //Rec de recursivo xd

	void imprimir();
	void imprimirRec(NodoArbol*); //Iwal
};

#endif // !ARBOLBINARIO_H
