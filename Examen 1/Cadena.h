#pragma once

#ifndef CADENA_H
#define CADENA_H

#include <iostream>
#include <string>

using namespace std;

class Cadena {
	friend ostream& operator<<(ostream&, const Cadena&);
	friend Cadena operator+(const Cadena&, const Cadena&);
private:
	int strL[10];
public:
	Cadena();
	Cadena(const char*);
	int StrCmp(Cadena);
};

#endif