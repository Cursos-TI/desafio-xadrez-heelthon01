#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 2;
    int casasBispo = 2;
    int casasRainha = 4;

    // -----------------------------
    // Torre -> FOR
    // -----------------------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // -----------------------------
    // Bispo -> WHILE
    // -----------------------------
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // -----------------------------
    // Rainha -> DO-WHILE
    // -----------------------------
    printf("Movimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    printf("\n");

    // -----------------------------
    // Cavalo -> FOR + WHILE (loops aninhados)
    // -----------------------------
    // O Cavalo deve se mover 2 casas para baixo e 1 para a esquerda
    printf("Movimento do Cavalo:\n");

    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    // Primeiro loop: movimentos verticais (for obrigatório)
    for (int linha = 1; linha <= movimentosBaixo; linha++) {
        printf("Baixo\n");

        // Dentro de cada movimento vertical,
        // simulamos se ainda há movimento horizontal a fazer
        int coluna = 1;
        while (coluna <= movimentosEsquerda && linha == movimentosBaixo) {
            // Só executa o movimento para a esquerda após terminar os "Baixos"
            printf("Esquerda\n");
            coluna++;
        }
    }

    return 0;
}
