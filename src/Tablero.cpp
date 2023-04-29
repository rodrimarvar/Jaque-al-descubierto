
#include "Tablero.h"

Tablero::Tablero() {
    // Inicializar las casillas del tablero
    for (int fila = 0; fila < TAM_TABLERO; fila++) {
        for (int columna = 0; columna < TAM_TABLERO; columna++) {
            casillas[fila][columna] = NULL;
        }
    }
}

Tablero::~Tablero() {
    // Eliminar todas las piezas del tablero
    for (int fila = 0; fila < TAM_TABLERO; fila++) {
        for (int columna = 0; columna < TAM_TABLERO; columna++) {
            if (casillas[fila][columna] != nullptr) {
                delete casillas[fila][columna];
                casillas[fila][columna] = nullptr;
            }
        }
    }
}
