#include <stdio.h>

int main(){

    int i, razao, num;

    scanf ("%d\n%d", &num, &razao);

    for (i = 0; i < 8; i++){
     printf("%d ", num);
     num = num * razao;
    }

  return 0;
}