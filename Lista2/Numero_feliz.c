#include <stdio.h>

int main()
{
    int numero;
    scanf("%d", &numero);
    
    if( numero > 10 && numero < 99 && numero % 11 == 0){
    
        printf("FELIZ");
    
    }else{
        printf("TRISTE");}
    return 0;
}