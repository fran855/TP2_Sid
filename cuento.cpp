#include "cuento.h"

//Constructor
Cuento::Cuento(string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor, string libro) : Lectura(titulo, minutos, anio, autor){
    this->libro = libro;
}

//Mostrar atributos
//PRE:
//POS:
void Cuento::mostrar(){ 
    cout << titulo << endl;
    cout << minutos << endl;
    cout << anio << endl;
    cout << autor->obtener_nombre_apellido() << endl;
    cout << libro << endl;
}

//Mostrar titulo
// PRE:
// POS: Devuelve titulo del libro donde esta el cuento
string Cuento :: obtener_libro(){
  return libro;
}

//Destructor
Cuento::~Cuento(){}