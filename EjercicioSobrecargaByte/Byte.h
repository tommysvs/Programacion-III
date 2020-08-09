#pragma once

#ifndef BYTE_H
#define BYTE_H

#include <iostream>
using namespace std;

class Byte {
	//definiciones de funciones no miembro de la clase
	friend ostream& operator<<(ostream&, const Byte&);
	friend Byte operator+(const Byte&, const Byte&);
	friend Byte operator-(const Byte&, const Byte&);
	friend Byte operator*(const Byte&, const Byte&);
	friend Byte operator&(const Byte&, const Byte&);
	friend Byte operator|(const Byte&, const Byte&);
	friend Byte operator^(const Byte&, const Byte&);

private:
	int bits[8];

public:
	Byte(void);
	Byte(const char*);

	//destructor de clase
	~Byte();

	int obtenerDecimal();
	int obtenerOctal();
	string obtenerHexa();
	Byte operator~();
};

#endif