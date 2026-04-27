#include <stdio.h>
#include <limits.h> // Para usar o menor valor possível de um int

int main() {
    int vetor[6];
    int maior = INT_MIN;
    int segundoMaior = INT_MIN;

    printf("Digite 6 valores inteiros:\n");
    for(int i = 0; i < 6; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior) {
            segundoMaior = maior;
            maior = vetor[i];
        } else if (vetor[i] > segundoMaior && vetor[i] < maior) {
            segundoMaior = vetor[i];
        }
    }

    if (segundoMaior == INT_MIN) {
        printf("\nNao existe um segundo maior valor distinto.\n");
    } else {
        printf("\nO maior valor e: %d", maior);
        printf("\nO segundo maior valor e: %d\n", segundoMaior);
    }

}