#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //comando para usar caracteres latinos
    setlocale (LC_ALL, "Portuguese");

    //definindo as variaveis
    float x1, x2, y1, y2, distt;

    //perguntando os pontos para o usuario
    printf("Digite os pontos (x1, y1) e (x2, y2): ");
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f,", &x2);
    scanf("%f", &y2);

    //verificando se são pontos validos e caso sejam calculando a distancia de manhattan e mostrando ao usario
    if ((x1 > x2 || x1 < x2 )&& (y1 > y2 || y1 < y2 )){
        distt = ((x1-x2)+(y1-y2));
        printf ("\n A distância de manhattan entre os pontos (%f, %f) e (%f, %f) é: %f ", x1, y1, x2, y2, distt);
    } else {
        printf("Os pontos (%f, %f) e (%f, %f) são iguais.", x1, y1, x2, y2);
    }

    return 0;
}
