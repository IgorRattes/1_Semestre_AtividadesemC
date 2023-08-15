#include <stdio.h>
#include <stdlib.h>                                             //bibliotecas necessarias, e biblioteca locale para utilizar caracteres do portugues
#include <locale.h>
/*
Procedimento
Sem Retorno
Nome: primo
parametros: um numero qualquer n
*/
void primo (int n){
    int div=0;
    for(int cont=1; cont<=n; cont++){
        div=0;
        for (int i=1; i<=cont; i++){                                       //função for para verificar se o numero é primo ou não
            if (cont%i==0)
                div++;
        }
        if (div==2)                                                     //mostrando para os usuarios o resultado se é primo ou não
            printf("\nPrimo %d", cont);
    }
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;                            //declarando variaveis
    printf("Digite um Numero: ");
    scanf("\n%d", &num);                //coletando os dados com o usuario
    primo(num);                         //chamando o procedimento primo
    return 0;
}
