#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //uso de caracteres latinos
    setlocale(LC_ALL, "Portuguese");

    //declarando variaveis
    float lado1, lado2, lado3;

    //solicitando as informa��es para o usu�rio
    printf("Digite o Valor dos Lados");
    printf("\nDigite o lado 1:");
    scanf ("%f", &lado1);
    printf("\nDigite o lado 2:");
    scanf ("%f", &lado2);
    printf("\nDigite o lado 3:");
    scanf ("%f", &lado3);


    //verificando as condi��es para cada triangulo
    if (lado1 >0 && lado1 >0 && lado3 >0){
       if (lado1 == lado2 && lado2 == lado3){
        printf("O Tri�ngulo � equilatero");
       } else if ((lado1 == lado2 || lado1 == lado3 || lado2 == lado3) && (lado1 != lado2 || lado1 != lado3 || lado2 != lado3)){
        printf("O Tri�ngulo � isoceles");
       } else if (lado1 != lado2 && lado1 != lado3){
        printf("O Tri�ngulo � escaleno");
       }
    }else {
    printf("\n Dados invalidos para um tri�ngulo \n");
    }

    return 0;
}
