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
    printf("Digite o numero da opção referente a operação desejada \n");
    printf(" [1] SOMA \n");
    printf(" [2] SUBTRAÇÃO \n");
    printf(" [3] MULTIPLICAÇÃO \n");
    printf(" [4] DIVISÃO \n");
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
            printf("O resultado da soma é : %f", resultado);
        } else if (operacao == 2){
            resultado = numa-numb;
            printf("O resultado da subtracao é : %f", resultado);
        } else if (operacao == 3){
            resultado = numa*numb;
            printf("O resultado da multiplicacao é : %f", resultado);
        } else if (operacao == 4){
            resultado = numa/numb;
            printf("O resultado da divisao é : %f", resultado);
        }
    }else {
            printf("Operação invalida");
    }
    return 0;
}
