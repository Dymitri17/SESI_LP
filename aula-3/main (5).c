#include <stdio.h>

void main() {
    int op, n;

    // 21) Menu
    do {
        printf("\n1-Ola\n2-Tudo bem?\n3-Sair\n");
        scanf("%d", &op);
        if(op == 1) printf("Ola!");
        else if(op == 2) printf("Tudo bem?");
    } while(op != 3);

    // 23) Divisíveis por 3 e 5 (1 a 100)
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0 && i % 5 == 0) printf("%d ", i);
    }

    // 24) Primo
    printf("Numero: "); scanf("%d", &n);
    int div = 0;
    for(int i = 1; i <= n; i++) if(n % i == 0) div++;
    if(div == 2) printf("E primo"); else printf("Nao e primo");
}