#pragma once
#include "Casilla.h"

enum ColorJugador { blanca, negra };

class Pieza
{
private:
	struct jugada {
		Casilla origen;
		Casilla destino;
	};

public:
	Pieza();
	virtual ~Pieza();
	bool mueve(struct jugada&);
	void cambiarPos(struct jugada);
	static Tablero* pTablero;
	friend class Ajedrez;
	friend class Alfil;
};

