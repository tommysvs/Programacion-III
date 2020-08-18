#include "Cadena.h"
#include<string>

Cadena::Cadena() {}

Cadena::Cadena(const char* _cad) {

}

int Cadena::StrCmp(Cadena _cad) {
	int ret = 1;

	int i;
	for (i = 0; this->strL[i] && _cad.strL[i]; i++) {
		if (this->strL[i] == _cad.strL[i] || (this->strL[i] ^ 32) == _cad.strL[i])
			continue;
		else
			break;
	}

	if (this->strL[i] == _cad.strL[i])
		ret = 0;

	if ((this->strL[i] | 32) < (_cad.strL[i] | 32))
		ret = -1;

	return ret;
}

ostream& operator<<(ostream& out, const Cadena& _cad) {
	for (int i = 0; i < 10; i++) {
		out << _cad.strL[i];
	}
	out << endl;

	return out;
}

Cadena operator+(const Cadena& _c1, const Cadena& _c2) {
	Cadena nuevo;

	return nuevo;
}