#include "Cadena.h"

Cadena::Cadena() {}

Cadena::Cadena(const char* _cad) {

}

int StrCmp(Cadena _cad) {
	int nuevo = 0;

	return nuevo;
}

ostream& operator<<(ostream& out, const Cadena& _cad) {
	for (int i = 0; i < 8; i++) {
		out << _cad.strL[i];
	}
	out << endl;

	return out;
}

Cadena operator+(const Cadena& _c1, const Cadena& _c2) {
	Cadena nuevo;

	return nuevo;
}