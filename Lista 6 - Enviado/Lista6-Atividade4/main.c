#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
PROCEDIMENTO MOSTRA: MOSTRA O NOME DA VARIAVEL ENDEREÇO E VALOR
ENTRADA: POR REFERENCIA 3 INTEIROS a4, b4 e c4
*/
void mostra (int *a4, int *b4, int *c4){
    printf("\n NOME_VARIAVEL /      ENDEREÇO      /      VALOR    ");
    printf("\n       A       /       %x       /       %d      ", a4, *a4);
    printf("\n       B       /       %x       /       %d      ", b4, *b4);
    printf("\n       C       /       %x       /       %d      ", c4, *c4);
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //declarando variaveis
    int a4, b4, c4;
    //perguntando o valor para as quatro variaveis
    printf("\n Digite tres numeros separados por espaço: ");
    scanf("%d %d %d", &a4, &b4, &c4);
    //chamando o procedimento dando as variaveis de referencia
    mostra(&a4, &b4, &c4);
    return 0;
}

