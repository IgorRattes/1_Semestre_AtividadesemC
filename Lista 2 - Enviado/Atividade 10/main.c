#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    //usando caracteres latinos
    setlocale (LC_ALL, "Portuguese");

    //declarando variaveis
    float resultado, numa, numb, operacao;

    //menu para o usuario selecionar a operacao aritmetica
    printf("Digite o numero da op��o referente a opera��o desejada \n");
    printf(" [1] SOMA \n");
    printf(" [2] SUBTRA��O \n");
    printf(" [3] MULTIPLICA��O \n");
    printf(" [4] DIVIS�O \n");
    scanf("%f", &operacao);

    //condicoes para realizar as operacoes
    if (operacao >=1 && operacao <=4){

    //solicitando os numeros a serem calculados
    printf(" Digite o primeiro numero: \n");
    scanf("%f", &numa);
    printf(" Digite o segundo numero: \n");
    scanf("%f", &numb);

        if (operacao == 1){
            resultado = numa+numb;
            printf("O resultado da soma � : %f", resultado);
        } else if (operacao == 2){
            resultado = numa-numb;
            printf("O resultado da subtracao � : %f", resultado);
        } else if (operacao == 3){
            resultado = numa*numb;
            printf("O resultado da multiplicacao � : %f", resultado);
        } else if (operacao == 4){
            resultado = numa/numb;
            printf("O resultado da divisao � : %f", resultado);
        }
    }else {
            printf("Opera��o invalida");
    }
    return 0;
}
