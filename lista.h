#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"

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
	void alta(Tipo e, int pos);

	//Baja
	//PRE: 1 <= pos <= obtener_cantidad()
	//POS: da de baja al elemento que está en pos (se empieza por 1)
	void baja(int pos);
	
	//Consulta
	//PRE: 1 <= pos <= obtener_cantidad()
	//POS: devuelve el elemento que está en pos (se empieza por 1)
	Tipo consulta(int pos);

    //Obtener_cantidad
    //PRE: -
    //POS: devuelve la cantidad de elementos de la lista
    int obtener_cantidad();

	//Vacía
	//PRE: -
	//POS: devuelve true si la Lista está vacía, false de lo contrario
	bool vacia();

	//Destructor
	~Lista();


//private:
	
	Nodo<Tipo>* obtener_nodo(int pos);

};

#endif