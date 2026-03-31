#include <stdio.h>

int main() {
    float temp;
    scanf("%f", &temp);

    if (temp < 15)
        printf("Frio\n");
    else if (temp <= 25)
        printf("Agradavel\n");
    else
        printf("Quente\n");

 
}




