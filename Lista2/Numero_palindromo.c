//Número palindromo

#include <stdio.h>

int main()
{
    int numero, centena, resto;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (numero > 100 && numero < 999){
        
        centena = numero / 100;
        resto = numero % 100;
        
        resto = numero % 10;
        
            if (centena == resto){
                printf("SIM");
            }else{
                printf("NAO");
            }
    }else {
        printf("INVALIDO");
    }

    return 0;
}
