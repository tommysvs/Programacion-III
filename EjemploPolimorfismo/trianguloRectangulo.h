#pragma once

#ifndef TRIANGULO_RECTANGULO_H
#define TRIANGULO_RECTANGULO_H

#include "figura2d.h"

class trianguloRectangulo : public figura2d {
private:
	int base, altura;
	float hipotenusa;

public:
	trianguloRectangulo();
	trianguloRectangulo(int, int);

	void setBase(int);
	void setAltura(int);

	int getBase();
	int getAltura();
	float getHipotenusa();

	float getArea();
	float getPerimetro();
	void imprimirFigura();
	tipoFigura getTipo();
};

#endif // !TRIANGULO_RECTANGULO_H
