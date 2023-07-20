#include <stdio.h>

int main()
{
    int determinante = 0, mat[3][5];

// Digite os valores da matriz 
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

// Copiando as duas primeiras colunas da matriz 
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            mat[i][j + 3] = mat[i][j];
        }
    }
        

    int produtos[6];
    for (int i = 0; i < 6; i++){
        produtos[i] = 1;
    }

// Fazendo os produtos
    for (int i = 0; i < 6; i++){
       for (int j = 0; j < 3; j++)
            if (i < 3){
                produtos[i] *= mat[j][i + j];
            }else{
                produtos[i] *= mat[j][i - j - 1];
            } 
    }
    for (int i = 0; i < 6; i++){
        
        if (i < 3){
            determinante += produtos[i];
        }else{
            determinante -= produtos[i];
        }
    }

    printf("%d\n", determinante);

    return 0;
}
