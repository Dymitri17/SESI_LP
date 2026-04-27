#include <stdio.h>

int main() {
    int valores[6], maior, menor;
    for(int i = 0; i < 6; i++) {
        printf("Informe o %iº valor: ", i + 1);
        scanf("%i", &valores[i]);
        
        if(i == 0) { // Inicializa na primeira volta
            maior = valores[i];
            menor = valores[i];
        } else {
            if(valores[i] > maior) maior = valores[i];
            if(valores[i] < menor) menor = valores[i];
        }
    }
    printf("\nMaior valor: %i", maior);
    printf("\nMenor valor: %i", menor);
    
}