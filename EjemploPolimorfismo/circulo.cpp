#include <cmath>
#include <iostream>
#include "circulo.h"

using namespace std;

Circulo::Circulo() {

}

Circulo::Circulo(int _radio) {
	setRadio(_radio);
}

void Circulo::setRadio(int _radio) {
	this->radio = _radio;
}

float Circulo::getRadio() {
	return this->radio;
}

float Circulo::getArea() {
	return 3.1416 * pow(radio, 2);
}

float Circulo::getPerimetro() {
	return 2 * 3.1416 * radio;
}

void Circulo::imprimirFigura() {
	cout << "radio: " << getRadio() << ", area: " << getArea() << ", perimetro: " << getPerimetro() << endl;
}

tipoFigura Circulo::getTipo() {
	return tipoFigura::tCirculo;
}