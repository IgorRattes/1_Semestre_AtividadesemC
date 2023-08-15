#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
FUN��O DIVISORES: verifica se o numero � primo e caso n�o seja salva nos ponteiros de referencia o maximo e o minimo divisor comum
ENTRADA: int n, *max e *min
SAIDA: tipo inteiro 0 ou 1
*/
int divisores (int n7, int *max7, int *min7){
    int cont7;
    //verificando se o numero � primo caso n�o seja vai salvar o maximo e o minimo divisor do numero nas variaveis de referencia
    for (int i7=2; i7<n7; i7++){
        if(n7%i7==0){
            cont7++;
            if(i7>*max7){
                *max7=i7;
            }
            if(i7<*min7){
                *min7=i7;
            }
        }
    }
    //retornando 0 caso seja primo e 1 se n�o for
    if(cont7==0){
        return 0;
    }
    return 1;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //declarando variaveis
    int primo7, max7=0, min7, n7;
    //perguntando o numero para o usuario
    printf("Digite um N�mero: ");
    scanf("%d", &n7);
    min7 = n7;
    //chamando a fun��o passando n e o max e min por referencia
    primo7 = divisores (n7, &max7, &min7);
    //mostrando se � primo ou n�o de acordo com o retorno da fun��o
    if (primo7==0){
        printf("\n O n�mero � primo");
    }
    if (primo7==1){
        printf("\n O n�mero digitado %d tem como M�ximo e Minimo divisores: \n", n7);
        printf(" M�ximo Divisor: %d\n", max7);
        printf(" Minimo Divisor: %d\n", min7);
    }
    return 0;
}
