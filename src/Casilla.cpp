#include "Casilla.h"
#include <math.h>

Casilla::Casilla(float _x, float _y)
{
	x = _x;
	y = _y;
}

Casilla::~Casilla()
{
}

Casilla Casilla::operator+(Casilla sum)
{
	Casilla resultado(x, y);
	resultado.x = x + sum.x;
	resultado.y = y + sum.y;
	return resultado;
}

Casilla Casilla::operator+(float sum)
{
	Casilla resultado(x, y);
	resultado.x = x + sum;
	resultado.y = y;
	return resultado;
}

Casilla Casilla::operator - (Casilla resta)
{
	Casilla resultado(x, y);
	resultado.x = x - resta.x;
	resultado.y = y - resta.y;
	return resultado;
}

float Casilla::modulo()
{
	return (float)sqrt(x * x + y * y);
}

float Casilla::argumento()
{
	return (float)atan2(y, x);
}

Casilla Casilla::unitario()
{
	Casilla retorno(x, y);
	float mod = modulo();
	if (mod > 0.00001)
	{
		retorno.x /= mod;
		retorno.y /= mod;
	}
	return retorno;
}

float Casilla::operator*(Casilla casilla)
{
	float resultado;
	resultado = (x * casilla.x) + (y * casilla.y);
	return resultado;
}

Casilla Casilla::operator*(float prod)
{
	Casilla resultado(x, y);
	resultado.x = x * prod;
	resultado.y = y * prod;
	return resultado;
}

Casilla Casilla::operator / (float div)
{
	Casilla resultado(x / div, y / div);
	return resultado;
}

Casilla Casilla::operator / (Casilla casilla)
{
	Casilla resultado(x, y);
	if (casilla.x != 0)
		resultado.x = x / casilla.x;
	else resultado.x = 0;

	if (casilla.y != 0)
		resultado.y = y / casilla.y;
	else resultado.y = 0;

	return resultado;
}

Casilla Casilla::valorAbsoluto()
{
	Casilla resultado(x,y);
	resultado.x = fabs(resultado.x);
	resultado.y = fabs(resultado.y);
	return resultado;
}

bool Casilla:: operator != (Casilla casilla)
{
	if ((x = casilla.x) && (y = casilla.y))
		return 0;
	else return 1;
}
