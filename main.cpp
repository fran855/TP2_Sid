#include "parser_escritores.h"
#include "parser_lecturas.h"
#include <fstream>
#include <iostream>
#include "escritor.h"
#include "lista.h"
#include "cola.h"


int main(int argc, char * argv[]){
  
  Lista<Escritor>* lista_escritores = new Lista<Escritor>;
	Lista<Lectura>* lista_lecturas = new Lista<Lectura>;

  Parser_escritores parser_escritores(lista_escritores, argv);
	parser_escritores.parsear();
  //lista_escritores -> mostrar();
  Parser_lectura parser_lecturas(argv);
  parser_lecturas.procesar_datos(lista_escritores, lista_lecturas);
  lista_lecturas->mostrar();

  cout << "-------------------------------------------" << endl;
  /* cout << endl << "Se muestra el elemento con menos minutos de la lista:" << endl;

  Nodo<Lectura>* minimo = lista_lecturas -> encontrar_minimo(nullptr, 0);
  minimo -> obtener_dato() -> mostrar(); */
  
  cout << endl << "Se crea la cola ordenada" << endl;

  Cola<Lectura> la_cola;
  la_cola.encolar(lista_lecturas);

  cout << "-------------------------------------------" << endl;
  cout << "Se muestra el proximo elemento de la cola:" << endl;
  while (!la_cola.vacia()) {
    la_cola.consulta();
    la_cola.baja();
    cout << endl;
  } 


  
  delete lista_escritores;
  delete lista_lecturas;

  return 0;
}