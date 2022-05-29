#include <fstream>
#include <iostream>
#include "escritor.h"
#include "lista.h"

using namespace std;

int main(int argc, char * argv[]){
    Lista<Escritor> lista;
    Escritor prueba(1, "Jorge Luis Borges", "Argentina", 1899, 1942);

    lista.alta(prueba, 1);
    lista.mostrar();

    return 0;

}