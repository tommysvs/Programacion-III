#include "Byte.h"

Byte::Byte(void) {
	//iniciarlizar el byyte en 0
	for (int i = 0; i < 8; i++) {
		bits[i] = 0;
	}
}

Byte::Byte(const char* _byte) {
	for (int i = 0; i < 8; i++) {
		bits[i] = _byte[i] - 48;
	}
}

//destructor
Byte::~Byte() {}

ostream& operator<<(ostream& out, const Byte& _byte) {
	out << "{ ";
	for (int i = 0; i < 8; i++) {
		out << _byte.bits[i];
	}
	out << " }";
	out << endl;

	return out;
}