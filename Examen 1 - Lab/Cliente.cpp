#include "Cliente.h"

Cliente::Cliente() {

}

Cliente::Cliente(string _empresa, int _telefono) {
	this->nombre_empresa = _empresa;
	this->telefono_de_contacto = _telefono;
}

void Cliente::mostrar() {
	cout << "empresa: " << nombre_empresa << ", telefono: " << telefono_de_contacto << endl;
}