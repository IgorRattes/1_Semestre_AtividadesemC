#include <stdio.h>
#include <stdlib.h>

int main()
{

    //declarando variaves
    int r, x, y;

    //atribuindo valores iniciais as variavesi x y
    x = 0;
    y = 10;

    //repetiчуo ate que z seja maior que 2
    for(int z = 0; z<3; z++){
        r = y%3;

        if (r==0){
            x= x+1;
        }
    y = y+5;
    }

    //imprimindo o resultado para o usuario
    printf("O valor de x e: %d", x);
    return 0;
}
