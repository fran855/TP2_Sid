#include <iostream>
#include <string>
#include "poema.h"

using namespace std;

//Constructor
Poema::Poema(string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor, unsigned int versos) : Lectura(titulo, minutos, anio, autor) {
    this -> versos = versos;
}


// Mostrar
void Poema::mostrar(){ 
    cout << titulo << endl;
    cout << minutos << endl;
    cout << anio << endl;
    cout << autor->obtener_nombre_apellido() << endl;
    cout << versos << endl;
}


//Destructor
Poema::~Poema(){}