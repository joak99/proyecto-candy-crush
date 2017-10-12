#ifndef __FICHA__H__
#define __FICHA__H__
/// class Ficha using a simbol and label - 
class Ficha {
  // Attributes
protected:
  char etiqueta;
  char simbolo;
  // Operations
public:
  /* Creates a Ficha with default values for the attributes */
  Ficha ();
  /* Creates a Ficha with a new simbol and a new label */
  Ficha (char nuevoSimbolo, char nuevaEtiqueta);
  /* Returns the simbol */
  char getSimbolo ();
  /* Returns the label */
  char getEtiqueta ();
  /* Changes the simbol for a new one */
  void setSimbolo (char nuevoSimbolo);
  /* Changes the simbols between this Ficha and other one given as a parameter */
  void intercambiarSimbolos (Ficha *otraFicha);
  /* Writes the two ficha attributes to the screen */
  void dibujarse ();
};
#endif
