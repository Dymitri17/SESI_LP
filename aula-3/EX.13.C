#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {  // número ímpar
            soma += i;
        }
    }

    printf("A soma dos números ímpares entre 1 e 100 é: %d\n", soma);
}