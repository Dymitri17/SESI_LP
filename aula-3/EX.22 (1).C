#include <stdio.h>

int main() {
    int num;

    do {
        printf("Digite um número positivo: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Valor inválido! Tente novamente.\n");
        }

    } while (num <= 0);

    printf("Você digitou um número válido: %d\n", num);
}