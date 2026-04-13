#include <stdio.h>

int main() {
    float temp[7] = {25.5, 28.0, 31.2, 24.0, 22.5, 19.0, 26.5};
    float soma = 0, max, min;
    int acima = 0;

    max = min = temp[0];
    for(int i = 0; i < 7; i++) {
        soma += temp[i];
        if(temp[i] > max) max = temp[i];
        if(temp[i] < min) min = temp[i];
    }
    float media = soma / 7;

    for(int i = 0; i < 7; i++) if(temp[i] > media) acima++;

    printf("Media: %.1f | Max: %.1f | Min: %.1f\n", media, max, min);
    printf("Dias acima da media: %d\n", acima);
    
}