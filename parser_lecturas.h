#ifndef PARSER_LECTURAS_H
#define PARSER_LECTURAS_H

#include "lectura.h"
#include "lista.h"
#include "escritor.h"
#include "novela.h"
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
    
    //Titulo
    //PRE:
    //POS:
    string titulo();

    //Minutos
    //PRE:
    //POS:
    unsigned int minutos();
    
    //Anio
    //PRE:
    //POS:
    unsigned short int anio();

    //Autor
    //PRE:
    //POS:
    Nodo<Escritor>* autor();

    //Tipos de lectura

    //Libro
    //PRE:
    //POS:
    string libro();

    //Versos
    //PRE:
    //POS:
    unsigned int versos();

    //Genero
    //PRE:
    //POS:
    genero_t genero();
};


#endif 