//Número par ou impar

#include <stdio.h>

int main(){
    
    int x;
        printf("Digite um numero: ");
        scanf("%d", &x);

    if (x>0){
        
        if (x % 2 == 0){
            printf("PAR");
        }else if(x % 2 != 0){
            printf("IMPAR");}
        }else{
            printf("INVALIDO");
        }

    return 0;
}
