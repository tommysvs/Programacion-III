#pragma once

#ifndef EMPLEADOS_H
#define EMPLEADOS_H

struct empleados {
	int codigo;			//4 bytes
	char nombre[30];	//30 bytes
	char puesto[15];	//15 bytes
	int codigoJefe;		//4 bytes
	bool activo;		//1 byte
};

void registroEmpleados();
void consultaEmpleados();
void desactivarEmpleado(int);
int cantidadEmpleados();

#endif // !EMPLEADOS_H
