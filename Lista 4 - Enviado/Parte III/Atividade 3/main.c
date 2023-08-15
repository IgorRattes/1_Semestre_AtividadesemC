#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, n, p, num;                                           //declarando variaveis

    printf("Digite um numero e a posicao desejada: ");          //solicitando ao usuario as informacoes necessarias
    scanf("%d %d", &n, &k);
    num = n;
    for (int i = k; i>1; i--){                                  //laco de repeticao para verificar a posicao no numero
        num=num/10;
        p=num%10;
    }
    printf("\n O numero na posicao %d e %d", k, p);             //mostrando o resultado para o usuario
    return 0;
}
