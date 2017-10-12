#include "GeneradorEtiquetas.h"

GeneradorEtiquetas::GeneradorEtiquetas (string nuevasEtiquetas) {
	cadenaEtqs = nuevasEtiquetas;
	contadorEtqs=0;
}

char GeneradorEtiquetas::nextEtiqueta () {
	return cadenaEtqs [contadorEtqs++];
}
