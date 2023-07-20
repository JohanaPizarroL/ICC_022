#include <stdio.h>

int main(){

    int numero, razao, i = 0, sequencia;

    scanf ("%d\n%d", &numero, &razao);

    while(i < 6){
        
        sequencia = numero + i *  razao;
        printf("%d ", sequencia);
        i++;
    }

  return 0;
}