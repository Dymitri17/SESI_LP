#include <stdio.h>

int main() {
    int idades[15] = {12, 25, 65, 18, 40, 70, 15, 33, 59, 61, 22, 10, 45, 80, 19};
    int j = 0, a = 0, i_count = 0;

    for(int i = 0; i < 15; i++) {
        if(idades[i] <= 17) j++;
        else if(idades[i] <= 59) a++;
        else i_count++;
    }

    printf("Jovens: %i | Adultos: %i | Idosos: %i\n", j, a, i_count);
    
    if(j > a && j > i_count) printf("Maior grupo: Jovens\n");
    else if(a > j && a > i_count) printf("Maior grupo: Adultos\n");
    else printf("Maior grupo: Idosos\n");

}