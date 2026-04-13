#include <stdio.h>

int main() {
    int v[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int cres = 1, decres = 1;

    for(int i = 0; i < 11; i++) {
        if(v[i] > v[i+1]) cres = 0;
        if(v[i] < v[i+1]) decres = 0;
    }

    if(cres) printf("Ordem: Crescente\n");
    else if(decres) printf("Ordem: Decrescente\n");
    else printf("Ordem: Desordenada\n");

}