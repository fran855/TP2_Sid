#include "cuento.h"
#include <iostream>

  //Constructor
  Cuento::cuento(string titulo){
    this->titulo = titulo;
  };

  //Mostrar titulo
  Cuento::string mostrar_titulo(){
    cout << "Titulo del cuento:" << titulo << endl;
  };

  //Destructor
  Cuento::~cuento(){};