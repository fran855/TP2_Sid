#include "archivo.h"

Archivo_lecturas::Archivo_lecturas(char** argv){
	ifstream lecturas(argv[1]);
}

Lectura Archivo_lecturas::procesar_lecturas(){
}

void Archivo_lecturas::asignar_tipo(){
	this -> lecturas >> tipo;
}

char Archivo_lecturas::obtener_tipo(){
	return tipo;
}

void Archivo_lecturas::asignar_titulo(){}
void Archivo_lecturas::asignar_minutos(){}
void Archivo_lecturas::asignar_anio(){}
void Archivo_lecturas::asignar_genero(){}
void Archivo_lecturas::asignar_tema(){}
void Archivo_lecturas::asignar_libro(){}
void Archivo_lecturas::asignar_versos(){}
void Archivo_lecturas::asignar_autor(){}


Archivo_lecturas::~Archivo_lecturas(){}