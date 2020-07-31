#include <iostream>
#include <conio.h>
#include "racional.h"

using namespace std;

int main() {

    Racional r1;
    Racional r2(1, 2);
    Racional r3(1, 3);
    Racional r4(4, 12);

    cout << "r1: " << endl;
    r1.imprimirDecimal();
    r1.imprimirRacional();

    cout << endl;

    cout << "r2: " << endl;
    r2.imprimirDecimal();
    r2.imprimirRacional();

    cout << endl;

    cout << "r3: " << endl;
    r3.imprimirDecimal();
    r3.imprimirRacional();

    cout << endl;

    cout << "r4: " << endl;
    r3.imprimirDecimal();
    r3.imprimirRacional();

    cout << endl;

    cout << "r1 + r2: " << endl;
    Racional r5 = r2.suma(r3);
    r5.imprimirDecimal();
    r5.imprimirRacional();

    _getch();
}