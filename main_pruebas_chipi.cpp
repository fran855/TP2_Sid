#include <iostream>
#include "cola.h"
#include "nodo.h"
#include "escritor.h"

using namespace std;

int main(int argc, char const *argv[]) {
    
    Lectura el_alquimista("El alquimista", 260, 1986, nullptr);
    Lectura dr_jekyll("El extraño caso de Dr. Jekyll y Mr. Hyde", 12, 1905, nullptr);

    el_alquimista.mostrar();
    cout << endl;

    dr_jekyll.mostrar();
    cout << endl;

    Cola<Lectura> cola;
    cout << "Se crea la cola con 1 solo elemento" << endl;
    cola.alta(&el_alquimista);
    cola.consulta();
    cout << endl;

    cout << "Se añade un elemento a la cola" << endl;
    cola.alta(&dr_jekyll);
    cola.consulta();
    cout << endl;

    cout << "Se da de baja un elemnto" << endl;
    cola.baja();
    cout << "Llega a hacer la baja" << endl;
    cola.consulta();
    cout << "Llega a hacer la consulta" << endl;
    cout << endl;

    cout << "Se hace otra baja" << endl;
    cola.baja();

    return 0;
}
