#pragma once

#ifndef USB_H
#define USB_H

struct metadata {
	char nombreUSB[10];
	char creadorUSB[10];
	unsigned int cantidadFileEntry;
	unsigned int cantidadBloquesDatos;
	unsigned int primerBloqueLibre;
};

struct fileEntry {
	char nombreArchivo[30];
	unsigned int tamanoArchivo;
	unsigned int primerBloqueDatos;
	unsigned int ultimoBloqueDatos;
	bool estadoArchivo; //1: ocupado, 0: disponible
};

struct dataBlock {
	char data[1020];
	int siguienteBloque;
};

class USB {
private:

public:
	USB();

	void initUSB();
	void addFile();
	void removeFile();
};


#endif // !USB_H