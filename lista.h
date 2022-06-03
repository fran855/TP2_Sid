#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"
#include "lectura.h"

using namespace std;

template <class Tipo>
class Lista{
private:
	Nodo<Tipo>* primero;   //me alcanza con un puntero al primero solamente
	int cantidad;

public:
	//Constructor
	//PRE: -
	//POS: Construye una Lista vacía
	Lista();

	//Alta                                                      [tomamos 1 como el inicio]
	//PRE: e es un Tipo valido y 1 <= pos <= obtener_cantidad + 1
	//POS: agrega el elemento en la posición pos (se empieza por 1)
	void alta(Tipo* elemento, int pos);

	//Baja
	//PRE: 1 <= pos <= obtener_cantidad()
	//POS: da de baja al elemento que está en pos (se empieza por 1)
	void baja(int pos);
	
	//Consulta
	//PRE: 1 <= pos <= obtener_cantidad()
	//POS: devuelve el elemento que está en pos (se empieza por 1)
	Tipo* consulta(int pos);

	//Consulta
	//PRE: 1 <= pos <= obtener_cantidad()
	//POS: devuelve el elemento que está en pos (se empieza por 1)
	Tipo* consulta(int pos, char m);
	
	//Mostrar
	//PRE: -
	//POS: muestra por pantalla los elementos de la lista
	void mostrar();

    //Obtener_cantidad
    //PRE: -
    //POS: devuelve la cantidad de elementos de la lista
    int obtener_cantidad();

	//Vacía
	//PRE: -
	//POS: devuelve true si la Lista está vacía, false de lo contrario
	bool vacia();

	// Sobrecarga del operador =
	void operator=(Lista<Tipo> lista2);

	// Encuentra el nodo con el menor tiempo de lectura
	// PRE: minimo_anterior tiene que ser un puntero valido.
	// POS: Devuelve un puntero al nodo del menor elemento.
	Nodo<Tipo>* encontrar_minimo(Nodo<Tipo>* minimo_anterior, unsigned int minutos_anterior);


	//Destructor
	~Lista();


//private:
	
	Nodo<Tipo>* obtener_nodo(int pos);

};

//Constructor
template <class Tipo>
Lista<Tipo>::Lista(){
	primero = 0;
	cantidad = 0;
}

//Obtener_nodo (privada)
template <class Tipo>
Nodo<Tipo>* Lista<Tipo>::obtener_nodo(int pos){
	Nodo<Tipo>* aux = primero;
	int contador = 1;
	
	while(contador < pos){
		aux = aux -> obtener_siguiente();
		contador++;
	}

	return aux;
}


//Alta
template <class Tipo>
void Lista<Tipo>::alta(Tipo* elemento, int pos){
	Nodo<Tipo>* nuevo = new Nodo<Tipo>(elemento);
	if(pos == 1){
		nuevo -> cambiar_siguiente(primero);
		primero = nuevo;
	}
	else{
		//tengo un dato que quiero agregar entre dos nodos -> busco la posicion (menos uno porque tengo que configurar el puntero así me guardo el anterior), mi nuevo dato apunta al siguiente del anterior y ese anterior ahora tiene que apuntar al nuevo dato
		Nodo<Tipo>* anterior = obtener_nodo(pos - 1);
		nuevo -> cambiar_siguiente(anterior -> obtener_siguiente());
		anterior -> cambiar_siguiente(nuevo);
	}
	cantidad++;
}

//Baja
template <class Tipo>
void Lista<Tipo>::baja(int pos){
	Nodo<Tipo>* borrar = primero;
	if(pos == 1){
		primero = primero -> obtener_siguiente();
	}
	else{
		//busco la posición que quiero borrar (el anterior), guardo su siguiente (el que quiero borrar) y hago que ese anterior lo saltee (apunta al siguiente del siguiente, es decir, al siguiente de borrar)
		Nodo<Tipo>* anterior = obtener_nodo(pos - 1);
		borrar = anterior -> obtener_siguiente();
		anterior -> cambiar_siguiente(borrar -> obtener_siguiente());
	}
	cantidad--;	
	delete borrar;
}


