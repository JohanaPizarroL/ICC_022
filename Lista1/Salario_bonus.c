#include <stdio.h>

int main()
{
    double salario;
    double vendas;

    scanf("%lf", &salario);
    
    scanf("%lf", &vendas);
    
    double por_vendas = (vendas * 0.15);
    
    double result = por_vendas + salario;
    
    printf("%.2lf", result);

    return 0;
}
