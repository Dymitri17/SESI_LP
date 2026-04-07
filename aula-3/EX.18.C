#include <stdio.h>

int main() {
    int idade;
    int soma = 0;
    int contador = 0;

    do {
        printf("Digite uma idade (0 para parar): ");
        scanf("%d", &idade);

        if (idade > 0) {
            soma += idade;
            contador++;
        }

    } while (idade != 0);

    if (contador > 0) {
        float media = (float)soma / contador;
        printf("A média das idades é: %.2f\n", media);
    } else {
        printf("Nenhuma idade válida foi digitada.\n");
    }
}