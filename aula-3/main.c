void main() {
    int i, soma = 0;

    // 5) Pares de 1 até 20
    for(i = 2; i <= 20; i += 2) printf("%d ", i);

    // 6) Ímpares de 1 até 20
    for(i = 1; i <= 20; i += 2) printf("%d ", i);

    // 7) Soma de 1 até 10
    for(i = 1; i <= 10; i++) soma += i;
    printf("Soma: %d", soma);
}