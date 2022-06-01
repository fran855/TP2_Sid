#include <fstream>
#include <iostream>
#include "escritor.h"
#include "lista.h"
#include "parser_escritores.h"

using namespace std;

int main(int argc, char * argv[]){

	Lista<Escritor>* lista = new Lista<Escritor>;
	
	Parser_escritores parser(lista, argv);
	parser.parsear();
	lista -> mostrar();
    
	delete lista;

	return 0;
}