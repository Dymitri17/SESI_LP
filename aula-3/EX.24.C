#include <stdio.h>

int main() {
    int num, i, ehPrimo = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num <= 1) {
        ehPrimo = 0; // 0 e 1 não são primos
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo == 1) {
        printf("%d é primo.\n", num);
    } else {
        printf("%d não é primo.\n", num);
    }
}