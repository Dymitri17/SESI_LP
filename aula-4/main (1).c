#include <stdio.h>

int main() {
    float notas[10] = {7.5, 8.0, 5.5, 9.0, 6.0, 4.5, 10.0, 8.5, 7.0, 6.5};
    float soma = 0, media;
    int acima = 0;

    for(int i = 0; i < 10; i++) soma += notas[i];
    media = soma / 10;

    printf("Media da turma: %.2f\n", media);
    printf("Notas acima da media: ");
    for(int i = 0; i < 10; i++) {
        if(notas[i] > media) {
            printf("%.1f ", notas[i]);
            acima++;
        }
    }
    printf("\nTotal de alunos acima da media: %d\n", acima);
    
}