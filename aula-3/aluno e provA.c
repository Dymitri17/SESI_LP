#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite o numero de alunos: ");
    scanf("%i", &n);

    // Declaração das variáveis
    char nomes[n][50];
    int qtdProvas[n];
    float notas[100], media[n], maior[n], menor[n];
    float soma, mediaTurma = 0;

    int i, j;

    // Cadastro dos alunos
    for(i = 0; i < n; i++) {
        printf("\nAluno %i:\n", i + 1);

        printf("Nome: ");
        scanf("%s", nomes[i]);

        printf("Quantidade de provas: ");
        scanf("%i", &qtdProvas[i]);

        soma = 0;

        for(j = 0; j < qtdProvas[i]; j++) {
            printf("Nota %i: ", j + 1);
            scanf("%f", &notas[j]);

            soma += notas[j];

            if(j == 0) {
                maior[i] = menor[i] = notas[j];
            } else {
                if(notas[j] > maior[i]) maior[i] = notas[j];
                if(notas[j] < menor[i]) menor[i] = notas[j];
            }
        }

        media[i] = soma / qtdProvas[i];
        mediaTurma += media[i];
    }

    // Média da turma
    mediaTurma /= n;

    // Encontrar melhor e pior aluno
    int melhor = 0, pior = 0;

    for(i = 1; i < n; i++) {
        if(media[i] > media[melhor]) melhor = i;
        if(media[i] < media[pior]) pior = i;
    }

    // Relatório
    printf("\n===== RELATORIO =====\n");

    for(i = 0; i < n; i++) {
        printf("%s - Media: %.2f | Maior: %.2f | Menor: %.2f | ",
               nomes[i], media[i], maior[i], menor[i]);

        if(media[i] >= 7.0)
            printf("Aprovado\n");
        else if(media[i] >= 5.0)
            printf("Recuperacao\n");
        else
            printf("Reprovado\n");
    }

    printf("\nMedia da turma: %.2f\n", mediaTurma);
    printf("Melhor aluno: %s\n", nomes[melhor]);
    printf("Pior aluno: %s\n", nomes[pior]);


}