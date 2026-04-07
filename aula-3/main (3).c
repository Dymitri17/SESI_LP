#include <stdio.h>
void main() {
    int n, i, fat = 1, cont = 0, soma = 0;

    // 11) Fatorial
    printf("Fatorial de: "); scanf("%d", &n);
    for(i = 1; i <= n; i++) fat *= i;
    printf("Resultado: %d", fat);

    // 12) Contar pares 1 a 50
    for(i = 1; i <= 50; i++) if(i % 2 == 0) cont++;
    
    // 13) Somar ímpares 1 a 100
    for(i = 1; i <= 100; i++) if(i % 2 != 0) soma += i;

    // 14) Contagem regressiva
    printf("Comecar regressiva em: "); scanf("%d", &n);
    while(n >= 0) { printf("%d ", n); n--; }
}