#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    
    printf("qual a primeira nota:");
    scanf("%f", &n1); 
    
    printf("qual a segunda nota:");
    scanf("%f", &n2);
    
    printf("qual a terceira nota:");
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3) /3;
    
    if(media >= 7.0){
        printf("Aprovado");
    }else if (media <= 5.0){
        printf("Reprovado");
    }else{
        printf("Recuperação");
    }
 
    
}
