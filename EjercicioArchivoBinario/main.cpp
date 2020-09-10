#include <conio.h>
#include <iostream>
#include "empleados.h"

using namespace std;

int main() {
	//registroEmpleados();
	consultaEmpleados();
	cout << "Cantidad de empleados: " << cantidadEmpleados() << endl;

	desactivarEmpleado(3);
	desactivarEmpleado(1);

	consultaEmpleados();

	_getch();
}