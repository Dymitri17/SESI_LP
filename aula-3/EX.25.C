#include <stdio.h>

int main() {
    int valor;
    int n100, n50, n20, n10, n5, n1;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    n100 = valor / 100;
    valor %= 100;

    n50 = valor / 50;
    valor %= 50;

    n20 = valor / 20;
    valor %= 20;

    n10 = valor / 10;
    valor %= 10;

    n5 = valor / 5;
    valor %= 5;

    n1 = valor;  // o restante serão notas de 1

    printf("\nNotas necessárias:\n");
    printf("100: %d\n", n100);
    printf("50 : %d\n", n50);
    printf("20 : %d\n", n20);
    printf("10 : %d\n", n10);
    printf("5  : %d\n", n5);
    printf("1  : %d\n", n1);
}