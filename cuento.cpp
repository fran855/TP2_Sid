#include "cuento.h"
#include <iostream>

  //Constructor
  cuento::cuento(string titulo){
    this->titulo = titulo;
  };

  //Mostrar titulo
  cuento::string mostrar_titulo(){
    cout << "Titulo del cuento:" << titulo << endl;
  };