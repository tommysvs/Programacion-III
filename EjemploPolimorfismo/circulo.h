#pragma once

#ifndef CIRCULO_H
#define CIRCULO_H

#include "figura2d.h"

class Circulo : public figura2d {
private:
	int radio;
public:
	Circulo(void);
	Circulo(int);

	void setRadio(int);

	float getRadio();
	float getArea();
	float getPerimetro();

	void imprimirFigura();
	tipoFigura getTipo();
};

#endif // !CIRCULO_H