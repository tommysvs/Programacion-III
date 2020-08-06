#include <iostream>
#include <conio.h>
#include "EnteroGrande.h"

using namespace std;

int main() {
	EnteroGrande a;
	EnteroGrande b;
	EnteroGrande c;

	cout << "Ingrese un numero entero maximo de " << LIMITE << " digitos: ";
	cin >> a;

	cout << "Ingrese un numero entero maximo de " << LIMITE << " digitos: ";
	cin >> b;

	c = a + b;
	cout << "Suma de los numeros ingresados: " << c;

	_getch();
}