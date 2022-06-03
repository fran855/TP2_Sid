#ifndef POEMA_H
#define POEMA_H

#include <iostream>
#include <string>
#include "lectura.h"

class Poema: public Lectura {

protected:
    unsigned int versos;

public:
  //Constructor
  //PRE:
  //POS:
    Poema(string titulo, unsigned int minutos, unsigned short int anio, unsigned int versos, Escritor* autor);
  
  // Mostrar
  // PRE: - 
  // POS: muestra los atributos en pantalla
  void mostrar(); // es mostrar() sobrecargado, se le agrega la funcionalidad de mostrar los versos

  void mostrar_si_genero(genero_t genero){};

  //Destructor
  //PRE:
  //POS:
    ~Poema();

};


  
#endif