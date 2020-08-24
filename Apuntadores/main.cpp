#include <iostream>
#include <conio.h>

using namespace std;

int cuboPorValor(int);
void cuboPorReferencia(int*);

int main() {
	/*int y = 5;
	int* yPtr = nullptr;

	yPtr = &y;

	cout << "Valor de y: " << y << endl;
	cout << "Direccion de memoria de y: " << &y << endl;
	cout << "Direccion de memoria de yPtr: " << yPtr << endl;

	cout << "El valor depositado en direccion de memoria yPtr: " << *yPtr << endl;

	y = 12;

	cout << "El valor depositado en direccion de memoria yPtr: " << *yPtr << endl;

	*yPtr = 8;

	cout << "Valor de y: " << y << endl;*/

	int numero = 5;
	cout << "El valor de numero es: " << numero << endl;
	cout << "Direccion de memoria de numero antes de llamada en funcion: " << &numero << endl;

	numero = cuboPorValor(numero);
	cout << "El valor de numero es: " << numero << endl;
	cout << "Direccion de memoria de numero despues de llamada en funcion: " << &numero << endl;

	cuboPorReferencia(&numero);
	cout << "El valor de numero es: " << numero << endl;

	_getch();
}

int cuboPorValor(int numero) {
	cout << "Direccion de memoria de numero en funcion: " << &numero << endl;

	return numero * numero * numero;
}

void cuboPorReferencia(int* numeroPtr) {
	*numeroPtr = *numeroPtr * *numeroPtr * *numeroPtr;
}