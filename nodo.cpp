#include "nodo.h"

Nodo::Nodo(Dato d){      //el nodo no es dinámico!! el valor sí
	dato = d;
	anterior = 0;
}

void Nodo::cambiar_anterior(Nodo* n){
	anterior = n;
}
	
Dato Nodo::obtener_dato(){
	return dato;
}

Nodo* Nodo::obtener_anterior(){
	return anterior;
}