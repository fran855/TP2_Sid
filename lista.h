#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"

class Lista{
private:
	Nodo* primero;   //me alcanza con un puntero al primero solamente
	int cantidad;

public:
	//Constructor
	//PRE: -
	//POS: Construye una Lista vacía
	Lista();

	//Alta                                                      [tomamos 1 como el inicio]
	//PRE: e es un Dato valido y 1 <= pos <= obtener_cantidad + 1
	//POS: agrega el elemento en la posición pos (se empieza por 1)
	void alta(Dato e);

	//Baja
	//PRE: 1 <= pos <= obtener_cantidad()
	//POS: da de baja al elemento que está en pos (se empieza por 1)
	void baja(int pos);
	
	//Consulta
	//PRE: 1 <= pos <= obtener_cantidad()
	//POS: devuelve el elemento que está en pos (se empieza por 1)
	Dato consulta(int pos);
	

	//Vacía
	//PRE: -
	//POS: devuelve true si la Lista está vacía, false de lo contrario
	bool vacia();

	//Destructor
	~Lista();


private:
	
	Nodo* obtener_nodo(int pos);

};

#endif