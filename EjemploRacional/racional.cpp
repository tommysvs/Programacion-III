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

Racional Racional::suma(Racional r) {
    if (this->denominador == r.getDenominador()) {
        return Racional(this->numerador + r.getNumerador(), this->denominador);
    }

    int num, den;
    num = (this->denominador * r.getNumerador()) + (r.getDenominador() * this->numerador);
    den = this->denominador * r.getDenominador();

    return Racional(num, den);
}

Racional Racional::resta(Racional r) {
    if (this->denominador == r.getDenominador()) {
        return Racional(this->numerador - r.getNumerador(), this->denominador);
    }

    int num, den;
    num = (this->denominador * r.getNumerador()) - (r.getDenominador() * this->numerador);
    den = this->denominador * r.getDenominador();

    return Racional(num, den);
}

Racional Racional::multiplicacion(Racional r) {
    int num, den;
    num = this->numerador * r.getNumerador();
    den = this->denominador * r.getDenominador();

    return Racional(num, den);
}

Racional Racional::division(Racional r) {
    int num, den;
    num = this->numerador * r.getDenominador();
    den = this->denominador * r.getNumerador();

    return Racional(num, den);
}

bool Racional::esIgual(Racional r) {
    int num1 = this->numerador;
    int num2 = r.getNumerador();
    int den1 = this->denominador;
    int den2 = r.getDenominador();

    if ((num1 == num2) && (den1 == den2))
        return true;
    else
        return false;
}

bool Racional::esMayor(Racional r) {
    int num1 = this->numerador;
    int num2 = r.getNumerador();
    int den1 = this->denominador;
    int den2 = r.getDenominador();

    if ((num1 > num2) && (den1 > den2))
        return true;
    else
        return false;
}