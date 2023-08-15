#include <stdio.h>
#include <stdlib.h>
/*
FUNÇÃO med: RECEBE TRES NUMEROS CALCULA A MEDIA ENTRE ELES E RETORNA PARA O USUARIO POR REFERENCIA O MAIOR
ENTRADA: 4 INTEIROS, UM3, DOIS3, TRES3, MAIOR3
SAIDA FLOAT IGUAL A MEDIA DOS TRES NUMEROS
*/
float med (int um3, int dois3, int tres3, int *maior3){
    //verificando o maior numero e retornando por referencia
    if(um3>dois3 && um3>tres3){
        *maior3=um3;
    } else if (dois3 > tres3){
        *maior3=dois3;
    }else{
        *maior3 = tres3;
    }
    //retornando a media para o main
    return (um3+dois3+tres3)/3.0;
}
int main()
{
    //declarando variaveis
    int UM3, DOIS3, TRES3, maior3;
    float mediat3;
    //perguntando os numeros para o usuario
    printf("\nDigite tres valores separados por espaço: ");
    scanf("%d %d %d", &UM3, &DOIS3, &TRES3);
    //chamando a função media fornecendo as entradas
    mediat3 = med(UM3, DOIS3, TRES3, &maior3);
    //mostrando o resultado para o usuario
    printf("Media %.2f Maior %d", mediat3, maior3);
    return 0;
}
