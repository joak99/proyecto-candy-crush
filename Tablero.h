#ifndef __TABLERO_H__
#define __TABLERO_H__

#include "Ficha.h"
#include "GeneradorSimbolos.h"
#include "GeneradorEtiquetas.h"

/// class to handle the candy board 
class Tablero {
  // Attributes
protected:
  int nFilas; // Number of rows of the matrix
  int nCols;  // Number of columns of the matrix
  Ficha **matriz; // Dynamic matrix of type Ficha
  // Operations
public:
  // Constructor with new rows and columns for constructing the matriz
  Tablero (int filas, int cols);
  // Initializes the symbols and labels of each Ficha from the matriz
  // It uses two generators to get the new symbol cha and the next label char
  void inicializarse (GeneradorSimbolos gs, GeneradorEtiquetas ge);
  // Prints the matriz to the screen
  void dibujarse ();
  // Returns the Ficha object containing the input char label
  Ficha * obtenerFicha (char etiqueta);
  // Returns the Ficha object located in the row and column given as parameters
  Ficha * obtenerFicha (int posFila, int posColumna);
  // Search for the first Ficha that completes a "tripleta" horizontally
  Ficha * buscarTripletaFilas (int &posFila, int &posColumna);
  // Search for the first Ficha that completes a "tripleta" vertically
  Ficha * buscarTripletaColumnas (int &posFila, int &posColumna);
  // Changes the symbols for the horizontal "tripleta" located in the row and columns given as input
  // It uses a generator to get the new symbols
  void reemplazarTripletaFilas (int posFila, int posColumna, GeneradorSimbolos genSmb);
  // Changes the symbols for the vertiacl "tripleta" located in the row and columns given as input
  // It uses a generator to get the new symbols
  void reemplazarTripletaColumnas (int posFila, int posColumna, GeneradorSimbolos genSmb);
};
#endif
