#include <iostream>
#include <conio.h>
#include "racional.h"

using namespace std;

int main() {
    int r1, r2, r3, r4;
    char resp;
    
    do {
        system("cls");

        cout << "Racional 1" << endl;
        cout << "Ingrese el numerador: ";
        cin >> r1;

        cout << "Ingrese el denominador: ";
        cin >> r2;

        cout << "\nRacional 2" << endl;
        cout << "Ingrese el numerador: ";
        cin >> r3;

        cout << "Ingrese el denominador: ";
        cin >> r4;

        Racional raUno(r1, r2);
        Racional raDos(r3, r4);
        system("cls");

        cout << "RACIONAL 1: " << endl;;
        raUno.imprimirDecimal();
        raUno.imprimirRacional();

        cout << "\nRACIONAL 2: " << endl;;
        raDos.imprimirDecimal();
        raDos.imprimirRacional();

        cout << "\n-----------------------------------------" << endl;

        bool sonIguales = raUno.esIgual(raDos);
        if (sonIguales)
            cout << "\nLos racionales dados son iguales.";
        else
            cout << "\nLos racionales dados son diferentes.";

        bool esMayor = raUno.esMayor(raDos);
        if (esMayor)
            cout << "\nEl primer racional dado es mayor que el segundo.";
        else
            cout << "\nEl primer racional dado no es mayor que el segundo.";

        cout << "\n\nSUMA" << endl;
        Racional suma = raUno.suma(raDos);
        suma.imprimirDecimal();
        suma.imprimirRacional();

        cout << "\n\nRESTA" << endl;
        Racional resta = raUno.resta(raDos);
        resta.imprimirDecimal();
        resta.imprimirRacional();

        cout << "\n\nMULTIPLICACION" << endl;
        Racional mult = raUno.multiplicacion(raDos);
        mult.imprimirDecimal();
        mult.imprimirRacional();

        cout << "\n\nDIVISION" << endl;
        Racional div = raUno.division(raDos);
        div.imprimirDecimal();
        div.imprimirRacional();

        cout << "\n\nDesea usar otros racionales? (S/n): ";
        cin >> resp;
    } while (resp != 'N' && resp != 'n');
}