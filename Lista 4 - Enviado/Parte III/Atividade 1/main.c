#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float soma (float n){                                           //funcao para ser realizada quando o programa necessitar
    float s;

    while(n>0){
        s=s+1/n;                                                //calculo do somatorio
        printf("\n%f", s);
        n--;
    }

    return s;                                                   //retornando o resultado para o programa
}
int main()
{
    int n;

    printf("Digite um numero: \n");                             //solicitando um numero para o usuario
    scanf ("%d",&n);
    printf("\n \n O resultado final foi %f \n", soma(n));       //chamando a funcao soma e mostrando o retorno para o usuario

}
