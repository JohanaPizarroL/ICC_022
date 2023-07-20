#include <stdio.h>

int main () {
    
    int num;

    for (num = 10; num <= 100; num++){
/*Vendo se o num é primo */
        if (num % 2 != 0 && num % 3 != 0 && num % 4 != 0 && num % 5 != 0 && num % 6 != 0 && num % 7 != 0 && num % 8 != 0 && num % 9 != 0){
            printf("%d ", num);
        }
    }

    return 0;
}