#ifndef __TERMINAL_H__
#define __TERMINAL_H__

/// class Terminal - 
class Terminal {
  // Operations
public:
	// Read from keyboard the input movement and assigns it to the two char parameters
	void leerMovimiento (char &etiqueta1, char &etiqueta2);
	// Clear the screen according to the Operating System (Linux, Win, iOs)
	void limpiarPantalla ();
};

#endif
