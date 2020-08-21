#pragma once

#ifndef CUENTA_CHEQUES_H
#define CUENTA_CHEQUES_H

#include "Cuenta.h"

class CuentaCheques : public Cuenta {
	double cuotaTransaccion;
public:
	CuentaCheques();
	CuentaCheques(double, double);

	void abonar(double);
	bool cargar(double);
};

#endif