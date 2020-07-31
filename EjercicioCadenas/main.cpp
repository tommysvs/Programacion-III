#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main() {
	string nombre;
	string apellidos;

	nombre = "Mauricio";
	apellidos = "Lopez Najera";

	string nombreCompleto = nombre + ' ' + apellidos;

	cout << "Nombre { " << nombreCompleto << " }" << endl;
	cout << "Longitud de nombre" << nombreCompleto.size() << endl;

	//------------------------------------------------------------

	char nombreC[20];
	char apellidosC[40];

	cout << "Escriba un nombre: ";
	cin >> nombreC;

	cout << "Escriba sus apellidos: ";
	string apellidosS;
	getline(cin, apellidosS);

	char* nombreCompletoC;
	nombreCompletoC = new char[strlen(nombreC) + strlen(apellidosS.c_str()) + 1];

	strcpy_s(nombreCompletoC, strlen(nombreC) + 1, nombreC);
	strcat_s(nombreCompletoC, strlen(nombreC) + strlen(apellidosS.c_str()) + 1, apellidosS.c_str());

	cout << "El nombre escrito es: { " << nombreCompletoC << " }" << endl;

	_getch();
}