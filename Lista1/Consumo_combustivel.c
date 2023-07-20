#include <stdio.h>

int main()
{
    int x;
    float y;
    
    scanf("%d", &x);
    scanf("%f", &y);
    
    float total = x / y;
    
    printf("%.3f\n", total);

    return 0;
}
