#include <stdio.h>

int main() {
    int num;
    int soma = 0;

    do {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);

        soma += num;

    } while (num != 0);

    printf("A soma dos números digitados é: %d\n", soma);
}