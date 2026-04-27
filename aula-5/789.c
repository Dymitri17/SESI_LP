#include <stdio.h>

int main() {
    float numeros[10];
    float soma = 0, media;
    int i;

    // 1. Leitura dos números e cálculo da soma (Questão 7)
    printf("Digite 10 numeros:\n");
    for(i = 0; i < 10; i++) {
        printf("%d o valor: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    // Cálculo da média
    media = soma / 10;
    printf("\n--- Resultado Questao 7 ---");
    printf("\nA media dos valores e: %.2f\n", media);

    // 2. Exibir apenas valores maiores que a média (Questão 8)
    printf("\n--- Resultado Questao 8 ---");
    printf("\nValores maiores que a media:");
    for(i = 0; i < 10; i++) {
        if(numeros[i] > media) {
            printf(" %.2f", numeros[i]);
        }
    }
    printf("\n");

    // 3. Substituir negativos por zero (Questão 9)
    printf("\n--- Resultado Questao 9 ---");
    printf("\nVetor com negativos substituidos por zero:\n");
    for(i = 0; i < 10; i++) {
        if(numeros[i] < 0) {
            numeros[i] = 0;
        }
        printf("%.2f ", numeros[i]);
    }

    
}