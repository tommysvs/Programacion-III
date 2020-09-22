#pragma once

#ifndef NODO_H
#define NODO_H

class Nodo {
private:
	int anio;
	int mesInicio;
	int mesFinal;

	Nodo* siguiente;
public:
	Nodo();
	Nodo(int, int, int, Nodo*);

	void setAnio(int);
	void setMesInicio(int);
	void setMesFinal(int);
	void setSiguiente(Nodo*);

	int getAnio();
	int getMesInicio();
	int getMesFinal();
	Nodo* getSiguiente();
};

#endif // !NODO_H