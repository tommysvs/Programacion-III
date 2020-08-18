#pragma once

#ifndef CADENA_H
#define CADENA_H

#include <iostream>
#include <string>

using namespace std;

class Cadena {
	friend ostream& operator<<(ostream&, const Cadena&);
	friend Cadena operator+(Cadena&, Cadena&);
private:
	char* strL;
	int len;
public:
	Cadena();
	Cadena(const char*);

	int StrCmp(Cadena);
	string subStr(int, int);
};

#endif