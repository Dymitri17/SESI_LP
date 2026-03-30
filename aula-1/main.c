#include <stdio.h>

int main(){
    int ano;
    
    printf("Digite seu ano de nascimento: ");
    scanf("%i", &ano);
    
    printf("você tem %i ano", 2026 - ano);
}