#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //usando caracteres latinos virgula e usada normalmente para separar a parte fracionaria
    setlocale(LC_ALL, "Portuguese");

    //definindo as variaveis
    float numero;

    //coletando os dados
    printf("Digite um numero real: \n");
    scanf("\n %f", &numero);

    //mostrando a parte inteira do numero
    printf("\n Parte inteira do número: %d \n", (int) numero);

    //mostrando a parte fracionada do numero
    printf(" Parte Fracionada do número: %.4f \n", numero - (int)numero);

    return 0;
}
