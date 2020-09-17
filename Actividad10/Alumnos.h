#pragma once

#ifndef ALUMNOS_H
#define ALUMNOS_J

struct alumno {
	int cuenta_alumno;
	char nombre[30];
	float promedio;
};

class Alumnos {
public:
	void agregarAlumno();
	void listarAlumnos();
	bool buscarAlumno(int);
};

#endif // !ALUMNOS_H