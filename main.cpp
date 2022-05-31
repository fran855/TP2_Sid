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
	Lista<Escritor>* lista = new Lista<Escritor>;
	
	Parser_escritores parser(lista, argv);
	parser.parsear();
	lista -> mostrar();
    
	// lista.obtener_nodo(1)->obtener_dato().mostrar();
	// lista.obtener_nodo(2)->obtener_dato().mostrar();


/* 	ifstream archivo(argv[1]);
	string entrada;
    Lista<Escritor> * lista_escritores = new Lista<Escritor>;
    int id;
    string nombre_apellido;
    string nacionalidad;
    short int anio_nacimiento;
    short int anio_fallecimiento;
    string auxiliar;
    int i = 1;

    while(!archivo.eof()){
        getline(archivo, auxiliar);
		id = stoi(auxiliar);
		getline(archivo, nombre_apellido);
		getline(archivo, nacionalidad);

		getline(archivo, auxiliar);
        if(auxiliar != "\n"){
            anio_nacimiento = stoi(auxiliar);
            getline(archivo, auxiliar);
            if(auxiliar != "\n"){
                anio_fallecimiento = stoi(auxiliar);
            }
            else{
                anio_fallecimiento = -1;
            }
        }
        else{
            anio_nacimiento = -1;
            anio_fallecimiento = -1;
        }

		getline(archivo, auxiliar); //Apunta al nuevo escritor (o lee el EOF)     
	    Escritor nuevo_escritor(id, nombre_apellido, nacionalidad, anio_nacimiento, anio_fallecimiento);
        lista_escritores -> alta(nuevo_escritor, i++);
    }

	lista_escritores -> mostrar(); */

	return 0;
}