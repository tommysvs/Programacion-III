#include "EntidadBancaria.h"
#include <fstream>
#include <iostream>

using namespace std;

void EntidadBancaria::ingresarCliente() {
	ofstream clientesOut("clientes.dat", ios::app);

	int codigoCliente;
	char nombreCliente[30];
	char genero;
	char estado; //A: activo | I: inactivo
	int cantidad;

	if (!clientesOut)
		cout << "Error al intentar abrir el archivo de clientes.dat." << endl;

	cout << "\n*** I N G R E S O  D E  C L I E N T E S ***\n\n";
	cout << "Defina la cantidad de clientes a ingresar: ";
	cin >> cantidad;

	for (int i = 0; i < cantidad; i++) {
		cout << "Ingrese codigo de cliente: ";
		cin >> codigoCliente;

		cout << "Ingrese un nombre: ";
		cin >> nombreCliente;

		cout << "Ingrese el genero (F: Femenino, M: Masculino): ";
		cin >> genero;

		estado = 'A';

		clientesOut << codigoCliente << ' ' << nombreCliente << ' ' << genero << estado << "\n";
	}

	clientesOut.close();
}

void EntidadBancaria::consultarClientes() {
	ifstream clientesIn("clientes.dat", ios::in);

	if (!clientesIn) {
		cout << "Error al intentar abrir el archivo de clientes.dat." << endl;
		return;
	}

	int numeroCliente;
	char nombreCliente[30];
	char generoCliente;
	char estadoCliente;

	cout << "\n\n*** I N G R E S O  D E  C L I E N T E S ***\n\n";

	while (clientesIn >> numeroCliente >> nombreCliente >> generoCliente >> estadoCliente) {
		if (estadoCliente == 'A') {
			cout << numeroCliente << "\t" << nombreCliente << "\t" << generoCliente << "\n";
		}
	}

	clientesIn.close();
}