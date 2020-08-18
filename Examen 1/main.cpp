#include <conio.h>
#include "Cadena.h"

int main() {
	Cadena c0("Hola");
	Cadena c1;
	Cadena c2 = c0;
	Cadena c3("Mundo");

	cout << "c0: " << c0 << "\nc1:" << c1 << "\nc2" << c2 << "\nc3" << endl;

	if (c2.StrCmp(c3) == 0)
		cout << "c2 y c3 son iguales\n";
	else if (c2.StrCmp(c3) < 0)
		cout << "c2 es menor que c3\n";
	else
		cout << "c2 es mayor que c3\n";

	Cadena c4;
	c4 = c0 + c3;
	cout << "c4: " << c4;

	_getch();
}