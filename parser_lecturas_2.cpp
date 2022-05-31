#include "parser_lecturas_2.h"
using namespace std;

Parser_lectura::Parser_lectura(char* lecturas) {
  archivo_lectura.open(lecturas);
}

Escritor* Parser_lectura::obtener_autor(){
  getline(archivo_lectura, auxiliar);
  auxiliar.replace (0,  1, " ");
  int id = stoi(auxiliar);
  return consulta_direccion(id);
}

char* Parser_lectura::obtener_tema(string tema){
  char * copia = new char[tema.size() + 1];
  copy(tema.begin(), tema.end(), copia);
  copia[tema.size()] = '\0';
  return copia;
}

Lectura Parser_lectura:: procesar_datos(){
  Lectura lectura;

  getline(archivo_lectura, tipo_lectura);
  getline(archivo_lectura, titulo);    //titulo
  getline(archivo_lectura, auxiliar);  //minutos
  minutos = stoi(auxiliar);
  getline(archivo_lectura, auxiliar);  //anio
  anio = stoi(auxiliar);
  
  if (tipo_lectura == "C"){
    getline(archivo_lectura, libro);
    autor = obtener_autor();
    lectura = Cuento(titulo, minutos, anio, libro, autor);
  }
  else if (tipo_lectura == "N"){
    getline(archivo_lectura, auxiliar);
    genero = string_to_genero(auxiliar);
    getline(archivo_lectura, auxiliar);
    tema = obtener_tema(auxiliar);
    autor = obtener_autor();
    
    if (genero == HISTORICA){
      lectura = Novela_historica(titulo, minutos, anio, tema, autor);
    }

    lectura = Novela(titulo, minutos, anio, genero, autor);
  }
  else if (tipo_lectura == "P") {
        lectura = Poema(titulo, minutos, anio, versos, autor);
    }
  return lectura;
}

Lista<Lectura> Parser_lectura:: listar_lecturas(){
  Lista<Lectura> lista_lecturas;
  int contador = 0;
  
  while(!archivo_lectura.eof()){
    lista_lecturas.alta(procesar_datos(), ++contador);
    getline(archivo_lectura, auxiliar);
  }
  
}