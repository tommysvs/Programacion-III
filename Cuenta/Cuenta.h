#pragma once

#ifndef CUENTA_H
#define CUENTA_H

#include <iostream>

using namespace std;

class Cuenta {
public:
	Cuenta();
	Cuenta(double);

	double obtenerSaldo();

	void abonar(double);
	void cargar(double);

	double saldo;
};

#endif