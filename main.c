#include <stdio.h>
#include "carta.h"

int main() {
    Carta jogador = {"Dragão", 90, 70, 60};
    Carta computador = {"Fênix", 85, 80, 75};

    printf("Sua carta:\n");
    mostrarCarta(jogador);

    int escolha;
    printf("\nEscolha um atributo para jogar (1-Força, 2-Velocidade, 3-Inteligência): ");
    scanf("%d", &escolha);

    printf("\nCarta do computador:\n");
    mostrarCarta(computador);

    int resultado = compararCartas(jogador, computador, escolha);

    printf("\nResultado da rodada: ");
    if (resultado == 1)
        printf("Você venceu!\n");
    else if (resultado == -1)
        printf("Você perdeu!\n");
    else
        printf("Empate!\n");

    return 0;
}
