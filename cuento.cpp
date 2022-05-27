#include "cuento.h"

//Constructor
Cuento::Cuento(string titulo) : Lectura(titulo){
  this->titulo = titulo;
};

//Mostrar titulo
void Cuento::mostrar_titulo(){
  cout << "Titulo del cuento:" << titulo << endl;
};

//Destructor
Cuento::~Cuento(){};