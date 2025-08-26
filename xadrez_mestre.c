#include <stdio.h>

// ------------------------------------
// Funções Recursivas
// ------------------------------------

// Torre: move-se em linha reta (aqui 5 casas para a direita)
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Bispo: move-se em diagonal (5 casas cima-direita)
// Aqui usamos recursividade + loops aninhados
void moverBispo(int casas) {
    if (casas == 0) return;

    // loop aninhado: movimento vertical e horizontal
    for (int v = 1; v <= 1; v++) { // uma casa para cima
        for (int h = 1; h <= 1; h++) { // uma casa para direita
            printf("Cima Direita\n");
        }
    }
    moverBispo(casas - 1); // chamada recursiva
}

// Rainha: move-se em qualquer direção (aqui 8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ------------------------------------
// Cavalo: loops complexos
// Movimento em "L": 2 para cima, 1 para a direita
// ------------------------------------
void moverCavalo() {
    int movimentosCima = 2;
    int movimentosDireita = 1;

    // Usamos loops aninhados com múltiplas variáveis
    for (int i = 1, j = movimentosCima; i <= movimentosCima || j > 0; i++, j--) {
        // controla o movimento para cima
        if (i <= movimentosCima) {
            printf("Cima\n");
        }

        // quando terminar de subir, anda para direita
        if (i == movimentosCima) {
            int k = 1;
            while (k <= movimentosDireita) {
                printf("Direita\n");
                k++;
                break; // controla o fluxo explicitamente
            }
        }
    }
}

// ------------------------------------
// Programa Principal
// ------------------------------------
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre (recursiva)
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    // Bispo (recursiva + loops aninhados)
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\n");

    // Rainha (recursiva)
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    // Cavalo (loops complexos)
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
