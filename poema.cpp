#include <iostream>
#include <string>
#include "poema.h"

using namespace std;

//Constructor
Poema::Poema (string titulo, unsigned int minutos, unsigned short int anio, unsigned int versos, Escritor* autor) : Lectura(titulo, minutos, anio, autor) {
    this -> versos = versos;
}


// Mostrar
void Poema::mostrar(){ 
    cout << "Titulo: " << titulo << endl;
    cout << "Minutos aproximados: " << minutos << endl;
    cout << "Año: " << anio << endl;
    cout << "Autor: " << autor->obtener_nombre_apellido() << endl;
    cout << "Versos: " << versos << endl;
}


//Destructor
Poema::~Poema(){}