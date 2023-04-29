#pragma once

#include "Pieza.h"
#include "Coordenada.h"

const int TAM_TABLERO = 8;

class Tablero {
public:
    Tablero();
    ~Tablero();


private:
    Pieza* casillas[TAM_TABLERO][TAM_TABLERO];
};
