#include "Casilla.h"
#include <math.h>

Casilla::Casilla()
{
}

Casilla::~Casilla()
{
}

void Casilla::setPos(float _x, float _y)
{
	x = _x;
	y = _y;
}

Casilla Casilla::operator+(Casilla sum)
{
	Casilla resultado;
	resultado.x = x + sum.x;
	resultado.y = y + sum.y;
	return resultado;
}

Casilla Casilla::operator+(float sum)
{
	Casilla resultado;
	resultado.x = x + sum;
	resultado.y = y;
	return resultado;
}

float Casilla::modulo()
{
	return (float)sqrt((float)(x * x )+(float)(y * y));
}

float Casilla::argumento()
{
	return (float)atan2(y, x);
}

Casilla Casilla::unitario()
{
	Casilla retorno;
	float mod = modulo();
	if (mod > 0.00001)
	{
		retorno.x /= mod;
		retorno.y /= mod;
	}
	return retorno;
}

Casilla Casilla::operator - (Casilla resta)
{
	Casilla resultado;
	resultado.x = x - resta.x;
	resultado.y = y - resta.y;
	return resultado;
}

Casilla Casilla::operator / (Casilla casilla)
{
	Casilla resultado;
	if (casilla.x != 0)
		resultado.x = x / casilla.x;
	else resultado.x = 0;

	if (casilla.y != 0)
		resultado.y = y / casilla.y;
	else resultado.y = 0;

	return resultado;
}

float Casilla::operator*(Casilla casilla)
{
	float resultado;
	resultado = (x * casilla.x) + (y * casilla.y);
	return resultado;
}

Casilla Casilla::operator*(float prod)
{
	Casilla resultado;
	resultado.x = x * prod;
	resultado.y = y * prod;
	return resultado;
}

Casilla Casilla::valorAbsoluto()
{
	Casilla resultado;
	resultado.x = abs(resultado.x);
	resultado.y = abs(resultado.y);
	return resultado;
}

bool Casilla:: operator != (Casilla casilla)
{
	if ((x = casilla.x) && (y = casilla.y))
		return 0;
	else return 1;
}