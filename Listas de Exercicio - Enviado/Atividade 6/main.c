#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, peso, imc; //declarando as variaveis

    printf(" \n Digite o valor da sua altura: ");
     scanf("%f", &altura);                           //coletando os dados com o usuario
    printf(" \n Digite o valor do seu peso: ");
     scanf("%f", &peso);

    altura = pow(altura, 2); //calculando altura ao quadrado
    imc = peso/altura;      //calculando o imc

    printf("Seu IMC e: %f", imc); //mostrando para o usuario o resultado
}
