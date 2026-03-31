#include <stdio.h>

int main() {
    int ano;
    scanf("%i", &ano);

    if (ano % 4 == 0)
        printf("Ano de eleicao\n");
    else
        printf("Nao e ano de eleicao\n");


}
