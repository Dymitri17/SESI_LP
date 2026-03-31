#include <stdio.h>

int main() {
    
    int idade;
    
    printf("qual é sua idade");
    scanf("%i", &idade);
    
    if(idade<= 12){
        printf("criança");
    }
    else if(idade<= 17){
        printf("adolescente");
    }
         else if(idade<= 59){
        printf("adulto");
    }

    else{
        printf("idoso");
    }
}
    
    

    