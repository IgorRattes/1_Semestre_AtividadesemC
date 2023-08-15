#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando variaveis
    int soma, y=70;

    //funcao repeticao para mostrar todos os numeros em ordem decrescente
    while(y >= 40 && y <= 70){
        printf("%d\n", y);
        soma = soma+y;
        y=y-1;
    }

    //mostrando o resultado da soma
    printf("A soma dos numeros e: %d\n", soma);
    return 0;
}
