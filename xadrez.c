#include <stdio.h>

// Constantes para quantidade de casas
#define BISPO_CASAS 5
#define TORRE_CASAS 5
#define RAINHA_CASAS 8

int main() {

    int i;

    // ===============================
    // Movimentação do BISPO
    // Diagonal superior direita
    // Usando FOR
    // ===============================
    printf("Movimentacao do Bispo:\n");
    for (i = 1; i <= BISPO_CASAS; i++) {
        // Diagonal = combinação de direções
        printf("Cima Direita\n");
    }

    printf("\n");

    // ===============================
    // Movimentação da TORRE
    // 5 casas para a direita
    // Usando WHILE
    // ===============================
    printf("Movimentacao da Torre:\n");
    i = 1;
    while (i <= TORRE_CASAS) {
        printf("Direita\n");
        i++;
    }

    printf("\n");

    // ===============================
    // Movimentação da RAINHA
    // 8 casas para a esquerda
    // Usando DO-WHILE
    // ===============================
    printf("Movimentacao da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= RAINHA_CASAS);

    return 0;
}
