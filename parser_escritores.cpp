#include "parser_escritores.h"
#include "escritor.h"
#include <iostream>

using namespace std;

Parser_escritores::Parser_escritores(char ** argv){
    archivo.open(argv[1]);
}

void Parser_escritores::generar_anonimo(){
    id = 0;
    nombre_apellido = "ANONIMO";
    nacionalidad = "¿?";
    anio_nacimiento = -1;
    anio_fallecimiento = -1;
}

Lista<Escritor> Parser_escritores::parsear(){
    Lista<Escritor> lista_escritores;
    
    generar_anonimo();
    Escritor nuevo_escritor(id, nombre_apellido, nacionalidad, anio_nacimiento, anio_fallecimiento);
    lista_escritores.alta(nuevo_escritor, 0);
    
    string auxiliar;
    int i = 1;

    while(!archivo.eof()){
        archivo >> id;
        archivo >> nombre_apellido;
        archivo >> nacionalidad;
        
        archivo >> auxiliar;
        if(auxiliar != "\n"){
            anio_nacimiento = stoi(auxiliar);
            archivo >> auxiliar;
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
        
        Escritor escritor(id, nombre_apellido, nacionalidad, anio_nacimiento, anio_fallecimiento);
        lista_escritores.alta(escritor, i);
    }
    return lista_escritores;
}

Parser_escritores::~Parser_escritores(){
    archivo.close();
}