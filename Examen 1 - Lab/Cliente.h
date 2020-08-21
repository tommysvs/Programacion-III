#pragma once

#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Persona.h";
#include "Empresa.h"

using namespace std;

class Cliente : public Persona, public Empresa {
private:
	string nombre_empresa;
	int telefono_de_contacto;
public:
	Cliente();
	Cliente(string, int);

	void mostrar();
};

#endif CLIENTE_H