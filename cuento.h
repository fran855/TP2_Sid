#ifndef CUENTO_H
#define CUENTO_H

#include <iostream>
#include <string>

using namespace std;

class Cuento {

private:
  string titulo;

public:
  //Constructor
  Cuento(string titulo);

  //Mostrar titulo
  // PRE:
  // POS: Muestra titulo del cuento
  string mostrar_titulo();

  //Destructor
  ~ Cuento();
}

#endif