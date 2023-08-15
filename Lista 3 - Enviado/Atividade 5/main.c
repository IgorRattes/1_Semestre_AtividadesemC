#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando variaveis
    int ano=1900;

    //usando do while para verificar todos os anos bissextos de 1900 ate 2022
    do {
        if (ano % 4 == 0 && ano != 1900)
            // mostrando para o usuario
            printf("Ano %d \n", ano);
        ano = ano+1;
    //condicao para continuar no laco de repeticao
    }while (ano >=1900 && ano <= 2022);
    return 0;
}
