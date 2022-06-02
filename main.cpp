#include "parser_escritores.h"
#include "parser_lecturas.h"
#include <fstream>
#include <iostream>
#include "escritor.h"
#include "lista.h"
#include "menu.h"

int main(int argc, char * argv[]){
  
  Lista<Escritor>* lista_escritores = new Lista<Escritor>;
	Lista<Lectura>* lista_lecturas = new Lista<Lectura>;

  Parser_escritores parser_escritores(lista_escritores, argv);
	parser_escritores.parsear();
  //lista_escritores -> mostrar();
  Parser_lectura parser_lecturas(argv);
  parser_lecturas.procesar_datos(lista_escritores, lista_lecturas);
  //lista_lecturas->mostrar();
  
  Menu menu(lista_lecturas, lista_escritores);
  menu.listar_lecturas_anios();

  delete lista_escritores;
  delete lista_lecturas;

  return 0;
}