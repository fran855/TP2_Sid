#ifndef NODO2_TEMPLATE_INCLUDED
#define NODO2_TEMPLATE_INCLUDED

template <class Tipo>

class Nodo{
private:
	Tipo* dato;
	Nodo* siguiente;             

public:
	//Constructor
	//PRE: -
	//POS: construye un nodo con d como dato y siguiente en nullptr
	Nodo(Tipo* d);

	//PRE: n es un puntero válido
	//POS: cambia el puntero siguiente por n
	void cambiar_siguiente(Nodo<Tipo>* n);
	
	Tipo obtener_dato();

	Tipo* obtener_dato(char m);

	Nodo<Tipo>* obtener_siguiente();

	void operator=(Nodo nodo_2);

};

template <class Tipo>
Nodo<Tipo>::Nodo(Tipo* d){
    dato = d;
    siguiente = nullptr;
}

template <class Tipo>
void Nodo<Tipo>::cambiar_siguiente(Nodo<Tipo>* n){
	siguiente = n;
}

template <class Tipo>
Tipo* Nodo<Tipo>::obtener_dato(){
	return dato;
}

template <class Tipo>
Tipo* Nodo<Tipo>::obtener_dato(char m){
	return &dato;
}

template <class Tipo>
Nodo<Tipo>* Nodo<Tipo>::obtener_siguiente(){
	return siguiente;
}

template <class Tipo>
void Nodo<Tipo>::operator=(Nodo nodo_2){
	this -> dato = nodo_2.dato;
	this -> siguiente = nodo_2.siguiente;
};


#endif