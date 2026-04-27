#include <stdio.h>

int main() {
    int v[8], soma = 0;
    for(int i = 0; i < 8; i++) {
        printf("Entre com o %iº valor para somar: ", i + 1);
        scanf("%i", &v[i]);
        soma += v[i];
    }
    printf("\n soma total e: %i", soma);
    
}