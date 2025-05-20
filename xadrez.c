#include <stdio.h>

int main() {
    // ============================
    // Simulação da Torre
    // ============================
    // A torre se moverá 5 casas para a direita usando o loop FOR
    int movimentosTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    // ============================
    // Simulação do Bispo
    // ============================
    // O bispo se moverá 5 casas na diagonal para cima e à direita usando o loop WHILE
    int movimentosBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < movimentosBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ============================
    // Simulação da Rainha
    // ============================
    // A rainha se moverá 8 casas para a esquerda usando o loop DO-WHILE
    int movimentosRainha = 8;
    int j = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentosRainha);

    return 0;
}

