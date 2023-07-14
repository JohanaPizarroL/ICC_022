//Troco de Bruxo

#include <stdio.h>

int main(void)
{
    int Vg, Vs, Vn, Pg, Ps, Pn, galeoes, sicles, nuques, t_galeoes, t_sicles, t_nuques, total;
    scanf("%d%d%d%d%d%d", &Vg, &Vs, &Vn, &Pg, &Ps, &Pn);

/*1 galeão vale 493 nuques
400 nuques valem 13 sicles e 23 nuques*/
    galeoes = (Pg - Vg) * 493;
    sicles = (Ps - Vs) * 29;
    nuques = Pn - Vn;
    total = galeoes + sicles + nuques;

    t_galeoes = total / 493;
    t_sicles = (total - (t_galeoes * 493)) / 29;
    t_nuques = total - ((t_galeoes * 493) + (t_sicles * 29));

    printf("Seu troco eh %d galeoes, %d sicles e %d nuques, Harry!", t_galeoes, t_sicles, t_nuques);

    return 0;
}