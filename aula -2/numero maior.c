#include <stdio.h>

int main() {
    int a, b;
    scanf("%i %i", &a, &b);

    if (a > b)
        printf("%i\n", a);
    else if (b > a)
        printf("%i\n", b);
    else
        printf("Iguais\n");

}