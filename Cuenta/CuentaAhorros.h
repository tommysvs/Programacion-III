#pragma once

#ifndef CUENTA_AHORROS_H
#define CUENTA_AHORROS_H

#include <iostream>
#include "Cuenta.h"

using namespace std;

class CuentaAhorros : public Cuenta {
	double tasa;
public:
	CuentaAhorros();
	CuentaAhorros(double, double);

	double calcularInteres();
};

#endif
