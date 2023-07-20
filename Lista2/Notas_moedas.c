#include <stdio.h>

int main()
{
    int total, resto, cem, cinquenta, vinte, dez, cinco, dois, um;
    scanf("%d", &total);
    
    cem = total / 100;
    resto = total % 100;
    
    cinquenta = resto / 50;
    resto = resto % 50;
    
    vinte = resto / 20;
    resto = resto % 20;
    
    dez = resto / 10;
    resto = resto % 10;
    
    cinco = resto / 5;
    resto = resto % 5;
    
    dois = resto / 2;
    resto = resto % 2;
    
    um = resto / 1;
    
    printf("%d nota(s) de 100, %d nota(s) de 50, %d nota(s) de 20, %d nota(s) de 10, %d nota(s) de 5, %d nota(s) de 2 e %d moeda(s) de 1. ", cem, cinquenta, vinte, dez, cinco, dois, um);
   return 0;
}

