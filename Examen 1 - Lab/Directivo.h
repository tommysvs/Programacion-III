#pragma once

#ifndef DIRECTIVO_H
#define DIRECTIVO_H

#include <string>
#include "Empleado.h"

using namespace std;

class Directivo : public Empleado {
private:
	string categoria;
public:
	Directivo();
	Directivo(string);

	void mostrar();
};

#endif