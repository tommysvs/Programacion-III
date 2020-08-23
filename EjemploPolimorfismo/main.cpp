#include <conio.h>
#include "Rectangulo.h"
#include "TrianguloRectangulo.h"
#include "circulo.h"
#include "rombo.h"

int main() {
	rectangulo r1(6, 2);
	trianguloRectangulo tr1(6, 4);
	Circulo c1(7);
	Rombo ro1(8, 6);

	r1.imprimirFigura();
	tr1.imprimirFigura();
	c1.imprimirFigura();
	ro1.imprimirFigura();

	_getch();
}