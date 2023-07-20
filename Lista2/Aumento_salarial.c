#include <stdio.h>

int main(){

    float salario, incremento, novo_salario;
    
    scanf(" %f", &salario);
    
    if (salario <= 400.0){
        incremento = (salario * 0.15);
        novo_salario = salario + incremento;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", novo_salario, incremento);
}
    else if (salario <= 800.0){
        incremento = (salario * 0.12);
        novo_salario = salario + incremento;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", novo_salario, incremento);
}
    else if (salario <= 1200.0){
        incremento = (salario * 0.10);
        novo_salario = salario + incremento;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", novo_salario, incremento);
}
    else if (salario <= 2000.0){
        incremento = (salario * 0.07);
        novo_salario = salario + incremento;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", novo_salario, incremento);
}
    else
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", salario + (salario*0.4), salario * 0.04);

    return 0;
}
