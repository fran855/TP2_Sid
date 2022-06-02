#include "cuento.h"


//Constructor
Cuento :: Cuento(string titulo, unsigned int minutos, unsigned short int anio, string libro, Escritor* autor) : Lectura(titulo, minutos, anio, autor){
    this->libro = libro;
}

//Mostrar atributos
//PRE:
//POS:
void Cuento::mostrar(){ 
    cout << "Titulo: " << titulo << endl;
    cout << "Minutos aproximados: " << minutos << endl;
    cout << "Año: " << anio << endl;
    cout << "Libro: "<< libro << endl;
    if(!autor){
      cout << "Autor: ANONIMO" << endl;
    }else{
      cout << "Autor: " << autor->obtener_nombre_apellido() << endl;
    }
}

//Mostrar titulo
// PRE:
// POS: Devuelve titulo del libro donde esta el cuento
string Cuento :: obtener_libro(){
  return libro;
}

//Destructor
Cuento::~Cuento(){}