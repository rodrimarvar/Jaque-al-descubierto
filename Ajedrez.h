#pragma once
#include "Pieza.h"
#include "Tablero.h"
#include "Tablero.h"
#include "Alfil.h"
#include "Caballo.h"
#include "Reina.h"
#include "Peon.h"
#include "Rey.h"
#include "Torre.h"

class Ajedrez
{
private:
	static int turno;

	Pieza* pieza;
	Alfil alfil;
	Caballo caballo;
	Peon peon;
	Reina reina;
	Rey rey;
	Torre torre;
	Tablero tablero;
	
public:
	Ajedrez();
	~Ajedrez();

	bool direccion(struct jugada);
	void resetear();
	int checkCasilla();
	bool movimiento(struct jugada &jugada);
	static int getTurno();
	bool jaqueRey;

};