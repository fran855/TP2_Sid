#ifndef NODO_TEMPLATE_INCLUDED
#define NODO_TEMPLATE_INCLUDED

template <class Tipo>

class Nodo{
private:
	Tipo dato;
	Nodo* anterior;             

public:
	//Constructor
	//PRE: -
	//POS: construye un nodo con d como dato y anterior en nullptr
	Nodo(Tipo d);

	//PRE: n es un puntero válido
	//POS: cambia el puntero anterior por n
	void cambiar_anterior(Nodo* n);

	
	Tipo obtener_dato();

	Nodo* obtener_anterior();
};

template <class Tipo>
Nodo<Tipo>::Nodo(Tipo d){
    dato = d;
    anterior = nullptr;
}

template <class Tipo>
void Nodo<Tipo>::cambiar_anterior(Nodo* n){
	anterior = n;
}

template <class Tipo>
Tipo Nodo<Tipo>::obtener_dato(){
	return dato;
}

template <class Tipo>
Nodo<Tipo>* Nodo<Tipo>::obtener_anterior(){
	return anterior;
}

#endif