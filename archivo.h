#ifndef ARCHIVO_H_INCLUDED
#define ARCHIVO_H_INCLUDED

#include <string>
#include <fstream>
#include "lectura.h"
#include "escritor.h"

typedef enum genero {DRAMA, COMEDIA, FICCION, SUSPENSO, 
TERROR, ROMANTICA, HISTORICA} genero_t;
class Archivo_lecturas{
private:
	char tipo;
	string titulo;
	unsigned int minutos;
	unsigned short int anio;
	genero_t genero;
	string tema;
	string libro;
	unsigned int versos;
	Escritor * autor;

public:
	ifstream lecturas;
	Archivo_lecturas(char** argv);
	~Archivo_lecturas();
	Lectura procesar_lecturas();
	void asignar_tipo();
	char obtener_tipo();

private:
	void asignar_titulo();
	void asignar_minutos();
	void asignar_anio();
	void asignar_genero();
	void asignar_tema();
	void asignar_libro();
	void asignar_versos();
	void asignar_autor();
	
};

#endif