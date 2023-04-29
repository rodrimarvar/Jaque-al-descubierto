#include "freeglut.h"
#include "Coordenada.h"
#include "Tablero.h"

const int TAM_CASILLA = 75;

Tablero tablero;

void display() {
	
    glClear(GL_COLOR_BUFFER_BIT);
    // Borde del tablero
    glColor3f(0.4f, 0.2f, 0.0f);
    glRecti(-75, -75, TAM_CASILLA * 10, TAM_CASILLA * 10);

    // Tablero
    for (int fila = 1; fila < TAM_TABLERO; fila++) {

        for (int columna = 1; columna < TAM_TABLERO; columna++) {

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

    glFlush();
}

int main(int argc,char* argv[]) {
	
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(TAM_CASILLA* TAM_TABLERO, TAM_CASILLA * TAM_TABLERO);
    glutCreateWindow("Ajedrez");

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, TAM_CASILLA * TAM_TABLERO + 150, TAM_CASILLA * TAM_TABLERO + 150, 0, -1, 1);

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
