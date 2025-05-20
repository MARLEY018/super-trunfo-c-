#ifndef CARTA_H
#define CARTA_H

typedef struct {
    char nome[50];
    int forca;
    int velocidade;
    int inteligencia;
} Carta;

void mostrarCarta(Carta carta);
int compararCartas(Carta c1, Carta c2, int atributo);

#endif
