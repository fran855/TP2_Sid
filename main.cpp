#include "lectura.h"
#include "escritor.h"
#include "novela.h"

int main(){
  
  Escritor Pepito("Francisco Spaltro", "Argetino", 2000, 2100);

  // string nombre_apellido, string nacionalidad, short int anio_nacimiento, short int anio_fallecimiento
  Novela cuentito("caperucita", 10, 1900, &Pepito, DRAMA);

  cuentito.mostrar();
  cout << cuentito.obtener_genero()<<endl;
  //string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor, string libro
  return 0;
}