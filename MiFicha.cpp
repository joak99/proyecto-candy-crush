#include "MiFicha.h"

#include <iostream>
using namespace std;

Ficha::Ficha (){
	simbolo = '$';
	etiqueta = 'A';
}

Ficha::Ficha (char nuevoSimbolo, char nuevaEtiqueta){
	simbolo = nuevoSimbolo;
	etiqueta = nuevaEtiqueta;
}

char Ficha::getSimbolo (){
	return simbolo;
}

char Ficha::getEtiqueta (){
	return etiqueta;
}

void Ficha::setSimbolo (char nuevoSimbolo){
	simbolo = nuevoSimbolo;
}
void Ficha::intercambiarSimbolos (Ficha *otraFicha){
	char tmp = simbolo;
	simbolo = otraFicha->getSimbolo();
	otraFicha->setSimbolo (tmp);
}

void Ficha::dibujarse (){
	cout << "   " << simbolo << " " << etiqueta << "\t";
}
