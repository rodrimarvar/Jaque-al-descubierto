#include "freeglut.h"
#include "Tablero.h"



Tablero::Tablero() {
    // Inicializar las casillas del tablero
    for (int fila = 0; fila < TAM_TABLERO; fila++) {
        for (int columna = 0; columna < TAM_TABLERO; columna++) {
            casillas[fila][columna] = nullptr;
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
/*
Pieza* Tablero::obtenerPosicionPieza(Coordenada posicion) {
    if (esCoordenadaValida(posicion)) {
        return casillas[posicion.fila][posicion.columna];
    }
    else {
        return nullptr;
    }
}

void Tablero::colocarPieza(Coordenada posicion, Pieza* pieza) {
    casillas[posicion.fila][posicion.columna] = pieza;
}

bool Tablero::esCoordenadaValida(Coordenada coordenada) const {
    int x = coordenada.fila;
    int y = coordenada.columna;
    return x >= 0 && x < TAM_TABLERO && y >= 0 && y < TAM_TABLERO;
}


bool Tablero::moverPieza(Coordenada origen, Coordenada destino) {
    
    Pieza* piezaOrigen = obtenerPosicionPieza(origen);

    if (piezaOrigen == nullptr) {
        return false;
    }
    if (piezaOrigen->esMovimientoValido(origen, destino, *this)) {
        colocarPieza(destino, piezaOrigen);
        colocarPieza(origen, nullptr);
        piezaOrigen->actualizarPosicion(destino);
        return true;
    }
    else {
        return false;
    }
}
*/


void Tablero::dibuja_selector() {
   
    glColor3f(0.0f, 0.0f, 1.0f);
    glRecti(selector.getColumna() * 75, selector.getFila() * 75,
        (selector.getColumna() + 1) * 75, (selector.getFila() + 1) * 75);
    glFlush();
}

void Tablero::tecla_selector(unsigned char key) {
    selector.mover(key);
}

void Tablero::dibuja_tablero() {
    glClear(GL_COLOR_BUFFER_BIT);
    // Borde del tablero
    glColor3f(0.4f, 0.2f, 0.0f);
    glRecti(-75, -75, TAM_CASILLA * 10, TAM_CASILLA * 10);

    // Dibujar posiciones del tablero
    glColor3f(1.0f, 1.0f, 1.0f);

    for (int i = 0; i < TAM_TABLERO; i++) {

        char letra = 'A';

        for (int j = 0; j < 2; j = j++) {

            glRasterPos2i((i + 1) * TAM_CASILLA + TAM_CASILLA / 2, j * TAM_CASILLA * (TAM_TABLERO + 1) + TAM_CASILLA / 2);
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, letra + i);
            glRasterPos2i(TAM_CASILLA / 2 + j * TAM_CASILLA * (TAM_TABLERO + 1), (i + 1) * TAM_CASILLA + TAM_CASILLA / 2);
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '8' - i);
        }
    }


    // Tablero
    for (int fila = 1; fila < TAM_TABLERO+1; fila++) {

        for (int columna = 1; columna < TAM_TABLERO+1; columna++) {

            if ((fila + columna) % 2 == 0) {
                glColor3f(0.8f, 0.6f, 0.4f);
            }
            else {
                glColor3f(0.6f, 0.4f, 0.2f);
            }

            glRecti(columna * TAM_CASILLA, fila * TAM_CASILLA,
                (columna + 1) * TAM_CASILLA, (fila + 1) * TAM_CASILLA);
        }
    }
    dibuja_selector();
}