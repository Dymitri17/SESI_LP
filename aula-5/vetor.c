#include <stdio.h>

int main() {
    int n;
    printf("Quantos elementos tera o vetor? ");
    scanf("%i", &n);

    int vetor[n];
    for(int i = 0; i < n; i++) {
        printf("Elemento %i: ", i);
        scanf("%i", &vetor[i]);
    }

    int moda = vetor[0];
    int maxContagem = 0;

    for(int i = 0; i < n; i++) {
        int contagemAtual = 0;
        
        // Conta quantas vezes o elemento vetor[i] aparece
        for(int j = 0; j < n; j++) {
            if(vetor[j] == vetor[i]) {
                contagemAtual++;
            }
        }

        // Se a contagem atual for maior que a recordista, atualizamos a moda
        if(contagemAtual > maxContagem) {
            maxContagem = contagemAtual;
            moda = vetor[i];
        }
    }

    printf("\nO numero que mais se repete e: %i (aparece % i vezes)\n", moda, maxContagem);

}