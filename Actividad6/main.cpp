#include <iostream>
#include <conio.h>
#include "AlumnoNodo.h"
#include "SeccionLista.h"

using namespace std;

int main() {
	SeccionLista lista;

	lista.agregarAlumno("Tommy", 89);
	lista.agregarAlumno("Cristina", 96);

	lista.listarSeccion();
	
	cout << "Aprobados: " << lista.cantidadAprobados() << endl;

	_getch();
}