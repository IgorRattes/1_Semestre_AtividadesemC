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
    printf("Digite o numero da opção referente a operação desejada \n");
    printf(" [+] SOMA \n");
    printf(" [-] SUBTRAÇÃO \n");
    printf(" [*] MULTIPLICAÇÃO \n");
    printf(" [/] DIVISÃO \n");
    scanf("%s", &operacao);


    //solicitando os numeros a serem calculados
    printf(" Digite o primeiro numero: \n");
    scanf("%f", &numa);
    printf(" Digite o segundo numero: \n");
    scanf("%f", &numb);

    switch (operacao) {
    case '+':
        resultado = numa+numb;
        printf("O resultado da soma é : %f", resultado);
    break;
    case '-':
        resultado = numa-numb;
        printf("O resultado da subtracao é : %f", resultado);
    break;
    case '*':
        resultado = numa*numb;
        printf("O resultado da multiplicacao é : %f", resultado);
    break;
    case '/':
        resultado = numa/numb;
        printf("O resultado da divisao é : %f", resultado);
    break;
    default:
        printf("Operador Invalido");
    }
    return 0;
}
