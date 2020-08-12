#pragma once

#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "figura2d.h"

class rectangulo : public figura2d {
private:
	int base, altura;
public:
	rectangulo(void);
	rectangulo(int, int);

	void setBase(int);
	void setAltura(int);

	int getBase();
	int getAltura();

	float getArea();
	float getPerimetro();
	void imprimirFigura();
	tipoFigura getTipo();
};

#endif // !RECTANGULO_H