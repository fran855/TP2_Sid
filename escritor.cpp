#include <iostream>
#include "escritor.h"

Escritor::Escritor(int id, string nombre_apellido, string nacionalidad, short int anio_nacimiento, short int anio_fallecimiento){
    this -> ID = id;
    this -> nombre_apellido = nombre_apellido;
    this -> nacionalidad = nacionalidad;
    this -> anio_nacimiento = anio_nacimiento;
    this -> anio_fallecimiento = anio_fallecimiento;
}

void Escritor::mostrar(){
    cout << "Nombre y apellido: "<<nombre_apellido << endl;
    cout << "Nacionalidad: " << nacionalidad << endl;
    cout << "Año de nacimiento: " << anio_nacimiento << endl;
    cout << "Año de fallecimiento: " << anio_fallecimiento << endl;
}

int Escritor::obtener_ID(){
    return ID;
}

string Escritor::obtener_nombre_apellido(){
    return nombre_apellido;
}

string Escritor::obtener_nacionalidad(){
    return nacionalidad;
}

short int Escritor::obtener_anio_nacimiento(){
    return anio_nacimiento;
}

short int Escritor::obtener_anio_fallecimiento(){
    return anio_fallecimiento;
}

void Escritor::cambiar_fallecimiento(short int nuevo_anio){
    anio_fallecimiento = nuevo_anio;
}

Escritor::~Escritor(){}