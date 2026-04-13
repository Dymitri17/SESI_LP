#include <stdio.h>

int main() {
    int num[10] = {2, 3, 2, 2, 5, 2, 2, 8, 2, 1};
    int dominante = -1;

    for(int i = 0; i < 10; i++) {
        int cont = 0;
        for(int j = 0; j < 10; j++) {
            if(num[i] == num[j]) cont++;
        }
        if(cont > 5) {
            dominante = num[i];
            break;
        }
    }

    if(dominante != -1) printf("Valor dominante: %i\n", dominante);
    else printf("Nao existe valor dominante.\n");

    
}