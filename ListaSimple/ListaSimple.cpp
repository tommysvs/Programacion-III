#include "ListaSimple.h"

using namespace std;

ListaSimple::ListaSimple() : primero(nullptr) { }

bool ListaSimple::estaVacia() {
	return primero == nullptr;
}

void ListaSimple::agregarElemento(int _valor) {
	Nodo* nuevo = new Nodo(_valor, nullptr);

	if (estaVacia()) 
		primero = nuevo;
	else {
		Nodo* actual = primero;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
	}

	cout << "Nodo agrgado." << endl;
}

void ListaSimple::imprimir() {
	if (estaVacia()) {
		cout << "Lista vacia. Imposible imprimir elementos.";
		return;
	}
}

void ListaSimple::eliminar(int _valor) {
	if (estaVacia())
		return;

	Nodo* actual = primero;
	Nodo* anterior = nullptr;

	while (actual != nullptr) {
		if (actual->getValor() == _valor) {
			if (actual == primero) {
				primero = primero->getSiguiente();
				delete actual;
			} else{
				anterior->setSiguiente(actual->getSiguiente());
				delete actual;
			}

			cout << "Nodo eliminado." << endl;
			return;
		} else {
			anterior = actual;
			actual = actual->getSiguiente();
		}
	}

	cout << "Nodo no existe. Imposible eliminar." << endl;
}