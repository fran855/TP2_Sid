#ifndef NODO_TEMPLATE_INCLUDED
#define NODO_TEMPLATE_INCLUDED

#include <iostream>
#include "escritor.h"
template <class Tipo>

class Nodo{
private:
	Tipo dato;
	Nodo* siguiente;             

public:
	void operator=(Nodo<Tipo> nodo2);
	//Constructor
	//PRE: -
	//POS: construye un nodo con d como dato y siguiente en nullptr
	Nodo(Tipo d);

	//PRE: n es un puntero válido
	//POS: cambia el puntero siguiente por n
	void cambiar_siguiente(Nodo* n);
	
	Tipo obtener_dato();

	Nodo* obtener_siguiente();

	~Nodo();
};

template <class Tipo>
Nodo<Tipo>::Nodo(Tipo d){
    dato = d;
    siguiente = nullptr;
}

template <class Tipo>
void Nodo<Tipo>::cambiar_siguiente(Nodo* n){
	siguiente = n;
}

template <class Tipo>
Tipo Nodo<Tipo>::obtener_dato(){
	return dato;
}

template <class Tipo>
Nodo<Tipo>* Nodo<Tipo>::obtener_siguiente(){
	return siguiente;
}

//Destructor
template <class Tipo>
Nodo<Tipo>::~Nodo<Tipo>(){
}

template <class Tipo>
void Nodo<Tipo>::operator=(Nodo<Tipo> nodo2){
	this -> dato = nodo2.dato;
	this -> siguiente = nodo2.siguiente;
}
#endif