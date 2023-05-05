#pragma once
#include <vector>

#include "Coordenada.h"
#include "Tablero.h"

using namespace std;

class Tablero;

enum class Color {
    Blanco,
    Negro
};

class Pieza {
public:

    //"virtual" --> lo hace modificable al método por otras clases, se implementa en las clases derivadas
    //"const = 0" --> hace obligatorio que las clases derivadas la implementen

    Pieza(Color color, Coordenada posicion);
    virtual ~Pieza();

    Color obtenerColor() const;
    Coordenada obtenerPosicionActual() const;
    //Introduzco nueva coordenada y se actualiza
    void actualizarPosicion(Coordenada posicion);
    virtual bool esMovimientoValido(Coordenada origen, Coordenada destino, Tablero& tablero) const = 0;
    virtual vector<Coordenada> obtenerTodasLasJugadasPosibles(Tablero& tablero) const = 0;
    

private:
    Color color;
    Coordenada posicion;
};

