#include "Cuenta.h"

Cuenta::Cuenta() { }

Cuenta::Cuenta(double _saldoInicial) {
	if (!(_saldoInicial >= 0.0)) {
		_saldoInicial = 0.0;
		cout << "El saldo inicial es invalido." << endl;
	}

	saldo = _saldoInicial;
}

double Cuenta::obtenerSaldo() {
	return saldo;
}

void Cuenta::abonar(double _monto) {
	saldo += _monto;
}

void Cuenta::cargar(double _monto) {

	if (_monto > saldo)
		cout << "" << endl;
	else
		saldo -= _monto;
}