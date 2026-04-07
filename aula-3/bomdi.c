#include <stdio.h>

void main(){
    for(int i=0; i < 5; i=i+1){
        printf("%i bom dia! \n", i);
    }
    
    int y =0;
    
    while(y < 5){
        printf("%i boa tarde! \n", y);
        y++;
    }
    
    int x=0;
    do{
        printf("%i boa noite! \n", x);
        x--;
    }while(x > 0);
}