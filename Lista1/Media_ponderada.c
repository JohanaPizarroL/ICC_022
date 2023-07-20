#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b;
    
    scanf("%f", &a);
    scanf("%f", &b);
   
    float media = (a*3.5+b*7.5)/(3.5+7.5);

    
    printf("%.5f", media);

    return 0;
}