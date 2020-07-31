#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void factoresPrimos() {
	char volver;

	do {
		int num;

		system("cls");
		cout << "Descomposicion de numero en factores primos\n\n";

		cout << "Ingrese el numero a factorizar: ";
		cin >> num;

		cout << "\nLos factores primos de " << num << " son: " << endl;
		for (int i = 2; num > 1; i++) {
			while (num % i == 0) {
				cout << i << " ";
				num /= i;
			}
		}

		cout << "\n\nDesea descomponer otro numero? (S/n): ";
		cin >> volver;
	} while (volver != 'n');
}

void repBinario() {
	char volver;
	int bin, binSvd, sob;
	bool esBin;

	do {
		int ent = 0;
		int i = 0;

		system("cls");
		cout << "Convertir numero a su representacion en binario\n\n";

		cout << "Ingrese el numero a convertir: ";
		cin >> bin;
		binSvd = bin;

		if (binSvd % 10 > 1)
			esBin = false;
		else
			esBin = true;

		if (esBin) {
			while (bin != 0) {
				sob = bin % 10;
				bin /= 10;
				ent += sob * pow(2, i);
				i++;
			}
			cout << "\nEl valor entero de " << binSvd << " es: " << ent;
			cout << "\n\nDesea convertir otro numero? (S/n): ";
		}
		else {
			cout << "\nEl numero ingresado no es binario.";
			cout << "\n\nDesea intentar con otro numero? (S/n): ";
		}

		cin >> volver;
	} while (volver != 'n');
}

void fibonacci() {
	char volver;
	int num, sig;

	do {
		int ser1 = 0;
		int ser2 = 1;

		system("cls");
		cout << "Serie Fibonacci\n\n";

		cout << "Ingrese la cantidad de terminos a mostrar: ";;
		cin >> num;

		cout << "\nA continuacion, se muestran los primeros " << num << " numeros de la serie: " << endl;
		for (int i = 0; i < num; i++) {
			cout << ser1 << " ";
			sig = ser1 + ser2;
			ser1 = ser2;
			ser2 = sig;
		}

		cout << "\n\nDesea volver a obtener la serie y su sumatoria? (S/n): ";
		cin >> volver;
	} while (volver != 'n');
}

void main() {
	int opcion = 0;

	cout << "MENU\n\n";
	cout << "1. Factores primos\n";
	cout << "2. Representacion en binario\n";
	cout << "3. Serie Fibonacci\n\n";

	cout << "Seleccione una opcion: ";
	cin >> opcion;

	switch (opcion) {
	case 1:
		factoresPrimos();
		break;
	case 2:
		repBinario();
		break;
	case 3:
		fibonacci();
		break;
	default:
		cout << "Opcion invalida";
		break;
	}
}