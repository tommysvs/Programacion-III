#include <iostream>
#include "Empleado.h"

using namespace std;

Empleado::Empleado() : codigo(-1), salario(0), departamento("ND"), estado(false), Persona() {
	cout << "... Se construyo Empleado ..." << endl;
}

Empleado::Empleado(string _nombre, int _edad, char _genero, string _estadoCivil, int _codigo,
	float _salario, string _Departamento) : codigo(_codigo), salario(_salario),
	departamento(_Departamento), estado(true), Persona(_nombre, _edad, _genero, _estadoCivil)
{
	cout << "... Se construyo Empleado ..." << endl;
}