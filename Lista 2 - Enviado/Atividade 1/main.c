#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    //declarando variaveis
    int num;

    //perguntando ao usuario o numero
    printf("Digite um numero inteiro maior que 0 \n :");
    scanf("%d", &num);

    //demonstrando para o usuario o resultado atraves das condicionantes
    if (num <= 0){
        printf("O numero %d e menor ou igual a 0", num);
    } else if (num % 2 == 0){
        printf("O numero %d e par", num);
    }  else{
        printf("O numero %d e impar", num);
    }
  return 0;
}
