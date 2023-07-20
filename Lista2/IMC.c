#include <stdio.h>

int main()
{
    float peso, altura, IMC;
    
    scanf("%f", &altura);

    scanf("%f", &peso);
    
    IMC = peso / ( altura * altura);
    
    if (IMC < 20){
        printf("Abaixo do peso");
    }
    else if (IMC > 20 && IMC < 25){
        printf("Peso Normal");
    }
    else if (IMC > 25 && IMC < 30){
        printf("Sobre Peso");
    }
    else if (IMC > 30 && IMC < 40){
        printf("Obeso");
    }
    else if (IMC >= 40){
        printf("Obeso Morbido");
    }

    return 0;
}
