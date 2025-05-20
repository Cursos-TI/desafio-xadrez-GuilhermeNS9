#include <stdio.h>

int main() {
    int movimentosTorre, movimentosBispo, movimentosRainha, movimentosCavalo;

    // Entrada de dados do usuário
    printf("Digite o número de casas para a Torre (direita): ");
    scanf("%d", &movimentosTorre);

    printf("Digite o número de casas para o Bispo (diagonal cima-direita): ");
    scanf("%d", &movimentosBispo);

    printf("Digite o número de casas para a Rainha (esquerda): ");
    scanf("%d", &movimentosRainha);

    printf("Digite o número de movimentos do Cavalo (em L - 2 Baixo + 1 Esquerda): ");
    scanf("%d", &movimentosCavalo);

    // ============================
    // Simulação da Torre com FOR
    // ============================
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    // ============================
    // Simulação do Bispo com WHILE
    // ============================
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < movimentosBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ============================
    // Simulação da Rainha com DO-WHILE
    // ============================
    int j = 0;
    printf("\nMovimento da Rainha:\n");
    if (movimentosRainha > 0) {
        do {
            printf("Esquerda\n");
            j++;
        } while (j < movimentosRainha);
    }

    // ============================
    // Simulação do Cavalo com FOR + WHILE
    // ============================
    printf("\nMovimento do Cavalo:\n");

    for (int m = 0; m < movimentosCavalo; m++) {
        int passo = 0;

        // 2 passos para baixo
        while (passo < 2) {
            printf("Baixo\n");
            passo++;
        }

        // 1 passo para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
