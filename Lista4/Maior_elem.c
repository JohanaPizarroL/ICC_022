#include <stdio.h>

int main(){
    
    float vetor[5], maior;
    int posicao, i;
/*Leitura dos numeros*/   
    for (i = 0; i < 5; i++){
        scanf("%f", &vetor[i]);
    }
/*Encontrando o maior numero positivo*/   
   if(i > 0){
       for(int i = 0; i < 5; i++){
            if(vetor[i] > maior){
                maior = vetor[i];
            }
        }
    }
    if(i < 0){
       for(i = 0; i < 5; i--){
            if(vetor[i] > maior){
                maior = vetor[i];
            }
        }
    }
    
/*Encontrando o maior numero negativo 

    for(i = 0; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    */
    
/*Encontrando a posicao do maior numero*/   
    if(i > 0){
        for(int i = 0; i < 5; i++){
            if (vetor[i] == maior){
                //maior = vetor[i];
                posicao = i;
            }
        }
    }
    /*Encontrando a posicao do maior numero negativo*/ 
    if(i > 0){

        for(int i = 0; i < 5; i++){
            if (vetor[i] == maior){
                maior = vetor[i];
                posicao = i;
            }
        }
    }

/*testar com: -_- 
10.3
0.4
1.2
5.8
4.2*/

    printf("%.1f\n%d\n", maior, posicao);

    return 0;
}