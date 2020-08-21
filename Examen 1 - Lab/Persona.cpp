#include "Persona.h"

using namespace std;

Persona::Persona() {

}

Persona::Persona(string _nombre, int _edad) {
	this->nombre = _nombre;
	this->edad = _edad;
}

void Persona::mostrar() {
	cout << "nombre: " << nombre << ", edad: " << edad << endl;
}