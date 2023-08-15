#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
PROCEDIMENTO VETOR: declara um vetor de 3 posições e mostra a posição endereço e valor do vetor
ENTRADA: SEM ENTRADA
SAIDA: SEM SAIDA
*/
void vetor (){
    //declarando a variavel vetor com 3 posiçoes
    int vetor[3];
    //laço for para perguntar o valor das 3 posições do vetor
    for(int i=0; i < 3; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }
    //mostrando o cabeçalho
    printf("\n\n  POSICAO_VETOR   /   ENDEREÇO   /      VALOR");
    //laço for para mostrar os 3 valores de cada posição do vetor
    for(int i=0; i < 3; i++){
        printf("\n        %d         /    %x    /        %d", i, &vetor[i], vetor[i]);
    }
    printf("\n \n");
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //chamando o procedimento vetor
    vetor();
    return 0;
}
