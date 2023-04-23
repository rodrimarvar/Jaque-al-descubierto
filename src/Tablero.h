#pragma once
class Tablero
{
private:
	int tablero[8][8];
public:
	static int start[8][8];
	Tablero();
	virtual ~Tablero();
	void restart();
	int checkCasilla(Casilla *pcasilla);
};

