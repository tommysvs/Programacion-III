#pragma once

#ifndef EMPLEADOS_H
#define EMPLEADOS_H

struct empleados {
	int codigo;
	char nombre[30];
	char puesto[15];
	int codigoJefe;
	bool activo;
};

void registroEmpleados();
void consultaEmpleados();

#endif // !EMPLEADOS_H
