#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    float soma=0, num, den;             //declarando variaveis

    printf("Digite o valor de n: ");    //solicitando ao usuario um numero
    scanf("%d", &n);

    for( int i = 1; i<=n; i++){         //laco de repeticao para realizar a operacao desejada
        num = i;
        den = n-(i-1);
        if (i%2==0){
            soma+= (num/den)*(-1);
        }
        else if (i%2!=0){
            soma = soma+(num/den);

        }
    }

    printf("\n \n A soma e: %f", soma); //mostrando o resultado do somatorio
    return 0;
}
