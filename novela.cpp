#include "novela.h"

//Constructor
Novela :: Novela(string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor, int genero) : Lectura(titulo, minutos, anio, autor) {
   this->genero = genero;
}


// Mostrar
void Poema::mostrar(){ 
    cout << titulo << endl;
    cout << minutos << endl;
    cout << anio << endl;
    cout << autor->obtener_nombre_apellido() << endl;
    cout << genero << endl;
}


//Mostrar genero
void Novela :: mostrar_genero(){
  cout << "Genero: " << this->genero << endl;
}


//Obtener genero
int Novela :: obtener_genero(){
  return genero;
}


//Destructor
Novela :: ~Novela(){}