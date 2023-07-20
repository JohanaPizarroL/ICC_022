#include <stdio.h>

int main (){
    
    int n;
    scanf ("%d", &n);

    int divs, soma_d = 0;

    for (divs = 1; divs < n; divs++){

        if (n % divs == 0){

            soma_d = soma_d + divs;
        }
    }
        if (n == soma_d){
            printf("SIM\n");
        } else{
            printf("NAO\n");
        }

    return 0;
}