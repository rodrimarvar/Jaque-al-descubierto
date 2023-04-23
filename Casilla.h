#pragma once
class Casilla
{
private:
	int x, y;
public:
	Casilla();
	virtual ~Casilla();

	void setPos(float _x, float _y);

	Casilla operator+(Casilla sum);
	Casilla operator+(float sum);
	Casilla operator-(Casilla resta);
	float modulo();
	float argumento();
	Casilla unitario();
	float operator*(Casilla casilla);
	Casilla operator*(float prod);
	Casilla operator/(float div);
	Casilla operator/(Casilla casilla);
	Casilla valorAbsoluto();
	bool operator!=(Casilla casilla); //servirá para comprobar si la casilla está ocupada
	friend class Tablero;
};

