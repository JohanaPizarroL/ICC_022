/* Removendo vogais */#include <stdio.h>
#include <string.h>

int main()
{
    // inicialização dos vetores para limpeza de sujeira
    char frase[20], sem_vogal[20];

    int tamanho1;

    //printf("Digite uma palavra:");
    
    scanf("%s", frase);
    
    tamanho1 = strlen(frase);


/* retirando vogais */

    int i, qnt_vogal = 0;

    for (i = 0; i < tamanho1; i++) {

        if (strchr("aeiouAEIOU", frase[i]) != NULL) {        // strchr procura um char em um string, NULL se nao houver
        
            qnt_vogal++;
        } else {
            sem_vogal[i - qnt_vogal] = frase[i];
        }
    }

    printf("%s", sem_vogal);

    return 0;
}