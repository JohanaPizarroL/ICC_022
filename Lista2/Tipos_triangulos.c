//tipos de triangulos

#include <stdio.h>

int main()
{
    float a, b, c, maior;
    printf("Digite os lados de um triangulo: ");

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
/*Ordenando os numeros, tamanho de cada lado*/
    if (0 < a && 0 < b && 0 < c){
        if (b > a && b > c){
            maior = a;
            a = b;
            b = maior;
            
        }else if (c > b && c > a){
            maior = a;
            a = c;
            c = maior;
        }
        
    
/* Verificando lados dos triangulos e classificando em tipos */

        if (a >= b + c){
            printf("NAO FORMA TRIANGULO");
        }
        else if ((a*a) == (b*b) + (c*c)){
            printf("TRIANGULO RETANGULO");
        }
        else if ((a*a) > (b*b) + (c*c)){
            printf("TRIANGULO OBTUSANGULO\n");

            if ((a == b || b == c || a == c ) && (a != b || b != c || a != c)){
                printf("TRIANGULO ISOSCELES");
            }
        }
        else if ((a*a) < (b*b) + (c*c)){

            printf("TRIANGULO ACUTANGULO\n");
            if ((a == b && b == c)){
                printf("TRIANGULO EQUILATERO");
            }
            else if ((a == b || b == c || a == c ) && (a != b || b != c || a != c)){
            printf("TRIANGULO ISOSCELES");
            }
        }   
    }
  
    return 0;
}


