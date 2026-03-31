#include <stdio.h>

int main() {
    int a, b;
    scanf("%i %i", &a, &b);

    if (a % b == 0)
        printf("Multiplo\n");
    else
        printf("Nao multiplo\n");
        
}