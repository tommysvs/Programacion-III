#pragma once

#ifndef EMPRESA_LISTA_H
#define EMPRESA_LISTA_H

#include "EmpleadoNodo.h"

class EmpresaLista {
private:
	EmpleadoNodo* primero;
	EmpleadoNodo* ultimo;
public:
	EmpresaLista();

	bool estaVacia();
	bool agregarEmpleado(int, const char*, float);
	bool insertarEmpleado(int, const char*, float);
	bool eliminarEmpleado(int);
	void actualizarSalarios(float);

	void imprimirEmpleados();
};

#endif // !EMPRESA_LISTA_H

