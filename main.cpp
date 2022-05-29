#include <fstream>
#include <iostream>
#include "escritor.h"
#include "lista.h"
#include "parser_escritores.h"

using namespace std;

int main(int argc, char * argv[]){
    Parser_escritores parser(argv);
    parser.parsear().mostrar();
    return 0;

}