#include "Empleado.h"

Empleado::Empleado() {

}

Empleado::Empleado(int _sueldo) {
	this->sueldo_bruto = _sueldo;
}

void Empleado::calcular_salario_neto() {
	salario_neto = sueldo_bruto * 8; // 8 horas totales trabajas
}

void Empleado::mostrar() {
	cout << "salario neto: " << salario_neto << endl;
}