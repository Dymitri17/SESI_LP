#include <stdio.h>

void main() {
    int i;

    // 1) Números de 1 a 10 usando FOR
    for(i = 1; i <= 10; i++) printf("%d ", i);
    
    // 2) Números de 1 a 10 usando WHILE
    i = 1;
    while(i <= 10) { printf("%d ", i); i++; }

    // 3) Números de 1 a 10 usando DO...WHILE
    i = 1;
    do { printf("%d ", i); i++; } while(i <= 10);

    // 4) Ordem decrescente (10 até 1)
    for(i = 10; i >= 1; i--) printf("%d ", i);
}