#include "parser_escritores.h"
#include "escritor.h"
#include <iostream>
#include <string>

using namespace std;

Parser_escritores::Parser_escritores(Lista<Escritor> * lista, char ** argv){
    entrada = argv[1];
    lista_escritores = lista;
}

void Parser_escritores::generar_anonimo(){
    id = 0;
    nombre_apellido = "ANONIMO";
    nacionalidad = "¿?";
    anio_nacimiento = -1;
    anio_fallecimiento = -1;
}

void Parser_escritores::parsear(){
    ifstream archivo(entrada);
    
	/*
	this -> generar_anonimo();
	
    Escritor nuevo_escritor(id, nombre_apellido, nacionalidad, anio_nacimiento, anio_fallecimiento);
    lista_escritores.alta(nuevo_escritor, 0);
    */
	
    string auxiliar;
    int i = 1;

    while(!archivo.eof()){
        cout << "WHILE" << endl;
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
        //nuevo_escritor.mostrar(); /*prueba*/
        cout << "PRE-ALTA" << endl;
        
        lista_escritores -> alta(nuevo_escritor, i++);
        cout << "POST-ALTA" << endl;
    }
    cout << "FIN PARSER" << endl;
    return;
}

Parser_escritores::~Parser_escritores(){
}