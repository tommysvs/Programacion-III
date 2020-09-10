#include <conio.h>
#include "EntidadBancaria.h"

int main() {
	EntidadBancaria::ingresarCliente();
	EntidadBancaria::consultarClientes();

	EntidadBancaria::ingresarCuenta();
	EntidadBancaria::ingresarCuenta();
	EntidadBancaria::ingresarCuenta();

	_getch();
}