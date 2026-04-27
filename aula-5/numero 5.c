#include <stdio.h>

int main() {
    int numeros[5];
    for(int i = 0; i < 5; i++) {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", &numeros[i]);
    }
    printf("\nValores armazenados: ");
    for(int i = 0; i < 5; i++) {
        printf("%i ", numeros[i]);
    }
  
}