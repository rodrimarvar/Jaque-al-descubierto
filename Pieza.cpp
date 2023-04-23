#include "Pieza.h"
#include "Tablero.h"
#include "Normas.h"
#include <math.h>

Pieza::Pieza(void)
{
	struct jugada Jugada;
}

bool Pieza::mueve(struct jugada& jugada)
{
	int destino = pTablero->Interaccion(jugada.destino);
	if (destino == 0)
		return 1;
	return 0;
}