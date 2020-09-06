#include <iostream>
#include "EmpresaLista.h"

using namespace std;

EmpresaLista::EmpresaLista() : primero(nullptr), ultimo(nullptr) {}

bool EmpresaLista::estaVacia() {
	return primero == nullptr;
}

bool EmpresaLista::agregarEmpleado(int _codigo, const char* _nombre, float _salario) {
	EmpleadoNodo* nuevo = new EmpleadoNodo(_codigo, _nombre, _salario, nullptr, nullptr);

	if (estaVacia()) {
		primero = ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else {
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);

		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}

	cout << "Nodo agregado." << endl;

	return true;
}

bool EmpresaLista::insertarEmpleado(int _codigo, const char* _nombre, float _salario) {
	return true;
}

bool EmpresaLista::eliminarEmpleado(int _codigo) {
	return true;
}

void EmpresaLista::actualizarSalarios(float _salario) {

}

void EmpresaLista::imprimirEmpleados() {

	EmpleadoNodo* actual = primero;

	do {
		cout << "{ codigo: " << actual->getCodigo() << " nombre: " << actual->getNombre() << " salario: " << actual->getSalario() << " } " << endl;
		actual = actual->getSiguiente();
	} while (actual != primero);
}