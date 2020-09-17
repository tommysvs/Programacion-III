#pragma once

#ifndef MATERIAS_H
#define MATERIAS_H

struct materia {
	int codigo_materia;
	char materia[30];
	int unidad_valorativa;
};

class Materias {
public:
	void agregarMateria();
	void imprimirMaterias();
	bool buscarMateria(int);
};

#endif // !MATERIAS_H