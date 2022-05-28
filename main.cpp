#include <iostream>
#include "lista.h"
#include "lectura.h"

using namespace std;

int main(int argc, char * argv[]){
    /*if(argc < 3){
        cout << "¡Hola, Sid! Necesito más datos. Proba " << argv[0] << "<\"escritores.txt\"> <\"lecturas.txt\"" << endl;
        return 1;
    }*/

    Lista<int> lista_lecturas;
    lista_lecturas.alta(0, 1);
    lista_lecturas.alta(1, 2);
    lista_lecturas.alta(2, 3);

    cout << "Cantidad de elementos: " << lista_lecturas.obtener_cantidad() << endl;


    while(lista_lecturas.obtener_cantidad() > 0){
        cout << "Borrando el elemento " << lista_lecturas.consulta(0) << endl;
        lista_lecturas.baja(1);
    }
    
    return 0;

}