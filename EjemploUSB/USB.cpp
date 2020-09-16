#include <iostream>
#include <fstream>
#include "USB.h"

using namespace std;

USB::USB() { }

void USB::initUSB() {
	fstream usbFile("usb.bin", ios::out | ios::binary);

	if (!usbFile) {
		cout << "Imposible cargar dispositivo USB.\n\n";
		return;
	}

	metadata meta;
	cout << "*** C R E A C I O N  D E  D I S P O S I T I V O ***\n\n";

	cout << "Indique nombre de dispositivo: ";
	cin >> meta.nombreUSB;

	cout << "Indique creador de dispositivo: ";
	cin >> meta.creadorUSB;

	meta.cantidadFileEntry = 10;
	meta.cantidadBloquesDatos = 100;
	meta.primerBloqueLibre = 0;

	usbFile.seekg(0, ios::beg); //posicion al inicio del archivo para escribir

	usbFile.write(reinterpret_cast<const char*>(&meta), sizeof(metadata));

	//creacion de FileEntries
	fileEntry file;
	strcpy_s(file.nombreArchivo, 3, "ND");

	file.tamanoArchivo = 0;
	file.primerBloqueDatos = 0;
	file.ultimoBloqueDatos = 0;
	file.estadoArchivo = false;

	for (int i = 0; i < meta.cantidadFileEntry; i++)
		usbFile.write(reinterpret_cast<const char*>(&file), sizeof(fileEntry));

	//creacion de bloque de datos
	dataBlock bloque;
	for (int i = 0; i < 1020; i++)
		bloque.data[i] = '0';

	bloque.siguienteBloque = 0;
	
	for (int i = 0; i < meta.cantidadBloquesDatos; i++)
		usbFile.write(reinterpret_cast<const char*>(&bloque), sizeof(dataBlock));

	//confirmar la creacion del dispositivo
	cout << "\nDispositivo USB creado correctamente!\n\n";
}