#include <stdio.h>

int main()
{
    int par = 0, impar = 0, numero;
    scanf("%d", &numero);
    
    int vetor[numero];
        for(int i = 1; i <= numero; i++){
            scanf("%d", &vetor[i]);
            
            if( vetor[i] % 2 == 0){
                par = par + vetor[i];
            }else{
                impar = impar + vetor[i];
            }
            
        }
        printf("%d\n", par );
        printf("%d\n",impar );

    
    
    return 0;
}
