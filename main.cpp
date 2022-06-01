#include "parser_escritores.h"
#include "parser_lecturas.h"
#include <fstream>
#include <iostream>
#include "escritor.h"
#include "lista.h"


int main(int argc, char * argv[]){
  
  Lista<Escritor>* lista_escritores = new Lista<Escritor>;
	Lista<Lectura>* lista_lecturas = new Lista<Lectura>;

  Parser_escritores parser(lista_escritores, argv);
	parser.parsear();
  delete lista_escritores;
  delete lista_lecturas;

  return 0;
}