#include <conio.h>
#include "EmpresaLista.h"

int main() {
	EmpresaLista empleado;

	empleado.agregarEmpleado(1001, "John", 1200);
	empleado.agregarEmpleado(1002, "Daniel", 800);
	empleado.agregarEmpleado(1003, "Karen", 1700);
	empleado.agregarEmpleado(1004, "Emilio", 1100);

	empleado.insertarEmpleado(2, 1000, "Tommy", 1300);

	empleado.eliminarEmpleado(1002);

	empleado.imprimirEmpleados();

	_getch();
}