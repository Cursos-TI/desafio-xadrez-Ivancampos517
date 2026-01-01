#include <stdio.h>

// Constantes para número de casas
#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8

int main() {
    int i;

    // Movimento da Torre: 5 casas para a Direita usando FOR
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 1; i <= CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo: 5 casas diagonal Cima Direita usando WHILE
    printf("Movimento do Bispo (5 casas diagonal Cima Direita):\n");
    i = 1;
    while (i <= CASAS_BISPO) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // Movimento da Rainha: 8 casas para a Esquerda usando DO-WHILE
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= CASAS_RAINHA);
    printf("\n");

    return 0;
}
// Programa em C para simular movimentos de peças de xadrez usando diferentes estruturas de repetição.