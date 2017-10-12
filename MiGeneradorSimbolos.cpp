#include "MiGeneradorSimbolos.h"
#include <stdlib.h>

#include <iostream>
using namespace std;

GeneradorSimbolos::GeneradorSimbolos (string nuevosSimbolos) {
	cadenaSimbolos = nuevosSimbolos;
}

char GeneradorSimbolos::nextSimbolo () {
	int numCandies = cadenaSimbolos.size();
	int k = rand() % numCandies;
	return cadenaSimbolos [k];
}
