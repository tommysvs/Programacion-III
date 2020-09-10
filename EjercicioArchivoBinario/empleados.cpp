#include <iostream>
#include <fstream>
#include "empleados.h"

using namespace std;

void registroEmpleados() {
	ofstream empleadosOut("empleados.bin", ios::app);

	if (!empleadosOut) {
		cout << "Error al intentar abrir el archivo empleados.bin\n\n";
		return;
	}

	cout << "*** R E G I S T R O  D E  E M P L E A D O S ***\n\n";

	int opcion = 0;
	empleados nuevo;

	do {
		cout << "Ingrese el codigo de empleado: ";
		cin >> nuevo.codigo;

		cout << "Ingrese el nombre de empleado: ";
		cin >> nuevo.nombre;

		cout << "Ingrese el puesto de empleado: ";
		cin >> nuevo.puesto;

		cout << "Ingrese el codigo de jefe (-1 si no tiene): ";
		cin >> nuevo.codigoJefe;

		nuevo.activo = true;

		empleadosOut.write(reinterpret_cast<const char*>(&nuevo), sizeof(empleados));

		cout << "\nEmpleado guardado!" << endl;

		cout << "Desea agregar un nuevo empleado? (-1 para finalizar): ";
		cin >> opcion;
	} while (opcion != -1);

	empleadosOut.close();
}

void consultaEmpleados() {
	ifstream empleadosIn("empleados.bin", ios::in | ios::binary);

	if (!empleadosIn) {
		cout << "Error al intentar leer el archivo empleados.bin\n\n";
		return;
	}

	cout << "*** C O N S U L T A  D E  E M P L E A D O S ***\n\n";

	empleadosIn.seekg(0, ios::beg);

	empleados actual;

	empleadosIn.read(reinterpret_cast<char*>(&actual), sizeof(empleados));

	while (!empleadosIn.eof()) {
		if (actual.activo)
			cout << "empleado { codigo: " << actual.codigo << ", nombre: " << actual.nombre << ", puesto: " << actual.puesto << ", codigo jefe: " << actual.codigoJefe << " }" << endl;

		empleadosIn.read(reinterpret_cast<char*>(&actual), sizeof(empleados));
	}

	empleadosIn.close();
}

void desactivarEmpleado(int _posEmpleado) {
	if (_posEmpleado > cantidadEmpleados()) {
		cout << "Posicion de empleados incorrecta!" << endl;
		return;
	}

	fstream empleadosInOut("empleados.bin", ios::in | ios::out | ios::binary);

	if (!empleadosInOut) {
		cout << "Error al intentar abrir el archivo empleados.bin\n\n";
		return;
	}

	int posArchivo = (_posEmpleado - 1) * sizeof(empleados);
	empleadosInOut.seekg(posArchivo, ios::beg);

	empleados aModificar;

	empleadosInOut.read(reinterpret_cast<char*>(&aModificar), sizeof(empleados));

	aModificar.activo = false;

	empleadosInOut.seekp(posArchivo, ios::beg);

	empleadosInOut.write(reinterpret_cast<char*>(&aModificar), sizeof(empleados));

	cout << "Empleado desactivado!" << endl;

	empleadosInOut.close();
}

int cantidadEmpleados() {
	fstream empleadosIn("empleados.bin", ios::in | ios::binary);

	if (!empleadosIn) {
		cout << "Error al intentar abrir el archivo empleados.bin\n\n";
		return -1;
	}

	empleadosIn.seekg(0, ios::end);

	int pos = empleadosIn.tellg();

	return pos / sizeof(empleados);
}