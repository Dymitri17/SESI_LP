#include <stdio.h>

int main() {
    int num;
    int contador = 0;

    do {
        printf("Digite um número (negativo para parar): ");
        scanf("%d", &num);

        if (num >= 0) {
            contador++;
        }

    } while (num >= 0);

    printf("Quantidade de números digitados: %d\n", contador);
}