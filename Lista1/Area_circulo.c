#include <stdio.h>

int main()
{
    double raio;
    
    double pi = 3.14159;

    scanf("%lf", &raio);
  
        double area = pi * (raio * raio);
        
        printf("%.4lf", area);

    return 0;
}