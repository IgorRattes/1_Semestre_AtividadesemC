#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>


int main()
{
    //comando para utilizar caracteres latinos
    setlocale (LC_ALL, "Portuguese");

    //declarando variaveis
    char x;

    //perguntando ao usuario o cararactere a ser verificado
    printf ("Digite um Caractere:");
    scanf ("%s", &x);

    //analisando o caractere digitado
    if (isupper (x))
        printf ("O caractere digitado � maiusculo");
    else if (islower (x))
        printf ("O caractere digitado � minusculo");
    else if (isdigit (x))
        printf ("O caractere digitado � um numero");
    else
        printf ("Caractere n�o identificado");

    return (0);
}
