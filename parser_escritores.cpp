#include "parser_escritores.h"
#include "escritor.h"

Parser_escritores::Parser_escritores(char ** argv){
    archivo.open(argv[1]);
}

Lista<Escritor> Parser_escritores::parsear(){
    Lista<Escritor> lista_escritores;
    
    string auxiliar;

    int i = 0;
    id = 0;
    nombre_apellido = "ANONIMO";
    nacionalidad = "¿?";
    anio_nacimiento = -1;
    anio_fallecimiento = -1;

    Escritor nuevo_escritor(id, nombre_apellido, nacionalidad, anio_nacimiento, anio_fallecimiento);
    lista_escritores.alta(nuevo_escritor, i++);

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
    
    archivo.close();
    return lista_escritores;
}