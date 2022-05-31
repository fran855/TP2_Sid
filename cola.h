#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

#include "lectura.h"
#include "nodo.h"

using namespace std;

template <class Tipo> class Cola {
  // Atributos
private:
  Nodo<Tipo>* primero;
  Nodo<Tipo>* ultimo;

  // Metodos
public:
  // Constructor
  // PRE: -
  // POS: Construye una Cola vacía
  Cola();

  // Alta
  // PRE: elemento es un puntero valido
  // POS: agrega el elemento al final de la Cola
  void alta(Tipo* elemento);

  // Baja
  // PRE: la Pila no puede estar vacía -> necesito otro método
  // POS: quita el elemento del principio de la Cola [y  podría, por costumbre,
  // devolverlo]
  void baja();

  // Consulta
  // PRE: la Pila no puede estar vacía
  // POS: muestra los datos del elemento al principio de la Cola (pero no modifica)
  void consulta();

  // Vacía
  // PRE: -
  // POS: devuelve true si la Cola está vacía, false de lo contrario
  bool vacia();

  // Destructor
  ~Cola();
};

// Constructor
template <class Tipo>
Cola<Tipo>::Cola(){
  primero = nullptr;
  ultimo = nullptr;
}

// Alta
template <class Tipo>
void Cola<Tipo>::alta(Tipo* elemento){
	Nodo<Tipo>* nuevo = new Nodo<Tipo>(elemento);
	if (primero)
    ultimo -> cambiar_siguiente(nuevo);
  else 
    primero = nuevo;
  ultimo = nuevo;
}

// Baja
template <class Tipo>
void Cola<Tipo>::baja(){
  /* Implementacion de andy que esta mal
	Nodo<Tipo>* borrar = ultimo;
	primero = primero -> obtener_siguiente();
  if (!primero)
    ultimo = nullptr;
	delete borrar;
  */
  Nodo<Tipo>* borrar = primero;
  primero = primero -> obtener_siguiente();
  if (ultimo -> obtener_siguiente()){
    ultimo = ultimo -> obtener_siguiente();
  };
  delete borrar;
  
}

// Consulta
template <class Tipo>
void Cola<Tipo>::consulta(){
  primero -> obtener_dato() -> mostrar();
}

// Vacia
template <class Tipo>
bool Cola<Tipo>::vacia(){
  return primero == nullptr;
}

// Destructor
template <class Tipo>
Cola<Tipo>::~Cola(){
  while(!vacia())
    baja();
}

#endif