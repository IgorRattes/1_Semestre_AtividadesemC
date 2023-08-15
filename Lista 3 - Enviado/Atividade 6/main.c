#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando variaveis
    int fat=1, num;

    //solicitando um numero para o usuario
    printf("Digite um numero: \n");
    scanf("%d",&num);

    //laco for para calcular o fatorial
    for (int cont = 1; cont <= num; cont++){
        fat=fat*cont;
    }

    // mostrando para o usuario o resultado
    printf("Fatorial de %d e %d", num, fat);
    return 0;
}
