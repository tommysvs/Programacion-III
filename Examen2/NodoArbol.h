#pragma once

#ifndef NODO_ARBOL_H
#define NODO_ARBOL_H

class NodoArbol {
private:
	char* apellido;
	NodoArbol* hijoDerecho;
	NodoArbol* hijoIzquierdo;
public:
	NodoArbol();
	NodoArbol(const char*, NodoArbol*, NodoArbol*);

	void setApellido(const char*);
	void setHijoDerecho(NodoArbol*);
	void setHijoIzquierdo(NodoArbol*);

	char* getApellido();
	NodoArbol* getHijoDerecho();
	NodoArbol* getHijoIzquierdo();
};

#endif // !NODO_ARBOL_H