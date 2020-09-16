#pragma once

#ifndef NOTAS_H
#define NOTAS_H

struct NotaRegistro {
	int cuenta;
	int codigo;
	float nota;
};

class Notas {
public:
	void agregarNota();
	void listarNotas();
	void actualizarPromedio();
};

#endif // !NOTAS_H