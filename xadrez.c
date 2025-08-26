#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 2;
    int casasBispo = 2;
    int casasRainha = 4;

    // -----------------------------
    // Torre -> FOR
    // -----------------------------
    // A torre vai se mover 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // -----------------------------
    // Bispo -> WHILE
    // -----------------------------
    // O bispo vai se mover 5 casas na diagonal para cima e direita
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Diagonal Direita (Frente)\n");
        i++;
    }

    printf("\n");

    // -----------------------------
    // Rainha -> DO-WHILE
    // -----------------------------
    // A rainha vai se mover 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
