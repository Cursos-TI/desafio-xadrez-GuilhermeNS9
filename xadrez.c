#include <stdio.h>

// ================================
// Função recursiva para a Torre
// ================================
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// =================================
// Função recursiva para a Rainha
// =================================
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// =========================================
// Função recursiva para o Bispo combinada 
// com loops aninhados verticais/horizontais
// =========================================
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;

    // Loop externo representa movimento vertical
    for (int i = 0; i < vertical; i++) {
        // Loop interno representa movimento horizontal
        for (int j = 0; j < horizontal; j++) {
            printf("Cima Direita\n");
        }
    }

    // Recursão reduzindo o número de movimentos
    moverBispo(vertical - 1, horizontal - 1);
}

// =======================================
// Movimento do Cavalo com loops complexos
// =======================================
void moverCavalo(int movimentos) {
    printf("\nMovimento do Cavalo:\n");

    // Cada movimento será: 2 para cima, 1 para direita
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0 || j == 1) {
                // Primeiros dois passos são "Cima"
                printf("Cima\n");
            } else if (j == 2) {
                // Último passo é "Direita"
                if (i % 2 == 0) {
                    printf("Direita\n");
                } else {
                    // Demonstrando uso de continue e break
                    continue;
                }
            }

            // Simulando condição arbitrária com break
            if (i == 1 && j == 2) {
                printf("(Movimento interrompido propositalmente)\n");
                break;
            }
        }
    }
}

// =========================
// Função principal
// =========================
int main() {
    // Definindo movimentos fixos
    int casasTorre = 5;
    int casasRainha = 4;
    int movimentosBispoVertical = 3;
    int movimentosBispoHorizontal = 3;
    int movimentosCavalo = 3;

    // Movimento da Torre com recursão
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo com recursão e loops aninhados
    printf("\nMovimento do Bispo:\n");
    moverBispo(movimentosBispoVertical, movimentosBispoHorizontal);

    // Movimento da Rainha com recursão
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo com loops complexos
    moverCavalo(movimentosCavalo);

    return 0;
}