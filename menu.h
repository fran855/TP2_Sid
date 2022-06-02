#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include "lista.h"
#include "escritor.h"
#include "lectura.h"
#include "novela.h"
#include "genero.h"

using namespace std;

const string MSJ_CABECERA_MENU = "Bienvenido al club de lectura de Sid!\nIngresa a continuacion la opcion deseada:";
const string MSJ_INGRESAR_TIPO_LECTURA = "Ingrese N (Novela), C (Cuento) o P (Poeta):";
const string MSJ_INGRESAR_TITULO = "Ingrese el titulo de la obra:";
const string MSJ_INGRESAR_MINUTOS = "Ingrese los minutos estimados de lectura";
const string MSJ_INGRESAR_ANIO = "Ingrese el anio de publicacion de la obra:";
const string MSJ_INRGESAR_INFO_LECTURA = "Ingrese la informacion correspondiente segun\nSi es novela, va el género\nSi es novela histórica, va el tema\nSi es cuento, va el título del libro en donde está publicado\nSi es un poema, va la cantidad de versos";
const string MSJ_INRGESAR_REFERENCIA_AUTOR = "Ingrese la referencia al autor correspondiente:";
const string MSJ_BAJA_LISTA = "Ingrese la posicion en la lista de la lectura que quiere quitar:";
const string MSJ_ESCRITOR_FALLECIMIENTO = "Inrgese el nuemero de referencia al autor cuyo fallecimiento quiere actualizar:";
const string MSJ_ANIO_FALLECIMIENTO = "Inrgese el anio actualizado de fallecimiento:";
const string MSJ_INTERVALO_ANIOS = "Ingrese el intervalo de anios deseado:";
const string MSJ_LISTAR_LECTURAS_ESCRITOR = "Ingrese el nombre y apellido del escritor para ver sus obras:";
const string MSJ_INGRESAR_GENERO = "Ingrese el genero de las obras que quiere buscar:";
const string MSJ_MOSTRAR_COLA = "Se muestra el siguiente elemento de la cola:";
const string MSJ_HA_LEIDO = "¿Ha sido leida la obra? Ingresar 1 (verdadero) o 0 (falso)";
 
enum Opciones_menu {
    NUEVA_LECTURA,
    QUITAR_LECTURA,
    QUITAR_ESCRITOR,
    CAMBIAR_DATO_ESCRITOR,
    LISTAR_ESCRITORES,
    LECTURA_RANDOM,
    LISTAR_LECTURAS_TODAS,
    LISTAR_LECTURAS_ANIOS,
    LISTAR_LECTURAS_ESCRITOR,
    LISTAR_NOVELAS_GENERO,
    CREAR_COLA,
    SALIR
};

class Menu {
private:
    int eleccion;
    Lista<Escritor>* lista_escritores;
    Lista<Lectura>* lista_lecturas;

public:
    // Constructor por defecto
    Menu(Lista<Lectura>* lista_lecturas, Lista<Escritor>* listar_escritores);

    // Destructor por defecto
    ~Menu(){};

    // Ejecuta el menu para que el usuario pueda ingresar la accion por realizar
    //void ejecutar_menu(Lista<Lectura> &lista_lecturas, Lista<Escritor> &lista_escritores);

    //void nueva_lectura();

    //void quitar_lectura();

    //void quitar_escritor();

    //void cambiar_dato_escritor();

    //void listar_escritores();

    //void mostrar_lectura_random();

    //void listar_lecturas_todas();

    void listar_lecturas_anios();

    void listar_lecturas_escritor();

    void listar_novelas_genero();

    //void crear_cola();

};

#endif