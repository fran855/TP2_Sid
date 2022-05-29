#include "parser_escritores.h"
#include <fstream>
#include <iostream>
#include "escritor.h"
#include "lista.h"

using namespace std;

int main(int argc, char * argv[]){
    Escritor prueba(1, "Juan Perez", "Argentina", 1980, 1990);
    prueba.mostrar();
    cout << "---------------------------" << endl;
    cout << "ID: " << prueba.obtener_id() << endl;
    cout << "Nombre y apellido: "<<prueba.obtener_nombre_apellido() << endl;
    cout << "Nacionalidad: " << prueba.obtener_nacionalidad() << endl;
    cout << "Año de nacimiento: " << prueba.obtener_anio_nacimiento() << endl;
    cout << "Año de fallecimiento: " << prueba.obtener_anio_fallecimiento() << endl;
    cout << "Cambiando el año de fallecimiento a 1990" << endl;
    prueba.cambiar_fallecimiento(1990);
    cout << "Año de fallecimiento: " << prueba.obtener_anio_fallecimiento() << endl;

    return 0;

}