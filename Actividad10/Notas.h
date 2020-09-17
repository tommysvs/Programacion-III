#pragma once

#ifndef NOTAS_H
#define NOTAS_H

struct notas {
	int cuenta;
	int codigo;
	float nota;
};

class Notas {
public:
	void agregarNota();
	void listarNotas();
	void actualizarPromedio(int);
};

#endif // !NOTAS_H