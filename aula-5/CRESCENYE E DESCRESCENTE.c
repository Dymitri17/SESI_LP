#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, temp;

    // Entrada de dados
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // --- ORDENAÇÃO CRESCENTE (Exercício 10) ---
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os valores de lugar
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("\n>>> Vetor em ordem CRESCENTE:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    // --- ORDENAÇÃO DECRESCENTE (Exercício 11) ---
    // Basta inverter o sinal de comparação (de > para <)
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (vetor[j] < vetor[j + 1]) { 
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("\n\n>>> Vetor em ordem DECRESCENTE:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    
}
