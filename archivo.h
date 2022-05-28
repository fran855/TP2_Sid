#ifndef ARCHIVO_H_INCLUDED
#define ARCHIVO_H_INCLUDED

#include <string>
#include <fstream>
#include "lectura.h"
#include "escritor.h"

class Archivo_lecturas{
private:
	
	char tipo;
	string titulo;
	unsigned int minutos;
	unsigned short int anio;
	genero gen;
	string tema;
	string libro;
	unsigned int versos;
	Escritor * autor;

public:
	ifstream lecturas;
	Archivo_lecturas(char** argv);
	~Archivo_lecturas(){};
	Lectura* procesar_lecturas(string);

private:
	std::string tipoVehiculo();   //no lo voy a usar de afuera -> privado
	char tipo();
	string titulo();
	unsigned int minutos();
	unsigned short int anio();
	genero genero();
	string tema();
	string libro();
	unsigned int versos();
	Escritor * autor();
	
};

#endif