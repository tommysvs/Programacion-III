#pragma once

#ifndef ROMBO_H	
#define ROMBO_H

#include "figura2d.h"

class Rombo : public figura2d {
private:
	int D;
	int d;
public:
	Rombo(void);
	Rombo(int, int);

	void setDiagonales(int, int);

	int getD1();
	int getD2();
	float getArea();
	float getPerimetro();

	void imprimirFigura();
	tipoFigura getTipo();
};

#endif // !ROMBO_H