#pragma once

#include "Pieza.h"
#include "Casilla.h"
#include "Selector.h"
#include "Coordenada.h"
#include "ETSIDI.h"

const int TAM_CASILLA = 75;
const int TAM_TABLERO = 8;



class Tablero {
    Selector selector;
    //Pieza* casillas[TAM_TABLERO][TAM_TABLERO];
    Coordenada *casillas[TAM_TABLERO][TAM_TABLERO];
public:
    Tablero();
    ~Tablero();
    //saber posición de la pieza
    //Pieza* obtenerPosicionPieza(Coordenada posicion);
    
    // colocar la pieza en una posición determinada (al inicio)
    
    //void colocarPieza(Coordenada posicion, Pieza* pieza);
    
    //mover las piezas de ua coordenada a otra
    //bool moverPieza(Coordenada origen, Coordenada destino);
    void dibuja_selector();
    void tecla_selector(unsigned char key);
    //comprobar que la casilla está dentro del tablero
    //bool esCoordenadaValida(Coordenada coordenada) const;
    void dibuja_tablero();
    
};

