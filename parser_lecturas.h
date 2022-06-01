#ifndef PARSER_LECTURAS_H
#define PARSER_LECTURAS_H

#include "lectura.h"
#include "lista.h"
#include "escritor.h"
#include "novela_historica.h"
#include "cuento.h"
#include "poema.h"
#include <fstream>
#include <string>


class Parser_lectura {

public:
    //Constructor
    //PRE:
    //POS:
    Parser_lectura(char** argv);
    
    //Procesar datos
    //PRE:
    //POS:
    void procesar_datos(Lista<Escritor>* lista_escritores, Lista<Lectura>* lista_lecturas);

    //Destructor
    //PRE:
    //POS:
    ~Parser_lectura(){};

/*
    //Lista
    //PRE:
    //POS:
    Lista<Lectura> listar_lecturas(Lista<Escritor>* lista_escritores);
*/
    string auxiliar;
    Escritor* obtener_autor(Lista<Escritor>* lista_escritores);
    ifstream archivo_lectura;
private:
    string tipo_lectura;

    //Lectura generico
    
    string titulo;
    unsigned int minutos;
    unsigned short int anio;
    Escritor* autor;

    //Especificos
    char* tema;
    string libro;
    unsigned int versos;
    genero_t genero;

    char* obtener_tema(string tema);
};

#endif