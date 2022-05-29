#include "parser_lecturas.h"
using namespace std;


Parser_lectura::Parser_lectura(char* lecturas) {
    archivo_lectura.open(lecturas);
    getline(archivo_lectura, tipo_lectura);
}

string Parser_lectura:: titulo(){
  getline(archivo_lectura, auxiliar);
  return auxiliar;
}

unsigned int Parser_lectura:: minutos() {
  getline(archivo_lectura, auxiliar);
  return stoi(auxiliar);
}

unsigned short int Parser_lectura :: anio(){
  getline(archivo_lectura, auxiliar);
  return stoi(auxiliar);
}

/*
Escritor* autor() {
  getline(archivo_lectura, auxiliar);
  auxiliar.replace (0,  1, " ");
  int id = stoi(auxiliar);
  return obtener_escritor(id);
}*/

string Parser_lectura :: libro(){
  getline(archivo_lectura, auxiliar);
  return auxiliar;
}

unsigned int Parser_lectura :: versos(){
  getline(archivo_lectura, auxiliar);
  return stoi(auxiliar);
}


genero_t Parser_lectura :: genero(){
  getline(archivo_lectura, auxiliar);
  return generomap[auxiliar];
}


Lectura* Parser_lectura::procesar_datos() const {
    Lectura* lectura = NULL;
  
    if(tipo_lectura == 'C') {
        Lectura = new Cuento(this->titulo(), this->minutos(), this->anio(), this->libro(), this->autor());
    }
    else if (tipo_lectura == 'N') {
        Lectura = new Novela(this->titulo, this->minutos, this->anio, this->autor, this->genero);
    }
    else if (tipo_lectura == 'P') {
        Lectura = new Poema(this->titulo, this->minutos, this->anio, this->autor, this->versos);
    }
  
    return lectura;
}



//string Parser::tipo_lectura() const {
//    return this->entrada;
//}

