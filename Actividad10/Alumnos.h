#pragma once

#ifndef ALUMNOS_H
#define ALUMNOS_J

struct alumnos {
	int cuenta_alumno;
	char nombre[30];
	float promedio;
};

class Alumnos {
public:
	void agregarAlumno();
	void listarAlumnos();
};

#endif // !ALUMNOS_H