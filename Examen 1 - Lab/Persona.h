#pragma once

#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
	string nombre;
	int edad;
public:
	Persona();
	Persona(string, int);

	void mostrar();
};

#endif