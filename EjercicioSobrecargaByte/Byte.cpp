#include "Byte.h"
#include <cmath>

Byte::Byte(void) {
	//iniciarlizar el byyte en 0
	for (int i = 0; i < 8; i++) {
		bits[i] = 0;
	}
}

Byte::Byte(const char* _byte) {
	for (int i = 0; i < 8; i++) {
		bits[i] = _byte[i] - 48;
	}
}

//destructor
Byte::~Byte() {}

ostream& operator<<(ostream& out, const Byte& _byte) {
	out << "{ ";
	for (int i = 0; i < 8; i++) {
		out << _byte.bits[i];
	}
	out << " }";
	out << endl;

	return out;
}

Byte operator+(const Byte& _b1, const Byte& _b2) {
	Byte nuevo;
	int acarreo = 0;

	for (int i = 8 - 1; i >= 0; i--) {
		int resultado = 0;

		if (acarreo == 0) {
			if (_b1.bits[i] == 0 && _b2.bits[i] == 0) {
				resultado = 0;
				acarreo = 0;
			}
			else if ((_b1.bits[i] == 1 && _b2.bits[i] == 0) || (_b1.bits[i] == 0 && _b2.bits[i] == 1)) {
				resultado = 1;
				acarreo = 0;
			}
			else if (_b1.bits[i] == 1 && _b2.bits[i] == 1) {
				resultado = 0;
				acarreo = 1;
			}
		}
		else {
			if (_b1.bits[i] == 0) {
				resultado = 1;
				acarreo = 0;
			}
			else {
				resultado = 0;
				acarreo = 1;
			}

			if (resultado == 0 && _b2.bits[i] == 0) {
				resultado = 0;
			}
			else if (resultado == 0 && _b2.bits[i] == 1) {
				resultado = 1;
			}
			else if (resultado == 1 && _b2.bits[i] == 0) {
				resultado = 1;
				acarreo = 0;
			}
			else if (resultado == 1 && _b2.bits[i] == 1) {
				resultado = 0;
				acarreo = 1;
			}
		}

		nuevo.bits[i] = resultado;
	}

	return nuevo;
}

int Byte::obtenerDecimal() {
	int resultado = 0;
	int exp = 0;

	for (int i = 8 - 1; i >= 0; i--, exp++) {
		if (this->bits[i] == 1)
			resultado += pow(2, exp);
	}

	return resultado;
}