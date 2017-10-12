#include <iostream>
#include <string.h>
#include <time.h>

#include "MiGeneradorEtiquetas.h"
#include "MiGeneradorSimbolos.h"
#include "MiFicha.h"
#include "MiJueguito.h"

#include "MiTablero.h"
#include "MiTerminal.h"
using namespace std;

int main(){
	string nom;
	int nFilas, nCols;
	string simbolos= "#@&$%";
	string etiquetas = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout<<"ingrese nombre: "<<endl;
	cin>> nom;
	cout<<"ingrese filas: "<<endl;
	cin>>nFilas;
	cout<<"ingrese columnas: "<<endl;
	cin>>nCols;
	int maxMovs=20;
	int puntajeA= 3;
	
	Juego j1(nom,maxMovs);
	Tablero t1(nFilas,nCols);
	Terminal te1;
	GeneradorSimbolos simb(simbolos);
	GeneradorEtiquetas etqs(etiquetas);

	t1.inicializarse(simb,etqs);
	te1.limpiarPantalla();

	do{
		j1.mostrarInformacion();
		t1.inicializarse(simb,etqs);
		t1.dibujarse();
		char c1, c2;
		te1.leerMovimiento(c1,c2);
		Ficha *f1 = t1.obtenerFicha(c1);
		Ficha *f2 = t1.obtenerFicha(c2);
		f1->intercambiarSimbolos(f2);
		int pos1,pos2;

		Ficha *ftmp1 = t1.buscarTripletaFilas(pos1,pos2);
		if(ftmp1 != NULL){
			t1.reemplazarTripletaFilas(pos1, pos2, simb);
			j1.aumentarPuntaje(puntajeA);
		}
		Ficha *ftmp2 = t1.buscarTripletaColumnas(pos1,pos2);
		if (ftmp2 != NULL){
			t1.reemplazarTripletaColumnas(pos1,pos2,simb);
			j1.aumentarPuntaje(puntajeA);
		} 
		j1.reducirMovimientos();
		
	}
	while (j1.verificarFinal() == false);
	j1.mostrarInformacion();
	return 0;
}