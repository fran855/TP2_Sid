#include "novela_historica.h"

//Constructor
Novela_historica :: Novela_historica(string titulo, unsigned int minutos, unsigned short int anio, char* tema, Escritor* autor): Novela(titulo, minutos, anio, genero, autor){
  this->tema = tema;
  this->genero = HISTORICA;
}

//Mostrar tema
void Novela_historica::mostrar_tema(){
  cout << "Tema: " << tema << endl;  
}

//Obtener tema
char* Novela_historica::obtener_tema(){
  return tema;
}

//Destructor
Novela_historica::~Novela_historica(){}