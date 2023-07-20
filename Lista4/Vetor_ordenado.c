/*Vetor Ordenado*/
#include <stdio.h>

int main()
{
    int n,i, j, aux; /*A variavel aux, nao é um vetor auxiliar, somente guarda o indice do vetor*/

/*    printf("Digite valores para preencher o vetor: ");*/
    scanf("%d", &n);
    
    int vetor[n];

    
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }


/*    printf("Vetor nao ordenado\n");
    for(i = 0; i < n; i++){
        printf("%d  ", vetor[i]);
    }*/
    /* ordenando o vetor, elemento por elemento*/
    for(j = 1; j < n; j++){    /* for para que repita o numero de vezes que o vetor tem de elementos*/

        for(i = 0; i < n-1; i++){
            /*Comparando o elemento do indice um e do indice dois*/
            if (vetor[i] < vetor[i + 1]){
                /*Se o indice0 for maior que o indice1, devemos trocar de lugar, o maior numero vai para do lado direito */
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
                
        }
    }
    
/*    printf("Vetor ordenado\n");*/
     for(i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }

    
    
    return 0;
}