#ifndef LECTURA_H
#define LECTURA_H

#include <string>
#include "escritor.h"

using namespace std;

class Lectura {

protected:
    string titulo;
    unsigned int minutos;
    unsigned short int anio;
    Escritor* autor;

public:

    // Constructor
    // PRE: -
    // POS: realiza la carga de los datos al objeto Lectura. 
    //      - en caso de ser proveniente de un autor anonimo, autor = nullptr;
    Lectura(string titulo, unsigned int minutos, unsigned short int anio, Escritor* autor);

    // Destructor
    // PRE: -
    // POS: -
    virtual ~Lectura();

    // Comparar
    // PRE: -
    // POS:  devuelve – 1 si la lectura que llama es menor a la que se pasa por parámetro
    //       devuelve 1 si la que llama es mayor a la que se pasa por parámetro
    //       devuelve 0 si son iguales
    int comparar(Lectura* lectura);

    // Mostrar
    // PRE: - 
    // POS: muestra los atributos en pantalla
    void mostrar();

    // Obtener titulo
    // PRE: -
    // POS: devuelve un string con el titulo
    string obtener_titulo();

    // Obtener minutos
    // PRE: -
    // POS: devuelve un entero sin signo con los minutos de lectura
    unsigned int obtener_minutos();

    // Obtener anio
    // PRE: -
    // POS: devuelve un entero corto sin signo con el año de publicacion
    unsigned short int obtener_anio();

    // Obtener autor
    // PRE: -
    // POS: devulve un puntero a un objeto de tipo Escritor
    Escritor* obtener_autor();
};

#endif