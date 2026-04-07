#include <stdio.h>
void main() {
    int n, n2, i;

    // 8) Tabuada
    printf("Digite um numero: "); scanf("%d", &n);
    for(i = 1; i <= 10; i++) printf("%d x %d = %d\n", n, i, n*i);

    // 9) 1 até N
    printf("Contar ate quanto? "); scanf("%d", &n);
    for(i = 1; i <= n; i++) printf("%d ", i);

    // 10) Entre dois números
    printf("Digite dois numeros: "); scanf("%d %d", &n, &n2);
    for(i = n; i <= n2; i++) printf("%d ", i);
}