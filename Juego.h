#ifndef __JUEGO_H__
#define __JUEGO_H__
/// class Juego - 
#include <iostream>
using namespace std;

// Class to handle the info of the game
class Juego {
  // Attributes
protected:
  string nombreJugador;// Name of the player
  int puntaje;		   // Score of the game
  int maxMovimientos;  // Max number of movements
  // Operations
public:
  // Constructor with a new player name and a new max value for movements
  Juego (string nuevoNombre, int nuevoMaximo);
  // Increase the score by adding to it the new score parameter
  void aumentarPuntaje (int nuevoPuntaje);
  // Decrease by one the movements of the player
  int reducirMovimientos ();
  // Shows to the screen the information of the game: 
  // nombreJugador, puntaje, maxMovimientos
  void mostrarInformacion ();
  // Returns true if the maxMovimientos is less than zero
  bool verificarFinal ();
};
#endif
