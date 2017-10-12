#include "Terminal.h"
#include <iostream>
using namespace std;

#include <stdlib.h>

void Terminal::leerMovimiento (char &etq1, char &etq2){
	cout << endl;
	cout << " Movimiento a realizar --> ";
	cin >> etq1 >> etq2;
	cout << endl;
}

void Terminal::limpiarPantalla () {
	system ("cls");
}

