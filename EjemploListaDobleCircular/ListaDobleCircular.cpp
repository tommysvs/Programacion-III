#include <iostream>
#include "ListaDobleCircular.h"

using namespace std;

ListaDobleCircular::ListaDobleCircular() : primero(nullptr), ultimo(nullptr) {}

bool ListaDobleCircular::estaVacia() {
	return primero == nullptr;
}

void ListaDobleCircular::agregarElemento(int _valor) {
	Nodo* nuevo = new Nodo(_valor, nullptr, nullptr);

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
}

void ListaDobleCircular::imprimir() {
	Nodo* actual = primero;

	do {
		cout << "[" << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	} while (actual != primero);

	cout << "\n";
}

void ListaDobleCircular::imprimirReversa() {
	if (estaVacia())
		return;

	Nodo* actual = ultimo;

	do {
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getAnterior();
	} while (actual != ultimo);

	cout << "\n";
}

void ListaDobleCircular::eliminarElemento(int _valor) {
	if (estaVacia())
		return;

	Nodo* actual = primero;

	do {
		if (actual->getValor() == _valor) {
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
			return;
		}
		else
			actual = actual->getSiguiente();
	} while (actual != primero);
}

void ListaDobleCircular::insertarElemento(int _pos, int _valor) {
	Nodo* nuevo = new Nodo(_valor, nullptr, nullptr);

	Nodo* actual = primero;
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
			return;
		}
		else {
			actual = actual->getSiguiente();
			posActual++;
		}
	} while (actual != primero);
}