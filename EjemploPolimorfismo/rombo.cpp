#include <cmath>
#include <iostream>
#include "rombo.h"

using namespace std;

Rombo::Rombo() {

}

Rombo::Rombo(int _D, int _d) {
	setDiagonales(_D, _d);
}

void Rombo::setDiagonales(int _D, int _d) {
	this->D = _D;
	this->d = _d;
}

int Rombo::getD1() {
	return this->D;
}

int Rombo::getD2() {
	return this->d;
}

float Rombo::getArea() {
	return (this->D * this->d) / 2;
}

float Rombo::getPerimetro() {
	return 2 * sqrt(pow(this->D, 2) + pow(this->d, 2));
}

void Rombo::imprimirFigura() {
	cout << "D: " << getD1() << ", d: " << getD2() << ", area: " << getArea() << ", perimetro: " << getPerimetro() << endl;
}

tipoFigura Rombo::getTipo() {
	return tipoFigura::tRombo;
}