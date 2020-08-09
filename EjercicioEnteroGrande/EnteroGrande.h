#pragma once
#ifndef ENTERO_GRANDE_H
#define ENTERO_GRANDE_H

#include <iostream>

#define LIMITE 30

using namespace std;

class EnteroGrande {
	friend ostream& operator<<(ostream&, const EnteroGrande&);
	friend istream& operator>>(istream&, EnteroGrande&);
	friend EnteroGrande operator+(const EnteroGrande&, const EnteroGrande&);

private:
	int* iValor; //arreglo dinamico
	char* cValor;

public:
	EnteroGrande(void);
};

#endif