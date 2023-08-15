#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, ni; //declarando as variaveis

    printf("Digite um Numero inteiro \n");
    scanf("%d", &n); //le o numero digitado pelo usuario

    ni = n++; //1 declara a ni o valor digitado plo usuario - 2 acrescenta em n + 1

    printf("O numero seguinte do %d e %d", ni, n); //mostra ao usuario o resultado desejado
}
