#ifndef PARSER_ESCRITORES_H_INCLUDED
#define PARSER_ESCRITORES_H_INCLUDED

#include <fstream>
#include <string>
#include "escritor.h"
#include "lista.h"

using namespace std;

class Parser_escritores{
private:
    ifstream archivo;
    int id;
    string nombre_apellido;
    string nacionalidad;
    short int anio_nacimiento;
    short int anio_fallecimiento;

public:
    Parser_escritores(char ** argv);
    ~Parser_escritores();
    Lista<Escritor> parsear();

private:
    void generar_anonimo();

};


#endif