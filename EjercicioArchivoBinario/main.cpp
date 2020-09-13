#include <conio.h>
#include <iostream>
#include "empleados.h"

using namespace std;

int main() {
	//registroEmpleados();

	consultaEmpleados();
	cout << "Cantidad de empleados: " << cantidadEmpleados() << "\n";

	desactivarEmpleado(3);
	desactivarEmpleado(1);

	consultaEmpleados();

	desactivarEmpleado(9);

	_getch();
}