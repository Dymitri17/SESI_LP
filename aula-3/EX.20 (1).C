#include <stdio.h>

int main() {
    int senha;
    int senha_correta = 1234;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != senha_correta) {
            printf("Senha incorreta! Tente novamente.\n");
        }

    } while (senha != senha_correta);

    printf("Senha correta! Acesso liberado.\n");
}