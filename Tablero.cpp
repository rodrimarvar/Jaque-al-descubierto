#include "Tablero.h"
#include "Casilla.h"

/*Blancas + y negras -
Alfil 1
Caballo 2
Peón 3
Reina 4
Rey 5
Torre 6
Vacía 0*/

int Tablero::start[8][8] = { {6,2,1,5,4,1,2,6} , {3,3,3,3,3,3,3,3} , {0,0,0,0,0,0,0,0} , {0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0} , {0,0,0,0,0,0,0,0} , {-3,-3,-3,-3,-3,-3,-3,-3} , {-6,-2,-1,-5,-4,-1,-2,-6} };

Tablero::Tablero()
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			tablero[i][j] = start[i][j];
		}
	}
}

int Tablero::checkCasilla(Casilla *pcasilla)
{
	Casilla casilla;
	Casilla* pcasilla = &casilla;
	return tablero[pcasilla->x][pcasilla->y];
}

void Tablero::restart()
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			tablero[i][j] = start[i][j];
		}
	}
}