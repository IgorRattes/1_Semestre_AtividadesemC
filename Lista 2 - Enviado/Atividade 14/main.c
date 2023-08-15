#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    float quantidade, valor, desconto, valordesconto, valorfinal;

    //solicitando dados ao usuario
    printf("Informe a quantidade de parafusos desejada: ");
    scanf("%f", &quantidade);

    //verificando a quantidade de desconto a ser aplicada
    if (quantidade >100){
        if (quantidade >= 101 && quantidade <= 200){
            desconto = 10;
        } else if (quantidade >= 201 && quantidade <= 300){
            desconto = 20;
        } else if (quantidade >= 301 && quantidade <= 400){
            desconto = 30;
        } else if (quantidade >= 401){
            desconto = 40;
        }
    }

    //valculando valor inicial, valor a pagar e valor de desconto
    valor = quantidade*0.50;
    valordesconto = ((valor/100)*(desconto));
    valorfinal = valor-valordesconto;

    //mostrando para o usuario o resultado
    printf("\n Valor inicial: %f \n valor de desconto: %f \n valor a pagar: %f \n", valor, valordesconto, valorfinal);
    return 0;
}
