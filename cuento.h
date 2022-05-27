#ifndef CUENTO_H
#define CUENTO_H

#include "lectura.h"
#include <iostream>
//#include <string>

using namespace std;

class Cuento : public Lectura {

public:
  //Constructor
  Cuento (string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor);

  //Mostrar titulo
  // PRE:
  // POS: Muestra titulo del cuento
  void mostrar_titulo();

  //Destructor
  ~ Cuento();
};

#endif