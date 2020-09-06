#pragma once

#ifndef EMPLEADO_NODO_H
#define EMPLEADO_NODO_H

class EmpleadoNodo {
private:
	int codigo;
	char* nombre;
	float salario;
	EmpleadoNodo* anterior;
	EmpleadoNodo* siguiente;
public:
	EmpleadoNodo();
	EmpleadoNodo(int, const char*, float, EmpleadoNodo*, EmpleadoNodo*);

	void setCodigo(int);
	void setNombre(const char*);
	void setSalario(float);
	void setAnterior(EmpleadoNodo*);
	void setSiguiente(EmpleadoNodo*);

	int getCodigo();
	char* getNombre();
	float getSalario();
	EmpleadoNodo* getAnterior();
	EmpleadoNodo* getSiguiente();
};

#endif // !EMPLEADO_NODO_H