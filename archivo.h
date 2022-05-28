#ifndef ARCHIVO_H_INCLUDED
#define ARCHIVO_H_INCLUDED

#include <string>
#include <fstream>
#include "lectura.h"
#include "escritor.h"

class Archivo{
private:
	char** entrada;
	char tipo_lectura();
	string titulo();
	unsigned int minutos();
	unsigned short int anio();
	

public:
	Archivo(char** argv);
	~Archivo(){};
	Lectura* procesar_lecturas(string);
    Escritor* procesar_escritores(string);

private:
	std::string tipoVehiculo();   //no lo voy a usar de afuera -> privado
	
};

#endif