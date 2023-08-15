#include <stdio.h>
#include <stdlib.h>
/*
PROCDIMENTO: recebe três números e “retorna” por referência o maior e menor.
ENTRADA: 3 numeros inteiros por referencia *mai1, *men1 e *c1
SAIDA: procedimento não tem saida
*/
void maimen (int *mai1, int *men1, int *c1){
    //verificando qual o menor numero
    if(*mai1 < *men1){
        if(*mai1 < *c1)
            *men1 = *mai1;
        else
            *men1= *c1;
    }
    else{
        if(*men1 < *c1)
            *men1 = *men1;
        else
            *men1 = *c1;
    }

    // verificando qual o maior
    if(*mai1 > *men1){
        if(*mai1 > *c1)
            *mai1 = *mai1;
        else
            *mai1 = *c1;
    }
    else{
        if(*men1 > *c1)
            *mai1 = *men1;
        else
            *mai1 = *c1;
    }
}
int main()
{
    //declarando variaveis
    int mai1, men1, c1;
    //coletando os dados com o usuario
    printf("\nDigite 3 numeros separados por espaço: ");
    scanf("%d %d %d", &mai1, &men1, &c1);
    //chamando a função dando as variaveis como referência
    maimen(&mai1, &men1, &c1);
    //mostrando o resultado para o usuario
    printf("Maior %d  /  Menor %d", mai1, men1);
    return 0;
}
