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
};

#endif // !EMPLEADO_NODO_H