#include <iostream>
#include <conio.h>
#include "Byte.h"

using namespace std;

int main() {
	Byte b1("00001010");
	Byte b2("00011011");

	cout << "Binario 1: " << b1;
	cout << "Binario 2: " << b2 << endl;

	Byte b3 = b1 + b2;
	cout << "Suma (b1 + b2): " << b3;
	cout << "Decimal (b3): " << b3.obtenerDecimal() << endl;
	cout << "Octal (b3): " << b3.obtenerOctal() << endl;
	cout << "Hexadecimal (b3): " << b3.obtenerHexa() << "\n\n";

	Byte b4 = b1 - b2;
	cout << "Resta (b1 + b2): " << b4;
	cout << "Decimal (b4): " << b4.obtenerDecimal() << endl;
	cout << "Octal (b4): " << b4.obtenerOctal() << endl;
	cout << "Hexadecimal (b4): " << b4.obtenerHexa() << "\n\n";


	Byte b5 = b1 * b2;
	cout << "Multiplicacion (b1 * b2): " << b5;
	cout << "Decimal (b5): " << b5.obtenerDecimal() << endl;
	cout << "Octal (b5): " << b5.obtenerOctal() << endl;
	cout << "Hexadecimal (b5): " << b5.obtenerHexa() << "\n\n";

	Byte b6 = b1 & b2;
	cout << "AND (b1 & b2): " << b6;

	Byte b7 = b1 | b2;
	cout << "OR (b1 | b2): " << b7;

	Byte b8 = b1 ^ b2;
	cout << "XOR (b1 ^ b2): " << b8;

	Byte b9 = ~b1;
	cout << "NOT (~b1): " << b9;

	_getch();
}