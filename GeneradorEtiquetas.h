#ifndef __GENERADORETIQUETAS_H__
#define __GENERADORETIQUETAS_H__

// Class for generating labels one by one
#include <iostream>
using namespace std;

/// class GeneradorEtiquetas - 
class GeneradorEtiquetas {
	  // Attributes
	protected:
	  // A string to store the labels	
	  string cadenaEtqs; 
	  // counter to get the next label
	  int contadorEtqs;
	  // Operations
	public:
	  // Constructor with a new string of labels
	  GeneradorEtiquetas (string nuevasEtiquetas);
	  // Returns the next label from the string of labels 
	  // It uses and increments the counter to get the next label
	  char nextEtiqueta ();
};
#endif
