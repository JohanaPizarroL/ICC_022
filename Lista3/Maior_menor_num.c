#include <stdio.h>

int main()
{
    int numero, maior, menor, i = 0;
    
    maior = 0;
    menor = 0;
    
    scanf("%d", &numero);
    
    while(numero > 0){
    
        if(numero > maior){
            
            maior = numero;
            
        }
        
        
        if(numero < menor || i == 0){
            menor = numero;
        }
    i++;
    

    scanf("%d", &numero);
    }
    
    printf("%d\n", maior);
    printf("%d", menor);

    return 0;
}
