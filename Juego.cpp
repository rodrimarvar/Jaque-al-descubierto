#include "freeglut.h"
#include "Coordenada.h"
#include "Tablero.h"
#include <iostream>
#include <string>
using namespace std;

void Menu();

void onSpecialKeyboardDown(int key, int x, int y);
void OnKeyboardDown(unsigned char key, int x_t, int y_t);



Tablero tablero;

void display() {
	
    
    Menu();
    tablero.dibuja_tablero();
    
    glutSwapBuffers();
}

int main(int argc,char* argv[]) {
	
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(TAM_CASILLA* TAM_TABLERO, TAM_CASILLA * TAM_TABLERO);
    glutCreateWindow("Jaque al descubierto");

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, TAM_CASILLA * TAM_TABLERO + 150, TAM_CASILLA * TAM_TABLERO + 150, 0, -1, 1);

    
    glutKeyboardFunc(OnKeyboardDown);
    glutSpecialFunc(onSpecialKeyboardDown);

    glutDisplayFunc(display);
    Menu();

    glutMainLoop();

    return 0;
}

void OnKeyboardDown(unsigned char key, int x_t, int y_t) {
    glutPostRedisplay();
    tablero.tecla_selector(key);
}

void onSpecialKeyboardDown(int key, int x, int y)
{
    tablero.tecla_selector(key);
    glutPostRedisplay();
}


void Menu()
{

    glClear(GL_COLOR_BUFFER_BIT); // Limpia la pantalla
    
    // Dibuja el título del juego
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D(0, 640, 0, 480);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    glColor3f(1, 1, 1);
    glRasterPos2f(250, 400);
    string titulo = "Jaque al descubierto";
    for (int i = 0; i < titulo.length(); i++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, titulo[i]);
    }
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    
    // Dibuja las opciones del menú
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D(0, 640, 0, 480);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    glColor3f(1, 1, 1);
    glRasterPos2f(250, 300);
    string opcion1 = "1. Nueva partida";
    for (int i = 0; i < opcion1.length(); i++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, opcion1[i]);
    }
    glRasterPos2f(250, 250);
    string opcion2 = "2. Salir";
    for (int i = 0; i < opcion2.length(); i++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, opcion2[i]);
    }
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    
    // Dibuja todo en la pantalla
    glutSwapBuffers();
}

// Función que maneja el evento de selección de una opción del menú
void menu(int opcion) 
{
    switch(opcion) 
    {
        case 1:
            // Pedimos los nombres de los jugadores
            /*string nombreJugador1, nombreJugador2;
            cout << "Ingrese el nombre del jugador 1: ";
            cin >> nombreJugador1;
            cout << "Ingrese el nombre del jugador 2: ";
            cin >> nombreJugador2;*/
            
            // Iniciamos el juego
            // Aquí iría el código para el juego 
            break;
        case 2:
            // Salimos del programa
            exit(0);
            break;
        default:
            // Si el usuario ingresa una opción inválida, no hacemos nada
            break;
    }
}
