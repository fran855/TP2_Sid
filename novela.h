#ifndef NOVELA_H
#define NOVELA_H

#include <iostream>
#include <string>
#include "lectura.h"
using namespace std;

typedef enum genero {DRAMA, COMEDIA, FICCION, SUSPENSO, 
TERROR, ROMANTICA, HISTORICA} genero_t;

class Novela : public Lectura{

private:
  genero_t genero;

public:

//Constructor:
//PRE:
//POS:
  Novela(string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor, int genero);

//Mostrar genero
//PRE:
//POS: Muestra a que genero pertenece la novela
  void mostrar_genero();


//Mostrar titulo
// PRE:
// POS: Devuelve titulo del libro donde esta el cuento
  int obtener_genero();


// Mostrar
// PRE: - 
// POS: muestra los atributos en pantalla
    void mostrar(); // es mostrar() sobrecargado, se le agrega la funcionalidad de mostrar el genero


//Destructor:
//PRE:
//POS:
~Novela();

};

#endif