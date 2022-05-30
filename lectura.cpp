#include <iostream>
#include "lectura.h"
#include "escritor.h"

Lectura::Lectura (string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor) {
    this -> titulo = titulo;
    this -> minutos = minutos;
    this -> anio = anio;
    this -> autor = autor;
}


Lectura::~Lectura(){}

//int Lectura::comparar(Lectura* lectura){};

void Lectura::mostrar () {
    cout << titulo << endl;
    cout << minutos << endl;
    cout << anio << endl;
    cout << autor -> obtener_nombre_apellido() << endl; // Aca iria el metodo para obtener el nombre y apellido del autor
}

string Lectura::obtener_titulo() {
    return this -> titulo;
}

unsigned int Lectura::obtener_minutos() {
    return this -> minutos;
}

unsigned short int Lectura::obtener_anio() {
    return this-> anio;
}

Escritor* Lectura::obtener_autor() {
    return this -> autor;
}


void Lectura::operator=(Lectura lectura2){
  this -> titulo = lectura2.titulo;
  this -> minutos = lectura2.minutos;
  this -> anio = lectura2.anio;
  this -> autor = lectura2.autor;
}


