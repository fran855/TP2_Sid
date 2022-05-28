#include "novela.h"

Novela :: Novela(string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor, int genero) : Lectura(titulo, minutos, anio, autor) {
   this->genero = genero;
 }

void Novela :: mostrar_genero(){
  cout << "Genero: " << this->genero << endl;
}

Novela :: ~Novela(){}