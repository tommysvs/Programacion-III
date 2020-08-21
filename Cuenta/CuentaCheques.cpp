#include "CuentaCheques.h"

CuentaCheques::CuentaCheques() { }

CuentaCheques::CuentaCheques(double _saldoInicial, double _cuota) {
	saldo = _saldoInicial;
	cuotaTransaccion = _cuota;
}

void CuentaCheques::abonar(double _monto) {
	bool cargar = this->cargar(_monto);

	if (cargar) {
		saldo += _monto;
		saldo -= cuotaTransaccion;
	}
	else
		cout << "Error en la transaccion" << endl;
}

bool CuentaCheques::cargar(double _monto) {
	bool cargar;

	if (_monto > saldo)
		cargar = false;
	else
		cargar = true;

	return cargar;
}