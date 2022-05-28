#include "novela.h"

//Constructor
Novela :: Novela(string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor, int genero) : Lectura(titulo, minutos, anio, autor) {
   this->genero = genero;
}


// Mostrar
void Novela::mostrar(){ 
    cout << "Titulo: " << titulo << endl;
    cout << "Minutos aproximados: " << minutos << endl;
    cout << "Año: " << anio << endl;
    cout << "Autor: " << autor->obtener_nombre_apellido() << endl;
    cout << "Genero: " << genero << endl;
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