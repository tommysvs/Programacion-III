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

bool EmpresaLista::insertarEmpleado(int _pos, int _codigo, const char* _nombre, float _salario) {
	EmpleadoNodo* nuevo = new EmpleadoNodo(_codigo, _nombre, _salario, nullptr, nullptr);

	EmpleadoNodo* actual = primero;
	int posActual = 0;

	do {
		if (posActual == _pos) {
			if (actual == primero) {
				nuevo->setSiguiente(primero);
				primero->setAnterior(nuevo);
				primero = nuevo;
				ultimo->setSiguiente(primero);
				primero->setAnterior(ultimo);
			}
			else {
				actual->getAnterior()->setSiguiente(nuevo);
				nuevo->setAnterior(actual->getAnterior());
				nuevo->setSiguiente(actual);
				actual->setAnterior(nuevo);
			}

			cout << "Nodo insertado." << endl;
			return true;
		}
		else {
			actual = actual->getSiguiente();
			posActual++;
		}
	} while (actual != primero);
}

bool EmpresaLista::eliminarEmpleado(int _codigo) {
	if (estaVacia())
		return true;

	EmpleadoNodo* actual = primero;

	do {
		if (actual->getCodigo() == _codigo) {
			if (actual == primero) {
				primero = primero->getSiguiente();
				primero->setAnterior(ultimo);
				ultimo->setSiguiente(primero);

				delete actual;
			}
			else if (actual == ultimo) {
				ultimo = ultimo->getAnterior();
				ultimo->setSiguiente(primero);
				primero->setAnterior(ultimo);

				delete actual;
			}
			else { //eliminacion enmedio de la lista
				actual->getAnterior()->setSiguiente(actual->getSiguiente());
				actual->getSiguiente()->setAnterior(actual->getAnterior());
			}

			delete actual;
			cout << "Nodo eliminado." << endl;
			return true;
		}
		else
			actual = actual->getSiguiente();
	} while (actual != primero);
}

void EmpresaLista::actualizarSalarios(float _salario) {
	
}

void EmpresaLista::imprimirEmpleados() {
	EmpleadoNodo* actual = primero;

	do {
		cout << "{ codigo: " << actual->getCodigo() << ", nombre: " << actual->getNombre() << ", salario: " << actual->getSalario() << " } " << endl;
		actual = actual->getSiguiente();
	} while (actual != primero);
}