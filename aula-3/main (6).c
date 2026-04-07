#include <stdio.h>
void main() {
    // 25) Caixa Eletrônico
    int valor;
    printf("Valor saque: "); scanf("%d", &valor);
    printf("Notas 100: %i\n", valor / 100); valor %= 100;
    printf("Notas 50: %i\n", valor / 50); valor %= 50;
    printf("Notas 20: %i\n", valor / 20); valor %= 20;
    printf("Notas 10: %i\n", valor / 10); valor %= 10;
    printf("Notas 5: %i\n", valor / 5); valor %= 5;
    printf("Notas 1: %i\n", valor);

    // 26) Quadrado de Asteriscos
    int tam;
    printf("Tamanho do quadrado: "); scanf("%d", &tam);
    for(int l = 0; l < tam; l++) {
        for(int c = 0; c < tam; c++) printf("*");
        printf("\n");
    }
}