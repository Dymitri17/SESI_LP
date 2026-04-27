#include <stdio.h>

int main() {
    int num[10];
    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%i", &num[i]);
    }
    printf("\nNumeros pares: ");
    for(int i = 0; i < 10; i++) {
        if(num[i] % 2 == 0) {
            printf("%i ", num[i]);
        }
    }
  
}