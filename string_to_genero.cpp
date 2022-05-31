#include "string_to_genero.h"

// typedef enum genero {DRAMA, COMEDIA, FICCION, SUSPENSO, TERROR, ROMANTICA, HISTORICA} genero_t;

genero_t string_to_genero(string genero){
  if (genero == "DRAMA")
    return DRAMA;
  else if (genero == "COMEDIA")
    return COMEDIA;
  else if (genero == "FICCION")
    return FICCION;
  else if (genero == "SUSPENSO")
    return SUSPENSO;
  else if (genero == "TERROR")
    return TERROR;
  else if (genero == "ROMANTICA")
    return ROMANTICA;
  else if (genero == "HISTORICA")
    return HISTORICA;
}