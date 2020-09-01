#pragma once

#ifndef NODO_H
#define NODO_H

class Nodo {
private:
	int valor;
	Nodo* siguiente;
	Nodo* anterior;
public:
	Nodo();
	Nodo(int, Nodo*, Nodo*);

	void setValor(int);
	void setAnterior(Nodo*);
	void setSiguiente(Nodo*);

	int getValor();
	Nodo* getAnterior();
	Nodo* getSiguiente();
};

#endif // !NODO_H