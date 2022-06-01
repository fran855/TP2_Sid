#include "parser_escritores.h"
#include <fstream>
#include <iostream>
#include "escritor.h"
#include "lista.h"
#include <string>
#include <map>
#include <boost/assign/list_of.hpp> // for 'map_list_of()'
using namespace std;
using namespace boost::assign;
typedef enum genero {DRAMA, COMEDIA, FICCION, SUSPENSO, TERROR, ROMANTICA, HISTORICA} genero_t;





//int main(int argc, char * argv[]){
int main(){
/*if(argc < 3){
        cout << "¡Hola, Sid! Necesito más datos. Proba " << argv[0] << "<\"escritores.txt\"> <\"lecturas.txt\"" << endl;
        return 1;
    }*/
  /*
    Lista<Escritor> lista_escritores;    
    Parser_escritores parser(argv);
    lista_escritores = parser.parsear();
    lista_escritores.mostrar();
  */

  string a = "COMEDIA";
  cout << generomap[a] << endl;

  
  /*
    Lista<int> lista_lecturas;
    lista_lecturas.alta(0, 1);
    lista_lecturas.alta(1, 2);
    lista_lecturas.alta(2, 3);

    cout << "Cantidad de elementos: " << lista_lecturas.obtener_cantidad() << endl;


    while(lista_lecturas.obtener_cantidad() > 0){
        cout << "Borrando el elemento " << lista_lecturas.consulta(0) << endl;
        lista_lecturas.baja(1);
    }
    */

    return 0;

}