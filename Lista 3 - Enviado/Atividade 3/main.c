#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando variaveis
    int multp;

    //estrutura de repeticao com contador para verificar e mostrar todos os numeros multiplos de 4
    while (multp <50){
        if (multp %4 == 0) {
            printf("%d \n", multp);
        }
        //variavel contadora
        multp= multp+1;
    }
    return 0;
}
