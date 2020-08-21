#include "Directivo.h"

Directivo::Directivo() {

}

Directivo::Directivo(string _categoria) {
	this->categoria = _categoria;
}

void Directivo::mostrar() {
	cout << "categoria: " << categoria << endl;
}