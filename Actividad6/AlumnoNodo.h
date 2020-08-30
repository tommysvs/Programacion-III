#pragma once

#ifndef ALUMNO_NODO_H
#define ALUMNO_NODO_H

class AlumnoNodo {
private:
	char* nombre;
	float nota;
	AlumnoNodo* siguiente;
public:
	AlumnoNodo();
	AlumnoNodo(const char*, float);

	void setNombre(const char*);
	void setNota(float);
	void setSiguiente(AlumnoNodo*);

	char* getNombre();
	int getNota();
	AlumnoNodo* getSiguiente();
};

#endif // !ALUMNO_NODO_H
