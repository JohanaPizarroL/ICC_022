#include <stdio.h>

int main()
{
    int matriz[2][3] ;
    
// Ler uma matriz 2x3

    for (int i = 0; i < 2; i++){
       for (int j = 0; j < 3; j++){
//           printf("Digite um elemento[i][j]: ");
            scanf("%d", &matriz[i][j]);
        }
    }

//Imprimindo a matris transposta
    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 2; j++){
          
            printf("%d ", matriz[j][i]);
            
        }
        printf("\n");
    }
    
    return 0;
}
