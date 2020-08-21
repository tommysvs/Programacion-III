#include <conio.h>
#include "Cuenta.h"
#include "CuentaAhorros.h"
#include "CuentaCheques.h"

int main() {
	Cuenta cuenta(100);
	CuentaAhorros ahorros(100, 0.4);
	CuentaCheques cheques(100, 2);

	cuenta.abonar(20);
	ahorros.abonar(50);
	cheques.abonar(30);
	
	cout << "Saldo inicial: " << cuenta.obtenerSaldo() << endl;
	cout << "Intereses - cuenta ahorros: " << ahorros.calcularInteres() << endl;
	cout << "Saldo - cuenta cheques: " << cheques.obtenerSaldo() << endl;

	_getch();
}