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

int Byte::obtenerDecimal() {
	int nuevo = 0;
	int exp = 0;

	for (int i = 8 - 1; i >= 0; i--, exp++) {
		if (this->bits[i] == 1)
			nuevo += pow(2, exp);
	}

	return nuevo;
}

int Byte::obtenerOctal() {
	int nuevo = 0;

	return nuevo;
}

string Byte::obtenerHexa() {
	string nuevo;

	return nuevo;
}

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

Byte operator-(const Byte& _b1, const Byte& _b2) {
	Byte nuevo;

	return nuevo;
}

Byte operator*(const Byte& _b1, const Byte& _b2) {
	Byte nuevo;

	return nuevo;
}

Byte operator&(const Byte& _b1, const Byte& _b2) {
	Byte nuevo;

	for (int i = 0; i < 8; i++)
		nuevo.bits[i] = _b1.bits[i] && _b2.bits[i] == 1 ? 1 : 0;

	return nuevo;
}

Byte operator|(const Byte& _b1, const Byte& _b2) {
	Byte nuevo;

	for (int i = 0; i < 8; i++)
		nuevo.bits[i] = _b1.bits[i] || _b2.bits[i] == 1 ? 1 : 0;

	return nuevo;
}

Byte operator^(const Byte& _b1, const Byte& _b2) {
	Byte nuevo;

	for (int i = 0; i < 8; i++)
		nuevo.bits[i] = _b1.bits[i] == _b2.bits[i] ? 0 : 1;

	return nuevo;
}

Byte Byte::operator~() {
	Byte nuevo;

	for (int i = 8 - 1; i >= 0; i--)
		nuevo.bits[i] = this->bits[i] == 1 ? 0 : 1;

	return nuevo;
}