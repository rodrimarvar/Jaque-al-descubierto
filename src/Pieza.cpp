#include "Pieza.h"

Pieza::Pieza(Color color, Coordenada posicion) : color(color), posicion(posicion) {}

Color Pieza::obtenerColor() const {
    return color;
}

Coordenada Pieza::obtenerPosicionActual() const {
    return posicion;
}

void Pieza::actualizarPosicion(Coordenada posicion) {
    this->posicion = posicion;
}
