#include "cuento.h"

//Constructor
Cuento::Cuento(string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor) : Lectura(titulo, minutos, anio, autor){
  
}

//Mostrar titulo
void Cuento::mostrar_titulo(){
  cout << "Titulo del libro donde se encuentra:" << titulo << endl;
}

//Destructor
Cuento::~Cuento(){}