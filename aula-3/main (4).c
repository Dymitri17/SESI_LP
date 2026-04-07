#include <stdio.h>

void main() {
    int n, soma = 0, cont = 0, maior = -9999;
    
    // 16) Soma até digitar 0
    do {
        scanf("%i", &n); soma += n;
    } while(n != 0);

    // 17) Contar até negativo
    do {
        scanf("%d", &n); if(n >= 0) cont++;
    } while(n >= 0);

    // 19) Maior número até 999
    while(n != 999) {
        scanf("%d", &n);
        if(n > maior && n != 999) maior = n;
    }

    // 20) Senha
    int senha;
    do {
        printf("Senha: "); scanf("%d", &senha);
    } while(senha != 1234);
}