//Consulta
template <class Tipo>
Tipo* Lista<Tipo>::consulta(int pos){
	Nodo<Tipo>* aux = primero;
	int contador = 1;
	while(contador < pos){
			aux = aux -> obtener_siguiente();
			contador++;
	}
	return aux -> obtener_dato();
}

//Consulta
template <class Tipo>
Tipo* Lista<Tipo>::consulta(int pos, char m){
	Nodo<Tipo>* aux = primero;
	int contador = 1;
	while(contador < pos){
			aux = aux -> obtener_siguiente();
			contador++;
	}
	return &(aux -> obtener_dato());
}

//Vacia
template <class Tipo>
bool Lista<Tipo>::vacia(){
	return (cantidad == 0);
}

//Obtener_cantidad
template <class Tipo>
int Lista<Tipo>::obtener_cantidad(){
	return cantidad;
}

//mostrar
template <class Tipo>
void Lista<Tipo>::mostrar(){
	Nodo<Tipo>* aux = primero;
	while(aux -> obtener_siguiente() != 0){
		aux -> obtener_dato() -> mostrar();
		aux = aux -> obtener_siguiente();
		cout << endl;
	}

	aux -> obtener_dato() -> mostrar();
	aux = aux -> obtener_siguiente();

}


//Destructor
template <class Tipo>
Lista<Tipo>::~Lista<Tipo>(){
	while(! vacia())
		baja(1);
}

template <class Tipo>
void Lista<Tipo>::operator=(Lista<Tipo> lista2){
	this -> primero = lista2.primero;
	this -> cantidad = cantidad;
};

template <class Tipo>
Nodo<Tipo>* Lista<Tipo>::encontrar_minimo(Nodo<Tipo>* minimo_anterior, unsigned int minutos_anterior){

	Nodo<Tipo>* cursor = primero;
	Nodo<Tipo>* cursor_siguiente = cursor -> obtener_siguiente();
	Nodo<Tipo>* minimo = primero;
	
	while (cursor_siguiente != nullptr) {

		int es_menor = (cursor -> obtener_dato()) -> comparar(cursor_siguiente -> obtener_dato(), 'm');
		int es_menor_que_minimo = (cursor -> obtener_dato()) -> comparar(minimo -> obtener_dato(), 'm');
		// if (minimo != nullptr) // Caso donde es la primera vez que recorre 
		// 	(cursor -> obtener_dato()) -> comparar(minimo -> obtener_dato(), 'm');

		if (es_menor == 1 && es_menor_que_minimo == 1)	// Caso donde es el menor de los dos, y es menor que el minimo
			minimo = cursor;

		// Avanza al siguiente elemento de la lista
		cursor = cursor_siguiente;
		cursor_siguiente = cursor -> obtener_siguiente();
	}

	/* if (minimo_anterior == nullptr)
		minimo_anterior = primero;

	Nodo<Tipo>* cursor = primero;
	Nodo<Tipo>* cursor_siguiente = cursor -> obtener_siguiente();
	Nodo<Tipo>* minimo = primero;


	while (cursor_siguiente != nullptr) {
		int es_menor = (cursor -> obtener_dato()) -> comparar(cursor_siguiente -> obtener_dato(), 'm');

		// if (es_menor == -1 && (cursor != minimo_anterior) && (cursor -> obtener_dato() -> obtener_minutos() >= minutos_anterior)){
		// 	minimo = cursor;
		// }

		if (minimo == nullptr && es_menor == -1){
			minimo = cursor;
		}
		

		if (es_menor == -1 && (cursor -> obtener_dato()) -> comparar(minimo -> obtener_dato(), 'c') == 1){
			minimo = cursor;
		}
	
		// Avanza al siguiente elemento de la lista
		cursor = cursor_siguiente;
		cursor_siguiente = cursor -> obtener_siguiente();
	};

	if (minimo == nullptr){
		minimo = cursor;
	} */
	
	return minimo;
}


#endif