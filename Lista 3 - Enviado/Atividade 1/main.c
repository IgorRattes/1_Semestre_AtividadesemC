#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //usando caracteres latinos
    setlocale(LC_ALL, "Portuguese");

    //declarando variaves
    int r, x, y, z;

    //atribuindo valores iniciais as variavesi x y z
    x = 0;
    y = 10;
    z = 0;

    //repetição ate que z seja maior que 2
    while(z<3){
    r = y%3;

        if (r==0){
            x= x+1;
        }
    y = y+5;
    z = z+1;
    }

    //imprimindo o resultado para o usuario
    printf("O valor de x é: %d", x);
    return 0;
}
