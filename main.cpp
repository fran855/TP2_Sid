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

	lista.obtener_nodo(1)->obtener_dato().mostrar();
	lista.obtener_nodo(2)->obtener_dato().mostrar();

	lista.baja(1);
	lista.baja(1);
*/

 
	Lista<Escritor> lista;
	
	Parser_escritores parser(&lista, argv);
	parser.parsear();
	//lista.mostrar();
    // lista.obtener_nodo(1)->obtener_dato().mostrar();
	// lista.obtener_nodo(2)->obtener_dato().mostrar();


	return 0;
}