#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Far, Celc; //declarando as variaveis

    printf(" \n Digite o valor da temperatura em Farenheit : ");
    scanf("%f", &Far);                           //coletando os dados com o usuario

    Celc = (Far-32) * 5 / 9;  //fazendo a convercao das temperaturas

    printf("A Temperatura Farenheit %f em Graus Celsius e: %f", Far, Celc); //mostrando para o usuario o resultado
}
