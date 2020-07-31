#include <iostream>
#include "racional.h"

using namespace std;

// :: operador de resolucion de ambitos
Racional::Racional(void) : numerador(-1), denominador(-1) {

}

Racional::Racional(int _numerador, int _denominador) {
    setNumerador(_numerador);
    setDenominador(_denominador);

    simplificar();
}

void Racional::setNumerador(int _numerador) {
    this->numerador = _numerador;
}

void Racional::setDenominador(int _denominador) {
    if (_denominador == 0) {
        cout << "Imposible asignar valor a variable Denominador" << endl;
        this->denominador = 1;
        return;
    }

    this->denominador = _denominador;
}

void Racional::imprimirDecimal(void) {
    if (this->numerador == 0 && this->denominador == 0) {
        cout << "Resultado no definido" << endl;
        return;
    }
    else if (this->denominador == 0) {
        cout << "No se puede dividir por cero" << endl;
        return;
    }

    cout << "Formal decimal {" << float(this->numerador) / float(this->denominador) << "}" << endl;
}

void Racional::imprimirRacional(void) {
    if (this->numerador == 0 && this->denominador == 0) {
        cout << "Resultado no definido" << endl;
        return;
    }
    else if (this->denominador == 0) {
        cout << "No se puede dividir por cero" << endl;
        return;
    }

    cout << "Formal racional {" << this->numerador << "/" << this->denominador << "}" << endl;
}

void Racional::simplificar(void) {
    int mayor = obtenerMayor();

    for (int i = 2; i <= mayor; i++) {
        if (numerador % i == 0 && denominador % i == 0) {
            numerador /= i;
            denominador /= i;

            i = 1;
        }
    }
}

int Racional::obtenerMayor(void) {
    return numerador > denominador ? numerador : denominador;
}

int Racional::getNumerador(void) {
    return this->numerador;
}


int Racional::getDenominador(void) {
    return this->denominador;
}

Racional Racional::suma(Racional r2) {
    Racional resultado;

    if (this->denominador == r2.getDenominador()) {
        return Racional(this->numerador + r2.getNumerador(), this->denominador);
    }

    int num; //nuevo numerador
    int den; //nuevo denominador

    num = (this->denominador * r2.getNumerador()) + (r2.getDenominador() * this->numerador);
    den = this->denominador * r2.getDenominador();

    return Racional(num, den);
}