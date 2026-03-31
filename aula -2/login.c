#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20], senha[20];

    scanf("%s %s", usuario, senha);

    if (strcmp(usuario, "admin") == 0 && strcmp(senha, "1234") == 0)
        printf("Login bem-sucedido\n");
    else
        printf("Login invalido\n");

}
