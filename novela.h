#ifndef NOVELA_H
#define NOVELA_H

#include <iostream>
#include <string>
#include "lectura.h"

using namespace std;

class Novela : public Lectura{

private:
  enum genero;

public:

//Constructor:
//PRE:
//POS:
  Novela(string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor, enum genero);

//Mostrar genero
//PRE:
//POS:
  void mostrar_genero();

//Destructor:
//PRE:
//POS:
~Novela();

};

#endif