//Transformando segundos em hora

#include <stdio.h>

int main()
{
    int s, horas, minutos, segundos;
    printf("Transformando segundos em horas.\n");
    printf("Digite um numero de segundos: ");
    scanf("%d", &s);

    if(s >= 0 && s < 86400){
        horas = s /3600;
        minutos = (s % 3600) / 60;
        segundos = (s % 3600) % 60;
        }
         printf("%02d:%02d:%02d",horas, minutos, segundos);

    return 0;
}

