#pragma once

#ifndef FIGURA2D_H
#define FIGURA2D_H

enum tipoFigura {
	tRectangulo, //0
	tTrianguloRectangulo, //1
	tCirculo, //2
	tRombo //3
};

class figura2d {
public:
	virtual float getArea() = 0;
	virtual float getPerimetro() = 0;
	virtual void imprimirFigura() = 0;
	virtual tipoFigura getTipo() = 0;
};

#endif // !FIGURA2D_H