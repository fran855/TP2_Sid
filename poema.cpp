#include <iostream>
#include <string>
#include "poema.h"

using namespace std;

Poema::Poema(string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor, unsigned int versos) : Lectura(titulo, minutos, anio, autor) {
    this -> versos = versos;
};

Poema::~Poema(){};

void Poema::mostrar(){ 
    cout << titulo << endl;
    cout << minutos << endl;
    cout << anio << endl;
    cout << autor.obtener_autor() << endl;
    cout << versos << endl;
};
