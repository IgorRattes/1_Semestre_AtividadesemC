#include <stdio.h>
#include <stdlib.h>

/*
Funcao
Retorno tipo inteiro
Nome cubo
parametros um numero qualquer n do tipo inteiro
retorno do tipo inteiro
*/
int cubo (int n){
    int res=1;
    for(int i=1; i<=3; i++)
        res=res*n;
    return res;
}
int main()
{
    int num;                        //declarando variaveis
    printf("Digite um Numero\n");
    scanf("\n%d", &num);            //coletando um numero qualquer n
    printf("Cubo %d", cubo(num));   //imprimindo o retorno da funcao cubo
    return 0;
}
