#include <stdio.h>

int main() {
    float valor, final;

    scanf("%f", &valor);

    if (valor > 100)
        final = valor * 0.9;
    else
        final = valor * 0.95;

    printf("%.2f\n", final);

}