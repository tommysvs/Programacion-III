#include<string>
#include "Cadena.h"

Cadena::Cadena() {
	len = 0;
	strL = new char[len + 1];
	strL[0] = '\0';
}

Cadena::Cadena(const char* _cad) {
	len = strlen(_cad);
	strL = new char[len];
	strcpy_s(strL, len + 1, _cad);
}

int Cadena::StrCmp(Cadena _cad) {
	int ret = 1;
	int len = this->len;
	int len2 = _cad.len;

	if (len == len2)
		ret = 0;
	else if (len < len2)
		ret = -1;
	else
		ret = 1;

	return ret;
}

ostream& operator<<(ostream& out, const Cadena& _cad) {
	out << _cad.strL;

	return out;
}

Cadena operator+(Cadena& _c1, Cadena& _c2) {
	Cadena nuevo;

	string s1 = _c1.subStr(0, _c1.len);
	string s2 = _c2.subStr(0, _c2.len);
	const char* c1 = s1.c_str();
	const char* c2 = s2.c_str();

	char* cNuevo = new char[strlen(c1) + strlen(c2) + 1];

	int resultado = strcpy_s(cNuevo, strlen(c1) + 1, c1);
	strcat_s(cNuevo, strlen(cNuevo) + strlen(c2) + 1, c2);

	nuevo = cNuevo;
	return nuevo;
}

string Cadena::subStr(int pos, int len) {
	static char c[20];
	int i = 0;

	while (pos <= len) {
		c[i] = this->strL[pos];
		i++;
		pos++;
	}

	return c;
}