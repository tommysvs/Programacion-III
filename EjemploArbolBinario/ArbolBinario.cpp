#include <iostream>
#include "ArbolBinario.h"

using namespace std;

ArbolBinario::ArbolBinario() : raiz(nullptr) { }

void ArbolBinario::agregarElemento(const char* _nombre) {
	raiz = agregarRec(raiz, _nombre);
}

NodoArbol* ArbolBinario::agregarRec(NodoArbol* _raiz, const char* _nombre) {
	if (_raiz == nullptr) {
		NodoArbol* nuevo = new NodoArbol(_nombre, nullptr, nullptr);
		_raiz = nuevo;
	}
	else if (strcmp(_nombre, _raiz->getNombre()) > 0) {
		_raiz->setHijoDerecho(agregarRec(_raiz->getHijoDerecho(), _nombre));
	}
}

void imprimir() {

}

void imprimirRec() {

}