#include <stdio.h>
#include <stdlib.h>

int main()
{

    //declarando variaveis
    int impar, men, mai;

    //coletando com o usuario os limites inferior e superior
    printf("Digite um intervalo para verificar os numeros impares: ");
    printf("\n Menor numero:");
    scanf("%d", &men);
    printf("\n Maior numero: ");
    scanf("%d", &mai);

    //for como laco repetidor ate a variavel contadora ser maior que o limite superior;
    for (int cont = men; cont <= mai ; cont++){
        impar = cont;
        if(impar % 2== 1 ){
            printf("%d \n", impar);
        }else if (men == 0 && mai == 0){
            printf("Limite superior e inferior igual a zero");
        }
    }
    return 0;
}
