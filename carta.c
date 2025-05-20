#include <stdio.h>
#include "carta.h"

void mostrarCarta(Carta carta) {
    printf("Nome: %s\n", carta.nome);
    printf("1. Força: %d\n", carta.forca);
    printf("2. Velocidade: %d\n", carta.velocidade);
    printf("3. Inteligência: %d\n", carta.inteligencia);
}

int compararCartas(Carta c1, Carta c2, int atributo) {
    int valor1 = 0, valor2 = 0;

    switch (atributo) {
        case 1:
            valor1 = c1.forca;
            valor2 = c2.forca;
            break;
        case 2:
            valor1 = c1.velocidade;
            valor2 = c2.velocidade;
            break;
        case 3:
            valor1 = c1.inteligencia;
            valor2 = c2.inteligencia;
            break;
        default:
            printf("Atributo inválido.\n");
            return 0;
    }

    if (valor1 > valor2) return 1;
    else if (valor1 < valor2) return -1;
    else return 0;
}
