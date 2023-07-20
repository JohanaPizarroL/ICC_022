#include <stdio.h>

int main()
{
    int idade;
    
    scanf("%d", &idade);
    
    int anos = idade / 365;
    
    int meses = (idade % 365) / 30;
    
    int dias = (idade % 365) % 30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)", anos, meses, dias);

    return 0;
}
