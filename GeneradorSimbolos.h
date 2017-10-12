#ifndef __GENERADORSIMBOLOS_H__
#define __GENERADORSIMBOLOS_H__

#include <iostream>
using namespace std;

/// Class for generating random symbols
class GeneradorSimbolos {
  // Attributes
protected:
  	string cadenaSimbolos; // String of sryimbols
  // Operations
public:
	// Constructor with a new string of sybols
	GeneradorSimbolos (string nuevosSimbolos);
	// Returns a new random symbol from the string of symbols
	char nextSimbolo ();
};
#endif
