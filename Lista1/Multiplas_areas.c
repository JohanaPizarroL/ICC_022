//Multiplas areas

#include <stdio.h>

int main()
{
    float a;
    float b;
    float c;
    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    float triangulo = (a*c) /2;
        printf("%.3f \n", triangulo); 
        
    float circulo = 3.14159 * (c*c);
        printf("%.3f \n", circulo);

    float trapezio = (a+b) * (c/2);
        printf("%.3f \n", trapezio);
 
    float quadrado = b*b;
        printf("%.3f \n", quadrado);

    float retangulo = a*b;
        printf("%.3f \n", retangulo);

    return 0;
}
