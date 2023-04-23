#pragma once
#include "Pieza.h"

class Alfil:Casilla
{
public:
	Alfil();
	virtual ~Alfil();

	bool mueve(struct jugada&);
};

