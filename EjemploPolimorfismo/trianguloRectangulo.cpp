#include <cmath>
#include <iostream>
#include "trianguloRectangulo.h"

using namespace std;

trianguloRectangulo::trianguloRectangulo() : base(0), altura(0), hipotenusa(0) {}

trianguloRectangulo::trianguloRectangulo(int _base, int _altura)
{
	setBase(_base);
	setAltura(_altura);
}

void trianguloRectangulo::setBase(int _base)
{
	this->base = _base;
}

void trianguloRectangulo::setAltura(int _altura)
{
	this->altura = _altura;
}

int trianguloRectangulo::getBase()
{
	return this->base;
}

int trianguloRectangulo::getAltura()
{
	return this->altura;
}

float trianguloRectangulo::getHipotenusa()
{
	return sqrt(pow(base, 2) + pow(altura, 2));
}

float trianguloRectangulo::getArea()
{
	return (this->base * this->altura) / 2;
}

float trianguloRectangulo::getPerimetro()
{
	return getBase() + getAltura() + getHipotenusa();
}

void trianguloRectangulo::imprimirFigura()
{
	cout << "trianguloRectangulo { base: " << getBase() << ", altura: " << getAltura()
		<< ", hipotenusa: " << getHipotenusa() << ", area: " << getArea() << ", perimetro: "
		<< getPerimetro() << " }\n";
}

tipoFigura trianguloRectangulo::getTipo()
{
	return tipoFigura::tTrianguloRectangulo;
}