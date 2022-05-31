#include <string>
using namespace std;

typedef enum genero {DRAMA, COMEDIA, FICCION, SUSPENSO, 
TERROR, ROMANTICA, HISTORICA} genero_t;

//PRE: genero debe ser una sola palabra y estar dentro de las posibilidades que el enum
//POS: devuelve el genero_t asociado
genero_t string_to_genero(string genero);