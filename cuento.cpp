#include "cuento.h"

//Constructor
Cuento::Cuento(string titulo):Lectura (string titulo){
  this->titulo = titulo;
};

//Mostrar titulo
Cuento::string mostrar_titulo(){
  cout << "Titulo del cuento:" << titulo << endl;
};

//Destructor
Cuento::~Cuento(){};