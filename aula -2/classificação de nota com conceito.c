#include <stdio.h>

int main() {
    float nota;
    scanf("%f", &nota);

    if (nota >= 9)
        printf("A\n");
    else if (nota >= 7)
        printf("B\n");
    else if (nota >= 5)
        printf("C\n");
    else
        printf("D\n");

    
}


