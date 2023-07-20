#include <stdio.h>

int main()
{
    int numero, c_par = 0, c_impar = 0;
    
    scanf("%d", &numero);
    
    while (numero > 0){
        
        if (numero % 2 == 0){
            c_par++;
            
        }else{
            c_impar++;
        }

    scanf("%d", &numero);
    }
    printf("%d\n", c_impar );
    printf("%d\n", c_par);

    return 0;
}
