#include <stdio.h>

int main ()
{
    char nome[9];
    int i = 0; 

    printf("Digite seu nome: ");
    scanf("%s", nome);

    
    while (nome[i] != '\0') {
        i++;
    }

    printf("\nNome: %s", nome);
    printf("\nQuantidade de letras: %d", i); 


}