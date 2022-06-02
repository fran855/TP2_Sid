#include "menu.h"

Menu::Menu(Lista<Lectura>* lista_lecturas, Lista<Escritor>* listar_escritores){
    this->lista_lecturas = lista_lecturas;
    this->lista_escritores = listar_escritores;
}


/*
void Menu::ejecutar_menu(Lista<Lectura> &lista_lecturas, Lista<Escritor> &lista_escritores){
    do {
        cout << MSJ_CABECERA_MENU << endl;
        cin >> eleccion;

        switch (eleccion) {

        case NUEVA_LECTURA:
            nueva_lectura();
            break;

        case QUITAR_LECTURA:
            quitar_lectura();
            break;

        case QUITAR_ESCRITOR:
            quitar_escritor();
            break;

        case CAMBIAR_DATO_ESCRITOR:
            cambiar_dato_escritor();
            break;

        case LISTAR_ESCRITORES:
            listar_escritores();
            break;

        case LECTURA_RANDOM:
            mostrar_lectura_random();
            break;

        case LISTAR_LECTURAS_TODAS:
            listar_lecturas_todas();
            break;

        case LISTAR_LECTURAS_ANIOS:
            listar_lecturas_anios();
            break;

        case LISTAR_LECTURAS_ESCRITOR:
            listar_lecturas_escritor();
            break;

        case LISTAR_NOVELAS_GENERO:
            listar_novelas_genero();
            break;

        case CREAR_COLA:
            crear_cola();
            break;

        case SALIR:
            return;
        
        default: 
            break;
        }

    } while (eleccion != SALIR);
}

void Menu::nueva_lectura(){
    string titulo;
    unsigned int minutos;
    unsigned short int anio; 
    Escritor* autor;

    cout << MSJ_INGRESAR_TIPO_LECTURA << endl;
    //Ver parser de lectura
    cout << MSJ_INGRESAR_TITULO << endl;
    cin >> titulo;
    cout << MSJ_INGRESAR_MINUTOS << endl;
    cin >> minutos;
    cout << MSJ_INGRESAR_ANIO << endl;
    cin >> anio;
    cout << MSJ_INRGESAR_INFO_LECTURA << endl;
    //Ver parser de lectura
    cout << MSJ_INRGESAR_REFERENCIA_AUTOR << endl;

    Lectura nuevo(titulo, minutos, anio, autor);
    lista_lecturas.alta(nuevo);    
}

void Menu::quitar_lectura(){
    int posicion;
    cout << MSJ_BAJA_LISTA << endl;
    cin >> posicion;
    lista_lecturas.baja(posicion);
}

void Menu::quitar_escritor(){
    int posicion;
    cout << MSJ_BAJA_LISTA << endl;
    cin >> posicion;
    lista_escritores.baja(posicion);
}

void Menu::cambiar_dato_escritor(){
    int anio_fallecimiento_actualizado;
    int referencia;
    cout << MSJ_ESCRITOR_FALLECIMIENTO << endl;
    cin >> referencia;
    cout << MSJ_ANIO_FALLECIMIENTO << endl;
    cin >> anio_fallecimiento_actualizado;
    lista_escritores.consulta(referencia, 'c') -> obtener_dato('c') -> cambiar_fallecimiento(anio_fallecimiento_actualizado);
}

void Menu::listar_escritores(){
    lista_escritores.mostrar();
}

void Menu::mostrar_lectura_random(){
    //Implementar mostrar_random()
}

void Menu::listar_lecturas_todas(){
    lista_lecturas.mostrar();
}
*/
void Menu::listar_lecturas_anios(){
    int cota_inferior, cota_superior;
    cout << MSJ_INTERVALO_ANIOS << endl;
    cin >> cota_inferior;
    cin >> cota_superior;

    Nodo<Lectura>* primer_nodo = lista_lecturas -> obtener_nodo(1);
    
    while(primer_nodo -> obtener_dato() -> obtener_anio() < cota_inferior){
        primer_nodo = primer_nodo -> obtener_siguiente();
    }

    while(primer_nodo -> obtener_dato() -> obtener_anio() <= cota_superior){
        primer_nodo -> obtener_dato() -> mostrar();
        primer_nodo = primer_nodo -> obtener_siguiente();
    }

}

/*
void Menu::listar_lecturas_escritor(){
    int id;
    cout << MSJ_LISTAR_LECTURAS_ESCRITOR << endl;
    //Implementar mostrar(escritor) podemos recorrer la lista y mostrar los que tengan el mismo ID de escritor 
}

void Menu::listar_novelas_genero(){
    string aux;
    genero_t genero;
    cout << MSJ_INGRESAR_GENERO << endl;
    cin >> aux;
    genero.string_to_genero(aux);
    //Implementar mostrar(genero)
}

void Menu::crear_cola(){
    bool fue_leido;
    Cola<Lectura> la_cola;
            
    la_cola.encolar(&lista_lecturas);
    cout << MSJ_MOSTRAR_COLA << endl;
    la_cola.consulta();
    cout << MSJ_HA_LEIDO << endl;
    cin >> fue_leido;

    do {
        la_cola.baja();
        cout << MSJ_MOSTRAR_COLA << endl;
        la_cola.consulta();
        cout << MSJ_HA_LEIDO << endl;
        cin >> fue_leido;
    } while (fue_leido == true);
}
*/