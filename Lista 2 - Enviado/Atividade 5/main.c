#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando variaveis
    int numero;

    //coletando os dados com o usuario
    printf("Digite um numero Inteiro: \n");
    scanf ("%d", &numero);

    //verificando as condições e passando para o usuario o resultado
    if (numero>0){
        printf("1");
    }
    else if (numero <0){
        printf ("-1");
    }
    else {
        printf("0");
    }
    return 0;
}
