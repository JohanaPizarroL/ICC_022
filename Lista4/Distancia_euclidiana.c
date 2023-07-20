#include <stdio.h>
#include <math.h>

int main()
{
    float distancia, soma = 0, d_total;
    float vetor1 [3];
    float vetor2 [3];
    
    for(int i = 0; i < 3; i++){

        scanf("%f", &vetor1[i]);
    }
    
    for(int i = 0; i < 3; i++){
        scanf("%f", &vetor2[i]);
    }
    for(int i = 0; i < 3; i++){
        distancia =  pow(vetor1 [i] - vetor2 [i], 2) ;
        soma = soma + distancia;
    }
    d_total = sqrt(soma);
    printf("%f", d_total);

    return 0;
}