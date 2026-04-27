#include <stdio.h>

int main() {
    int vet[10], contPositivos = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite o valor da posicao %i: ", i);
        scanf("%i", &vet[i]);
        if(vet[i] > 0) {
            contPositivos++;
        }
    }
    printf("\nQuantidade de numeros positivos: %i", contPositivos);

}