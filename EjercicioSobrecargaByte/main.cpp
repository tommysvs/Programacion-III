#include <iostream>
#include <conio.h>
#include "Byte.h"

using namespace std;

int main() {
	Byte b1("00001010");
	Byte b2("00011011");

	cout << "Binario 1: " << b1;
	cout << "Binario 2: " << b2;

	_getch();
}