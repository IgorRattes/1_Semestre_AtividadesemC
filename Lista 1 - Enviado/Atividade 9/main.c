#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float vt, capital, txdejuros, tempo; //declarando as variaveis

    printf(" \n Digite o valor do investimento inicial, a quantidade de meses e a taxa de juros mensal em valor de porcentagem : ");
    scanf("%f %f %f", &capital, &tempo, &txdejuros);  //coletando os dados com o usuario

    txdejuros = txdejuros/100;
    vt = capital*pow((1+txdejuros),tempo); //calculos para descobrir o valor final do investimento

  printf("O valor final do investimento e de: %.2lf", vt); //mostrando para o usuario o resultado desejado
}
