#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando variaveis
    int y = 456;

    //laco for para fazer a contagem e mostrar
    for(int x = 233; x <= y; x=x+5){

        if (x >= 300 && x <= 400){
            x = x-2;
            printf("%d \n", x);
        }else if ((x>= 233 && x<=299) || (x>=401 && x<=456)){
            printf("%d \n", x);
        }
    }
}
