#include "parser_escritores.h"
#include "parser_lecturas_2"
#include <fstream>
#include <iostream>
#include "escritor.h"
#include "lista.h"


int main(int argc, char * argv[]){
  
  Lista<Escritor>* lista_escritores = new Lista<Escritor>;
	Parser_escritores parser(lista_escritores, argv[1]);
	parser.parsear();
  
  Lista<Lectura>*  lista = new Lista<Lectura>;
  lista.Parser_lectura(argv[1]);
  lista.procesar_datos(Lista<Escritor>* lista_escritores);
  


  
  return 0;
}