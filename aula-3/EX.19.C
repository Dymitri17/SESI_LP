#include <stdio.h>

int main() {
    int num;
    int maior = -999999; // valor inicial bem baixo

    do {
        printf("Digite um número (999 para parar): ");
        scanf("%d", &num);

        if (num != 999) { 
            if (num > maior) {
                maior = num;
            }
        }

    } while (num != 999);

    printf("O maior número digitado foi: %d\n", maior);
}