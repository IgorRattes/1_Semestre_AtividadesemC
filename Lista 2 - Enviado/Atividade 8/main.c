#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //uso de caracteres latinos
    setlocale(LC_ALL, "Portuguese");

    //declarando variaveis
    float lado1, lado2, lado3;

    //solicitando as informações para o usuário
    printf("Digite o Valor dos Lados");
    printf("\nDigite o lado 1:");
    scanf ("%f", &lado1);
    printf("\nDigite o lado 2:");
    scanf ("%f", &lado2);
    printf("\nDigite o lado 3:");
    scanf ("%f", &lado3);


    //verificando as condições para cada triangulo
    if (lado1 >0 && lado1 >0 && lado3 >0){
       if (lado1 == lado2 && lado2 == lado3){
        printf("O Triângulo é equilatero");
       } else if ((lado1 == lado2 || lado1 == lado3 || lado2 == lado3) && (lado1 != lado2 || lado1 != lado3 || lado2 != lado3)){
        printf("O Triângulo é isoceles");
       } else if (lado1 != lado2 && lado1 != lado3){
        printf("O Triângulo é escaleno");
       }
    }else {
    printf("\n Dados invalidos para um triângulo \n");
    }

    return 0;
}
