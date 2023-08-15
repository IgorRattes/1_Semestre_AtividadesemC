#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,d=1; //Declara as variaveis a, b, c e d, concedendo a variavel d o valor inicial de 1

    a = -2; //Concede a variavel a o valor de -2

    b = a*a; //Concede a variavel b o valor da multiplicação de a*a ou seja -2*-2 = 4

    c = d++; //1=> copia o valor de d para c | 2=> incrementa em uma unidade o valor de d

    d = ++c + 5; //Acrescenta +1 a variavel c depois soma o valor de c com 5 e concede o resultado a variavel d

    printf ("\n %d %d %d %d", a, b, c, d); //Mostra para o usuário o valor final constante em cada uma das variáveis a, b, c e d.
}
