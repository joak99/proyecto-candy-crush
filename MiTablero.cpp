#include "MiTablero.h"
#include "MiGeneradorSimbolos.h"
#include "MiGeneradorEtiquetas.h"
#include <iostream>
using namespace std;

Tablero::Tablero (int filas, int cols) {
	nFilas = filas;
	nCols  = cols;
				
	matriz = new Ficha* [nFilas];
	for (int i=0; i<nFilas; i++) 
		for (int j=0; j<nCols; j++) 
			matriz [i] = new Ficha [nCols];
}

void Tablero::inicializarse (GeneradorSimbolos genSmb, GeneradorEtiquetas genEtq) {
	for (int i=0; i < nFilas; i++) 
		for (int j=0; j < nCols; j++) {
			Ficha f (genSmb.nextSimbolo (), genEtq.nextEtiqueta());
			matriz [i][j] = f;
		}
}
			
void Tablero::dibujarse () {
	for (int i=0; i < nFilas; i++) {
		for (int j=0; j < nCols; j++) {
			Ficha f = matriz [i][j];
			f.dibujarse ();
		}
		cout << endl;
	}
}

Ficha * Tablero::obtenerFicha (char etq) {
	for (int j=0; j < nFilas; j++) {
		for (int i=0; i < nCols; i++) {
			Ficha f = matriz [i][j];
			if (f.getEtiqueta () == etq)
				return &matriz [i][j];
		}
	}
	return NULL;
}

Ficha * Tablero::obtenerFicha (int posX, int posY) {
	return &matriz [posX][posY];
}

Ficha * Tablero::buscarTripletaFilas (int &posX, int &posY){
	for (int i=0; i < nFilas; i++) 
		for (int j=0; j < nCols-2; j++) {
			if (matriz[i][j].getSimbolo() == matriz[i][j+1].getSimbolo() &&
				matriz[i][j].getSimbolo() == matriz [i][j+2].getSimbolo()) {
				posX = i;
				posY = j;
				return  &matriz [i][j];
			}
		}
	return NULL;
}

Ficha * Tablero::buscarTripletaColumnas (int &posX, int &posY){
	for (int i=0; i < nFilas-2; i++) 
		for (int j=0; j < nCols; j++) {
			if (matriz[i][j].getSimbolo() == matriz[i+1][j].getSimbolo() &&
				matriz[i][j].getSimbolo() == matriz [i+2][j].getSimbolo()) {
				posX = i;
				posY = j;
				return  &matriz [i][j];
			}
		}
	return NULL;
}

void Tablero::reemplazarTripletaFilas (int posFila, int posColumna, GeneradorSimbolos gs) {
	matriz [posFila][posColumna].setSimbolo (gs.nextSimbolo());
	matriz [posFila][posColumna+1].setSimbolo (gs.nextSimbolo());
	matriz [posFila][posColumna+2].setSimbolo (gs.nextSimbolo());
}

void Tablero::reemplazarTripletaColumnas (int posFila, int posColumna, GeneradorSimbolos gs){
	matriz [posFila + 0][posColumna].setSimbolo (gs.nextSimbolo());
	matriz [posFila + 1][posColumna].setSimbolo (gs.nextSimbolo());
	matriz [posFila + 2][posColumna].setSimbolo (gs.nextSimbolo());
}

