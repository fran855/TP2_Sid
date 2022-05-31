#ifndef PARSER_LECTURAS_2_H
#define PARSER_LECTURAS_2_H

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
    Parser_lectura(char* lecturas);
    
    //Procesar datos
    //PRE:
    //POS:
    Lectura procesar_datos();

    //Destructor
    //PRE:
    //POS:
    ~Parser_lectura();

    //Lista
    //PRE:
    //POS:
    Lista<Lectura> listar_lecturas();

private:
    ifstream archivo_lectura;
    string tipo_lectura;
    string auxiliar;

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

    Escritor* obtener_autor();
    char* obtener_tema(string tema);
};

#endif