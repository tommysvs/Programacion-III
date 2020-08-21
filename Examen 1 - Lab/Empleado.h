#pragma once

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"
#include "Empresa.h"

class Empleado : public Persona, public Empresa {
private:
	int sueldo_bruto;
	int salario_neto;
public:
	Empleado();
	Empleado(int);

	void mostrar();
	void calcular_salario_neto();
};

#endif EMPLEADO_H