#include <fstream>
#include <iostream>
#include "escritor.h"
#include "lista.h"
#include "parser_escritores.h"

using namespace std;

int main(int argc, char * argv[]){
/*
	Lista<Escritor> lista;
	Escritor prueba(1, "Jorge Luis Borges", "argentino", 1900, 2000);
	Escritor prueba2(2, "Jorge Luis Borges", "argentino", 1900, 2000);
	lista.alta(prueba, 1);
	lista.alta(prueba2, 2);

	lista.mostrar();
*/
	Lista<Escritor> lista;
	
	Parser_escritores parser(argv);
	lista = parser.parsear();
	//lista.mostrar();
    //cout << lista.consulta(2).obtener_id() << endl;

	return 0;
}