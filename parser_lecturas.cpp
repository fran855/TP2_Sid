#include "parser_lecturas.h"
#include "lectura.h"
#include "novela.h"
#include "cuento.h"
#include "poema.h"

using namespace std;


Parser_lectura::Parser_lectura(char* lecturas) {
    archivo_lectura.open(lecturas);
    archivo_lectura >> tipo_lectura;
}

/*
Lectura* Parser_lectura::procesar_datos() const {
    Lectura* lectura = NULL;
  
    if(tipo_lectura == 'C') {
        Lectura = new Cuento(this->titulo, this->minutos, this->anio, this->autor, this->libro);
    }
    else if (tipo_lectura == 'N') {
        Lectura = new Novela(this->titulo, this->minutos, this->anio, this->autor, this->genero);
    }
    else if (tipo_lectura == 'P') {
        Lectura = new Poema(this->titulo, this->minutos, this->anio, this->autor, this->versos);
    }
  
    return lectura;
}

string Parser_lectura:: titulo() const {
  archivo_lectura >> auxiliar;
  return auxiliar;
}


unsigned int Parser_lectura:: minutos() const {
  getline(archivo_lectura, auxiliar);
  return stoi(auxiliar);
}

unsigned short int Parser_lectura :: anio() const {
  getline(archivo_lectura, auxiliar);
  return stoi(auxiliar);
}


Escritor* autor() const{
  
}

string Parser_lectura :: libro() const {
  getline(archivo_lectura, auxiliar);
  return auxiliar;
}

unsigned int Parser_lectura :: versos() const{
  getline(archivo_lectura, auxiliar);
  return stoi(auxiliar);
}

genero_t Parser_lectura :: genero() const {
  getline(archivo_lectura, auxiliar);
  return stoi(auxiliar);
}

*/


//string Parser::tipo_lectura() const {
//    return this->entrada;
//}

