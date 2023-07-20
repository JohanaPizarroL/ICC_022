/* Palavra palindroma */

#include <stdio.h>
#include <string.h>


int main()
{
    char palavra[30], inversa[30];
    int i, tamanho;
    
    //printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    tamanho = strlen(palavra);
    
    for(i = 0; i < tamanho; i++){
        inversa[i] = palavra[tamanho - 1];
        tamanho--;         /* -- porque a string vai diminuindo */
    }
    

    //printf("Palavra normal: %s\nInvertida: %s\n", palavra, inversa);

    for(i = 0; i < tamanho; i++){
        if(palavra[i] == inversa[i]){
            
        }
    }

    if(palavra[i] ==  inversa[i]){
        printf("SIM\n");
    }else{
        printf("NAO\n");
    }
    return 0;
}