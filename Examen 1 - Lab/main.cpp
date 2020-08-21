#include <iostream>
#include <conio.h>
#include "Persona.h"
#include "Cliente.h"
#include "Empleado.h"
#include "Directivo.h"
#include "Empresa.h"

void main() {
	Persona persona("Tommy Vega", 24);
	Empleado empleado(1189);
	Cliente cliente("Microsoft", 7894523);
	Directivo directivo("tecnologia");
	Empresa* empresa[2];

	empresa[0] = new Cliente("Google", 159546);
	empresa[1] = new Cliente("IBM", 9817231);

	persona.mostrar();

	empleado.calcular_salario_neto();
	empleado.mostrar();

	cliente.mostrar();

	directivo.mostrar();

	_getch();
}