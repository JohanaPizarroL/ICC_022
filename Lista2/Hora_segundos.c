#include <stdio.h>

int main()
{
    int H, M, S,hora, minuto, hora_total;
    
    scanf("%d,", &H);
    scanf("%d,", &M);
    scanf("%d,", &S);
    
    if ((0 <= H && H < 24) && (0 <= M && M<= 60) && (0 <= S && S <= 60)){
        hora = H * 3600;
        minuto = M * 60;
    
        hora_total = hora + minuto + S;
        
        printf("%d ", hora_total);
    }else {
        printf("HORARIO INVALIDO");
    }
    return 0;
}
