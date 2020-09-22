#include <iostream>
#include <fstream>
#include "ListaEnlazadaSimple.h"
#include "Utilerias.h"

using namespace std;

ListaEnlazadaSimple::ListaEnlazadaSimple() : primero(nullptr) { }

bool ListaEnlazadaSimple::estaVacia() {
	return primero == nullptr;
}

void ListaEnlazadaSimple::cargarDatos(int anio, int mesInicio, int mesFinal) {
	Nodo* nuevo = new Nodo(anio, mesInicio, mesFinal, nullptr);

	fstream registrosIn("datab.bin", ios::in | ios::binary);

	if (!registrosIn) {
		cout << "Error al intentar abrir el archivo datab.bin" << endl;
		return;
	}

	registrosIn.seekg(0, ios::beg);

	registro registroAct;

	if (estaVacia())
		primero = nuevo;
	else {
		Nodo* actual = primero;

		registrosIn.read(reinterpret_cast<char*>(&registroAct), sizeof(registro));

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setAnio(registroAct.year);
		actual->setMesInicio(registroAct.month);
		actual->setMesFinal(registroAct.month);
		actual->setSiguiente(nuevo);
	}

	registrosIn.close();
	cout << "Nodo agregado." << endl;
}

double ListaEnlazadaSimple::obtenerTotalxMes(int mes) {
	return 0;
}

void ListaEnlazadaSimple::eliminarDatosMes(int mes) {
	if (estaVacia())
		return;

	Nodo* actual = primero;
	Nodo* anterior = nullptr;

	while (actual != nullptr) {
		if (actual->getMesFinal() == mes) {
			if (actual == primero) {
				primero = primero->getSiguiente();
				delete actual;
			}
			else {
				anterior->setSiguiente(actual->getSiguiente());
				delete actual;
			}

			cout << "Nodo eliminado." << endl;
			return;
		}
		else {
			anterior = actual;
			actual = actual->getSiguiente();
		}
	}
}