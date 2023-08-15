#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float hora, salariomin, salario, horatrab, imposto, liquido; //declarando as variaveis

    printf(" \n Digite o valor do salario minimo e a quantidade de horas trabalhadas: ");
     scanf("%f %f", &salariomin, &hora);  //coletando os dados com o usuario

    horatrab = (salariomin/10);
    salario = horatrab*hora;
    imposto = (salario*5/100); // calculos para chegar ao resultado desejado
    liquido = salario-imposto;


  printf("O valor do Salario a receber e: %.2lf o valor do imposto foi de %.2lf ", liquido, imposto); //mostrando para o usuario o desejado
}
