#ifndef CUENTO_H
#define CUENTO_H

#include "lectura.h"
#include <iostream>
//#include <string>

using namespace std;

class Cuento : public Lectura {

private: 
  string libro;


public:
  //Constructor
  Cuento (string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor);

  //Mostrar titulo
  // PRE:
  // POS: Muestra titulo del libro donde esta el cuento
  void mostrar_libro();

  //Mostrar titulo
  // PRE:
  // POS: Devuelve titulo del libro donde esta el cuento
  string obtener_libro();

  // Mostrar
  // PRE: - 
  // POS: muestra los atributos en pantalla
    void mostrar(); // es mostrar() sobrecargado, se le agrega la funcionalidad de mostrar los versos


  //Destructor
  ~ Cuento();
};

#endif