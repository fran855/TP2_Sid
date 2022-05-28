#ifndef NOVELA_HISTORICA_H
#define NOVELA_HISTORICA_H

#include <iostream>
#include <string>
#include "novela.h"

using namespace std;

class Novela_historica : public Novela{

private:

  string tema;

public: 

//Constructor
//PRE:
//POS:
  Novela_historica(string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor, string tema);

//Mostrar_tema
//PRE:
//POS:
  void mostrar_tema();


//Obtener tema
//PRE:
//POS:
  string obtener_tema();


//DESTRUCTOR
//PRE:
//POS:
  ~Novela_historica();

};

#endif