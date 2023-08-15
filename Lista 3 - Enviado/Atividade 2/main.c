#include <stdio.h>
#include <stdlib.h>

int main()
{
    int impar= -1; //declarando a variavel contadora

    //repetidor ate a condicao ser satisfeita
    while(impar <=48){
        impar = impar+2;
        printf("%d \n", impar);
    }
    return 0;
}
