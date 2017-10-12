#include "MiJueguito.h"
#include <string.h>

#include <iostream>
using namespace std;

Juego::Juego (string nuevoNombre, int nuevoMaximo) {
	puntaje = 0;
	nombreJugador = nuevoNombre;
	maxMovimientos = nuevoMaximo;
}

void Juego::aumentarPuntaje (int nuevoPuntaje) {
	puntaje += nuevoPuntaje;
}

int Juego::reducirMovimientos () {
	maxMovimientos--;
}

void Juego::mostrarInformacion () {
	cout << endl;
	cout << endl;
	cout << "Jugador:" <<  nombreJugador << " || " ;
	cout << " Puntaje: " << puntaje << " || ";
	cout << " Movimientos: " <<  maxMovimientos << " || ";
	cout << endl;
	cout << endl;
}

bool Juego::verificarFinal () {
	if (maxMovimientos <= 0 )
		return true;
	return false;
}