#include <stdio.h>

int main() {
    float num;
    scanf("%f", &num);

    if (num > 0)
        printf("Positivo\n");
    else if (num < 0)
        printf("Negativo\n");
    else
        printf("Zero\n");

}
