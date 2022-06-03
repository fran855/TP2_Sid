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

const string MSJ_CABECERA_MENU = "Bienvenido al club de lectura de Sid!\nIngresa a continuacion la opcion deseada:\n\n1. Agregar una lectura a la lista.\n2. Quitar una lectura de la lista.\n3. Agregar un escritor.\n4. Cambiar fecha de fallecimiento de un autor.\n5. Listar los escritores.\n6. Mostrar una lectura random!\n7. Mostrar todas las lecturas.\n8. Mostrar lecturas en un periodo de anios.\n9. Mostrar lecturas segun autor.\n10. Mostrar novelas segun genero.\n11. Generar una cola de lectura segun tiempo aproximado de lectura (menor a mayor).\n12. Salir del club de lectura.";
const string MSJ_INGRESAR_TIPO_LECTURA = "Ingrese N (Novela), C (Cuento) o P (Poeta):";
const string MSJ_INGRESAR_TITULO = "Ingrese el titulo de la obra:";
const string MSJ_INGRESAR_LIBRO = "Ingrese el libro:";
const string MSJ_INGRESAR_TEMA = "Ingrese el tema:";
const string MSJ_INGRESAR_VERSOS = "Ingrese la cantidad de versos:";
const string MSJ_INGRESAR_MINUTOS = "Ingrese los minutos estimados de lectura";
const string MSJ_INGRESAR_ANIO = "Ingrese el año de publicacion de la obra:";
const string MSJ_INRGESAR_INFO_LECTURA = "Ingrese la informacion correspondiente segun\nSi es novela, va el género\nSi es novela histórica, va el tema\nSi es cuento, va el título del libro en donde está publicado\nSi es un poema, va la cantidad de versos";
const string MSJ_INRGESAR_REFERENCIA_AUTOR = "Ingrese el nombre y apellido del autor correspondiente:";
const string MSJ_BAJA_LISTA = "Ingrese el nombre de la lectura que quiere quitar:";
const string MSJ_ESCRITOR_FALLECIMIENTO = "Inrgese el nombre y apellido del autor cuyo fallecimiento quiere actualizar:";
const string MSJ_ANIO_FALLECIMIENTO = "Inrgese el anio actualizado de fallecimiento:";
const string MSJ_INTERVALO_ANIOS = "Ingrese el intervalo de anios deseado:";
const string MSJ_LISTAR_LECTURAS_ESCRITOR = "Ingrese el nombre y apellido del escritor para ver sus obras:";
const string MSJ_INGRESAR_GENERO = "Ingrese el genero de las obras que quiere buscar:";
const string MSJ_MOSTRAR_COLA = "Se muestra el siguiente elemento de la cola:";
const string MSJ_HA_LEIDO = "¿Ha sido leida la obra? Ingresar 1 (verdadero) o 0 (falso)";
const string MSJ_INGRESAR_ID = "Ingrese el ID del escritor:";
const string MSJ_INGRESAR_NOMBRE = "Ingrese el nombre y apellido del escritor:";
const string MSJ_INGRESAR_NACIONALIDAD = "Ingrese la nacionalidad del escritor:";
const string MSJ_INGRESAR_NACIMIENTO = "Ingrese el año de nacimiento del escritor:";
const string MSJ_INGRESAR_FALLECIMIENTO = "Ingrese el año de fallecimiento del escritor:";
const string RAYITAS = "-----------------------------------------------------";

enum Opciones_menu {
    NUEVA_LECTURA = 1,
    QUITAR_LECTURA,
    AGREGAR_ESCRITOR,
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
    // PRE: INGRESAR UN NÚMERO
    void ejecutar_menu();

    Escritor* obtener_autor(Lista<Escritor>* lista_escritores);

    char* obtener_tema(string tema);

    void nueva_lectura();

    void quitar_lectura();

    void agregar_escritor();

    //PRE: autor válido (no puede ser anónimo)
    void cambiar_dato_escritor();

    void listar_escritores();

    void mostrar_lectura_random();

    void listar_lecturas_todas();

    void listar_lecturas_anios();

    void listar_lecturas_escritor();

    void listar_novelas_genero();

    //void crear_cola();

};

#endif