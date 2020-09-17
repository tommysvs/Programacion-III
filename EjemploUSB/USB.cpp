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

	bloque.siguienteBloque = -1;
	
	for (int i = 0; i < meta.cantidadBloquesDatos; i++) {
		usbFile.write(reinterpret_cast<const char*>(&bloque), sizeof(dataBlock));
		
		if (i == meta.cantidadBloquesDatos - 1)
			bloque.siguienteBloque = -1;
		else
			bloque.siguienteBloque = i + 1;
	}
	//confirmar la creacion del dispositivo
	cout << "\nDispositivo USB creado correctamente!\n\n";
}

void USB::addFile() {
	cout << "*** I M P O R T A R  A R C H I V O ***\n\n";

	cout << "Indique el nombre del archivo a importar: ";
	char archivoAdd[30];
	cin >> archivoAdd;

	ifstream archivoImp(archivoAdd, ios::in | ios::binary);

	if (!archivoImp) {
		cout << "Archivo a importar no existe." << endl;
		return;
	}

	fstream usbFile("usb.bin", ios::in | ios::out | ios::binary);

	if (!usbFile) {
		cout << "Imposible carcar el dispositivo USB." << endl;
		return;
	}

	//lectura de metadata
	metadata meta;
	usbFile.read(reinterpret_cast<char*>(&meta), sizeof(metadata));

	//lectura de FAT FileEntries
	fileEntry file;
	int posFileEntry = 0;
	for (int i = 0; i < meta.cantidadFileEntry; i++) {
		usbFile.read(reinterpret_cast<char*>(&file), sizeof(fileEntry));

		//si esta libre
		if (!file.estadoArchivo) {
			posFileEntry = i;
			break;
		}
	}

	//escribir la informacion del archivo a ingresar
	strcpy_s(file.nombreArchivo, strlen(archivoAdd) + 1, archivoAdd);
	archivoImp.seekg(0, ios::end);
	file.tamanoArchivo = archivoImp.tellg();
	file.primerBloqueDatos = meta.primerBloqueLibre;
	file.estadoArchivo = 1;

	//escribir bloques de datos
	archivoImp.seekg(0, ios::beg);
	int posActArchivoImp = 0; //posicion actual del archivo a importar

	dataBlock bloqueDisponible;
	int siguienteBloqueDatos = file.tamanoArchivo;

	while (posActArchivoImp < file.tamanoArchivo) {
		archivoImp.read(reinterpret_cast<char*>(&bloqueDisponible.data), 1020);

		//ultimo bloque de datos
		if (posActArchivoImp + 1020 > file.tamanoArchivo) {
			bloqueDisponible.siguienteBloque = -1;
			file.ultimoBloqueDatos = siguienteBloqueDatos;
			archivoImp.read(reinterpret_cast<char*>(bloqueDisponible.data), file.tamanoArchivo - posActArchivoImp);
		} else 
			archivoImp.read(reinterpret_cast<char*>(bloqueDisponible.data), 1020);

		usbFile.seekp(sizeof(metadata) + (sizeof(fileEntry) * meta.cantidadFileEntry) + siguienteBloqueDatos * sizeof(dataBlock), ios::beg);
		usbFile.write(reinterpret_cast<const char*>(&bloqueDisponible), sizeof(dataBlock));
		siguienteBloqueDatos++;
	}
}