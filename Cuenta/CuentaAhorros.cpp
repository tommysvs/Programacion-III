#include "CuentaAhorros.h"

CuentaAhorros::CuentaAhorros() { }

CuentaAhorros::CuentaAhorros(double _saldoInicial, double _tasaInicial) {
	saldo = _saldoInicial;
	tasa = _tasaInicial;
}

double CuentaAhorros::calcularInteres() {
	double interes = 0.4;
	double montoFinal = 0;

	montoFinal = saldo * interes;

	return montoFinal;
}