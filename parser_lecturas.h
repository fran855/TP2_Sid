#ifndef PARSER_LECTURAS_H
#define PARSER_LECTURAS_H

#include "lectura.h"
#include <fstream>
#include <string>

//typedef enum genero {DRAMA, COMEDIA, FICCION, SUSPENSO, TERROR, ROMANTICA, HISTORICA} genero_t;

class Parser_lectura {

public:
    //Constructor
    //PRE:
    //POS:
    Parser_lectura(char* lecturas);
    
    //Procesar datos
    //PRE:
    //POS:
    Lectura* procesar_datos() const;

    //Destructor
    //PRE:
    //POS:
    ~Parser_lectura();

private:
    ifstream archivo_lectura;
    char tipo_lectura;
    string auxiliar;
    
    //Lectura generico
    string titulo() const;
    unsigned int minutos() const;
    unsigned short int anio() const;
    Escritor* escritor() const;

    //Tipos
    string libro() const;
    unsigned int versos() const;
    //genero_t genero() const;

};


#endif 