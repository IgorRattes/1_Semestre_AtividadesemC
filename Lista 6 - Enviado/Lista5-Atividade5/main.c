#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
PROCEDIMENTO VETOR: declara um vetor de 3 posi��es e mostra a posi��o endere�o e valor do vetor
ENTRADA: SEM ENTRADA
SAIDA: SEM SAIDA
*/
void vetor (){
    //declarando a variavel vetor com 3 posi�oes
    int vetor[3];
    //la�o for para perguntar o valor das 3 posi��es do vetor
    for(int i=0; i < 3; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }
    //mostrando o cabe�alho
    printf("\n\n  POSICAO_VETOR   /   ENDERE�O   /      VALOR");
    //la�o for para mostrar os 3 valores de cada posi��o do vetor
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
