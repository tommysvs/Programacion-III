#include <iostream>
#include "rectangulo.h"

using namespace std;

rectangulo::rectangulo() : base(0), altura(0) {}

rectangulo::rectangulo(int _base, int _altura) : base(_base), altura(_altura) {

}

void rectangulo::setBase(int _base) {
	this->base = _base;
}

void rectangulo::setAltura(int _altura) {
	this->altura = _altura;
}

int rectangulo::getBase() {
	return this->base;
}

int rectangulo::getAltura() {
	return this->altura;
}

float rectangulo::getArea() {
	return this->base * this->altura;
}

float rectangulo::getPerimetro() {
	return 2 * (this->base + this->altura);
}

void rectangulo::imprimirFigura() {
	cout << "Rectangulo: { base: " << getBase() << ", altura: " << getAltura() << ", area: " << getArea() << ", perimetro: " << getPerimetro() << " }" << endl;
}

tipoFigura rectangulo::getTipo() {
	return tipoFigura::tRectangulo;
}