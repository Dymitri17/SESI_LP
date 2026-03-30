#include <stdio.h>

int main() {
    int n1, n2, soma;

    printf("Digite o primeiro número: ");
    scanf("%i", &n1);

    printf("Digite o segundo número: ");
    scanf("%i", &n2);

    soma = n1 + n2;

    printf("A soma é: %i", soma);

    return 0;
}


///


#include <stdio.h>

int main() {
   float n1, n2, soma;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    soma = n1 + n2;

    printf("A soma é: %2.f", soma);

    return 0;
}