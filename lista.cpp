#include "lista.h"

//Constructor
Lista::Lista(){
	primero = 0;
	cantidad = 0;
}

//Obtener_nodo (privada)
Nodo* Lista::obtener_nodo(int pos){
	Nodo* aux = primero;
	int contador = 1;
	
	while(contador < pos){
		aux = aux -> obtener_siguiente();
		contador++
	}

	return aux;
}


//Alta
void Lista::alta(Dato e, int pos){
	Nodo* nuevo = new Nodo(e);
	if(pos == 1){
		nuevo -> cambiar_siguiente(primero);
		primero = nuevo;
	}
	else{
		//tengo un dato que quiero agregar entre dos nodos -> busco la posicion (menos uno porque tengo que configurar el puntero así me guardo el anterior), mi nuevo dato apunta al siguiente del anterior y ese anterior ahora tiene que apuntar al nuevo dato
		Nodo* anterior = obtener_nodo(pos - 1);
		nuevo -> cambiar_siguiente(anterior -> obtener_siguiente());
		anterior -> cambiar_siguiente(nuevo);
	}
	cantidad++;
}

//Baja
void Lista::baja(int pos){
	Nodo* borrar = primero;
	if(pos == 1){
		primero = primero -> obtener_siguiente();
	}
	else{
		//busco la posición que quiero borrar (el anterior), guardo su siguiente (el que quiero borrar) y hago que ese anterior lo saltee (apunta al siguiente del siguiente, es decir, al siguiente de borrar)
		Nodo* anterior = obtener_nodo(pos - 1);
		borrar = anterior -> obtener_siguiente();
		anterior -> cambiar_siguiente(borrar -> obtener_siguiente());
	}
	cantidad--;	
	delete borrar;
}


//Consulta
Dato Lista::consulta(int pos){
	Nodo* aux = primero;
	int contador = 1;
	while(contador < pos){
			aux = aux -> obtener_siguiente();
			contador++;
	}
	return aux -> obtener_dato();
}

//Vacia
bool Lista::vacia(){
	return (cantidad == 0);
}

//Obtener_cantidad
int Lista::obtener_cantidad(){
	return cantidad;
}

//Destructor
Lista::~Lista(){
	while(! vacia())
		baja(1);
	
}