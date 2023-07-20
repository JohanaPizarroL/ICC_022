#include <stdio.h>

int main(){
    
    float a = 0, b = 0;
    int c = 0;
    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%d", &c);
    
    if (c == 1)
        printf("%.1f\n", a + b);

    
    else if (c == 2)
        printf("%.1f\n", a - b);

    
    else if (c == 3)
        printf("%.1f\n", a * b);

    
    else if (c == 4)
        printf("%.1f\n", a / b);

    else
        printf("-1");

    return 0;
}
