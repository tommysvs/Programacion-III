#include <iostream>
#include <conio.h>
#include "Byte.h"

using namespace std;

int main() {
	Byte b1("00001010");
	Byte b2("00011011");

	cout << "Binario 1: " << b1;
	cout << "Binario 2: " << b2;

	Byte b3 = b1 + b2;
	cout << "b1 + b2: " << b3 << endl;
	cout << "Forma decimal b3: " << b3.obtenerDecimal() << endl;

	_getch();
}