#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    //usando caracteres latinos
    setlocale (LC_ALL, "Portuguese");

    //declarando variaveis
    float resultado, numa, numb;
    char operacao;

    //menu para o usuario selecionar a operacao aritmetica
    printf("Digite o numero da op��o referente a opera��o desejada \n");
    printf(" [+] SOMA \n");
    printf(" [-] SUBTRA��O \n");
    printf(" [*] MULTIPLICA��O \n");
    printf(" [/] DIVIS�O \n");
    scanf("%s", &operacao);


    //solicitando os numeros a serem calculados
    printf(" Digite o primeiro numero: \n");
    scanf("%f", &numa);
    printf(" Digite o segundo numero: \n");
    scanf("%f", &numb);

    switch (operacao) {
    case '+':
        resultado = numa+numb;
        printf("O resultado da soma � : %f", resultado);
    break;
    case '-':
        resultado = numa-numb;
        printf("O resultado da subtracao � : %f", resultado);
    break;
    case '*':
        resultado = numa*numb;
        printf("O resultado da multiplicacao � : %f", resultado);
    break;
    case '/':
        resultado = numa/numb;
        printf("O resultado da divisao � : %f", resultado);
    break;
    default:
        printf("Operador Invalido");
    }
    return 0;
}
