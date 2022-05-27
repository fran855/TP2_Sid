#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

#include "lectura.h"

typedef Lectura Dato;

class Nodo{
private:
	Dato dato;
	Nodo* anterior;             //C++ permite hacer esto

public:
	//Constructor
	//PRE: -
	//POS: construye un nodo con d como dato y anterior en nullptr
	Nodo(Dato d);

	//PRE: n es un puntero válido
	//POS: cambia el puntero anterior por n
	void cambiar_anterior(Nodo* n);

	//etc.
	Dato obtener_dato();

	Nodo* obtener_anterior();
};

#endif