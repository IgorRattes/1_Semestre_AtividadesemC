#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2, n3, soma, media, produto; //declarando as variaveis

    printf("Digite o primeiro numero\n");
    scanf("%f", &n1);
    printf("Digite o segundo Numero\n");  //solicitando as informacoes ao usuario
    scanf("%f", &n2);
    printf("Digite o terceiro numero\n");
    scanf("%f", &n3);

    soma = n1+n2+n3;
    media = soma/3;        //realizando os calculos
    produto = n1*n2*n3;

    printf("\n A Soma e: %f \n A media e %f \n O produto e: %f", soma, media, produto); //mostrando o resultado
}
