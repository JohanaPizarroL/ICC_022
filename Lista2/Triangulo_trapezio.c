//Triângulo ou Trapézio

#include <stdio.h>

int main(){

    float a, b, c, perimetro, area_t;
    
    printf("Digite os lados a, b, c: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
        
    if (a >= b + c){
        area_t = ((a + b)*c ) / 2;
        printf("Area = %.1f", area_t);
    }else{
        perimetro = a + b + c;
        printf("Perimetro = %.1f", perimetro);
        }

    return 0;
}