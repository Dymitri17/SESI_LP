#include <stdio.h>

int main() {
    float consumo, valor;

    scanf("%f", &consumo);

    if (consumo <= 100)
        valor = consumo * 0.50;
    else if (consumo <= 200)
        valor = consumo * 0.75;
    else
        valor = consumo * 1.00;

    printf("Valor: %.2f\n", valor);

   
}


