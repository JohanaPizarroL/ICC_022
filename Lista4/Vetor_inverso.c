/* IMPRIMIR VETOR EM ORDEM INVERSA */
#include <stdio.h>

int main()
{
    int vetor[100]={}, i, j;
    
/*Leitura de numeros*/
    for(i = 0; i < 100; i++){
//        printf("Numero: ");
        scanf("%d", &vetor[i]);
        
    /*Parar a leitura se for 0 eu neg.*/
        if(vetor[i] <= 0){
            break;
        }
    }
    
/*Imprimindo vetores na inversa*/
//printf("Imprimindo vetores na inversa\n");

    if(i > 0){
        
        for(j = i-1; j >= 0; j--){
        printf("%d\n", vetor[j]);
        }
    }
    
    return 0;
}