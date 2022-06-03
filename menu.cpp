#include "menu.h"
#include <ctime>
#include "funciones.h"

Menu::Menu(Lista<Lectura> *lista_lecturas, Lista<Escritor> *listar_escritores)
{
    this->lista_lecturas = lista_lecturas;
    this->lista_escritores = listar_escritores;

    srand(time(NULL)); // Inicializar semilla
}

void Menu::ejecutar_menu(){
    string auxiliar;
    do {
        cout << MSJ_CABECERA_MENU << endl;
        cin >> eleccion;
        cout << endl;
        getline(cin, auxiliar, '\n');   // Limpiar buffer
        cout << RAYITAS << endl;

        switch (eleccion) {

        case NUEVA_LECTURA:
            //nueva_lectura();
            cout << RAYITAS << endl;
            cout << endl;
            break;

        case QUITAR_LECTURA:
            quitar_lectura();
            cout << RAYITAS << endl;
            cout << endl;
            break;

        case AGREGAR_ESCRITOR:
            agregar_escritor();
            cout << RAYITAS << endl;
            cout << endl;
            break;

        case CAMBIAR_DATO_ESCRITOR:
            cambiar_dato_escritor();
            cout << RAYITAS << endl;
            cout << endl;
            break;

        case LISTAR_ESCRITORES:
            listar_escritores();
            cout << RAYITAS << endl;
            cout << endl;
            break;

        case LECTURA_RANDOM:
            mostrar_lectura_random();
            cout << RAYITAS << endl;
            cout << endl;
            break;

        case LISTAR_LECTURAS_TODAS:
            listar_lecturas_todas();
            cout << RAYITAS << endl;
            cout << endl;
            break;

        case LISTAR_LECTURAS_ANIOS:
            //listar_lecturas_anios();
            cout << RAYITAS << endl;
            cout << endl;
            break;

        case LISTAR_LECTURAS_ESCRITOR:
            listar_lecturas_escritor();
            cout << RAYITAS << endl;
            cout << endl;
            break;

        case LISTAR_NOVELAS_GENERO:
            listar_novelas_genero();
            cout << RAYITAS << endl;
            cout << endl;
            break;

        case CREAR_COLA:
            //crear_cola();
            cout << RAYITAS << endl;
            cout << endl;
            break;

        case SALIR:
            return;

        default:
            break;
        }

    } while (eleccion != SALIR);
}

/*
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
*/

void Menu::quitar_lectura(){
    string referencia;
    cout << MSJ_BAJA_LISTA << endl;
    getline(cin, referencia, '\n');
    int posicion = 1;
    Nodo<Lectura>* nodo_lectura = lista_lecturas -> obtener_nodo(1);
    
    while (nodo_lectura -> obtener_siguiente() != NULL && nodo_lectura -> obtener_dato() -> obtener_titulo() != referencia){
        nodo_lectura = nodo_lectura -> obtener_siguiente();
        posicion++;
    }

    lista_lecturas -> baja(posicion);
}

void Menu::agregar_escritor(){
    int ultimo_id = lista_escritores -> obtener_cantidad();
    string auxiliar, nombre_apellido, nacionalidad;
    int anio_nacimiento, anio_fallecimiento;

    cout << MSJ_INGRESAR_NOMBRE << endl;
    getline(cin, nombre_apellido, '\n');
    cout << MSJ_INGRESAR_NACIONALIDAD << endl;
    getline(cin, nacionalidad, '\n');
    cout << MSJ_INGRESAR_FECHA_NACIMIENTO << endl;
    cin >> anio_nacimiento;
    cout << MSJ_INGRESAR_FECHA_FALLECIMIENTO << endl;
    cin >> anio_fallecimiento;

    Escritor* nuevo_escritor = new Escritor(ultimo_id + 1, nombre_apellido, nacionalidad, anio_nacimiento, anio_fallecimiento);    
    lista_escritores -> alta(nuevo_escritor, ultimo_id + 1);
}

void Menu::cambiar_dato_escritor(){
    int anio_fallecimiento_actualizado;
    string referencia;
    cout << MSJ_ESCRITOR_FALLECIMIENTO << endl;
    getline(cin, referencia, '\n');
    cout << MSJ_ANIO_FALLECIMIENTO << endl;
    cin >> anio_fallecimiento_actualizado;
    Nodo<Escritor> *nodo_escritor = lista_escritores->obtener_nodo(1);

    while (nodo_escritor->obtener_siguiente() != NULL){
        if (nodo_escritor -> obtener_dato() -> obtener_nombre_apellido() == referencia){
            nodo_escritor -> obtener_dato() -> cambiar_fallecimiento(anio_fallecimiento_actualizado);
        }
        nodo_escritor = nodo_escritor -> obtener_siguiente();
    }
}

void Menu::listar_escritores()
{
    lista_escritores->mostrar();
}

void Menu::mostrar_lectura_random()
{
    int maximo = lista_lecturas->obtener_cantidad();
    int posicion = rand() % maximo + 1;
    lista_lecturas->consulta(posicion)->mostrar();
}

void Menu::listar_lecturas_todas()
{
    lista_lecturas->mostrar();
}

/*
(ya esta)
void Menu::listar_lecturas_anios()
{
    int cota_inferior, cota_superior;
    cout << MSJ_INTERVALO_ANIOS << endl;
    cin >> cota_inferior;
    cin >> cota_superior;

    Nodo<Lectura> *primer_nodo = lista_lecturas->obtener_nodo(1);

    while (primer_nodo->obtener_dato()->obtener_anio() < cota_inferior)
    {
        primer_nodo = primer_nodo->obtener_siguiente();
    }

    while (primer_nodo->obtener_dato()->obtener_anio() <= cota_superior)
    {
        primer_nodo->obtener_dato()->mostrar();
        primer_nodo = primer_nodo->obtener_siguiente();
    }
}
*/
void Menu::listar_lecturas_escritor()
{
    string nombre_apellido;
    cout << MSJ_LISTAR_LECTURAS_ESCRITOR << endl;
    getline(cin, nombre_apellido, '\n');
    cout << endl;
    Nodo<Lectura> *nodo_actual = lista_lecturas->obtener_nodo(1);

    if (son_iguales(nombre_apellido, "ANONIMO"))
    {
        while (nodo_actual->obtener_siguiente() != NULL)
        {
            if (nodo_actual->obtener_dato()->obtener_autor() == NULL)
            {
                nodo_actual->obtener_dato()->mostrar();
            }
            nodo_actual = nodo_actual->obtener_siguiente();
        }
    }
    else
    {
        while (nodo_actual->obtener_siguiente() != NULL)
        {
            if (nodo_actual->obtener_dato()->obtener_autor() != NULL)
            {
                if (son_iguales(nodo_actual->obtener_dato()->obtener_autor()->obtener_nombre_apellido(), nombre_apellido))
                {
                    nodo_actual->obtener_dato()->mostrar();
                    cout << endl;
                }
            }
            nodo_actual = nodo_actual->obtener_siguiente();
        }
    }
}

//REVISAR QUE PASA SI NO HAY COINCIDENCIAS
void Menu::listar_novelas_genero(){
    string aux;
    cout << MSJ_INGRESAR_GENERO << endl;
    cin >> aux;
    genero_t genero = string_to_genero(aux);

    Nodo<Lectura>* nodo_actual = lista_lecturas -> obtener_nodo(1);

    while(nodo_actual -> obtener_siguiente() != NULL){
        nodo_actual -> obtener_dato() -> mostrar_si_genero(genero);
        nodo_actual = nodo_actual -> obtener_siguiente();
    }
}

/*
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