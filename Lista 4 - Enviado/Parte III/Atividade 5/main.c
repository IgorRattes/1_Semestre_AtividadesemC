#include <stdio.h>
#include <stdlib.h> //declarando as bibliotecas a serem utilizadas
#include <time.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
    srand (time(NULL));

    int quant, x, y, soma = 0, cont, distm;                                         //declaracao e atribuicao de variaveis

    printf("\n Informe a quantidade de pontos aleatórios desejados: ");
    scanf("%d", & quant);

    printf("\n Informe as coordenadas x e y do ponto P (separadas por espaco): ");      //solicitando as coordenadas do ponto incial
    scanf("%d %d", &x, &y);

    for (cont = 1; cont <= quant; cont++){

        int x2 = rand() % 3;                                                            //declarando variaveis aleatorias
        int y2 = rand() % 10;

        printf ("\n Coordenadas do ponto %d: %d, %d", cont, x2, y2);                     //imprimindo as variaveis aleatorias

        distm = abs (x - x2) + abs (y - y2);                                            //calculando a distancia de manhattan

        printf("\n Distancia de Manhattan: %d\n", distm);                                //mostrando a distancia de manhattan entre o ponto dig e os pontos aleatorios

        soma = soma + distm;                                                            //calculando a soma geral
    }

    printf("\n \n A Soma das distancias de Manhattan e o ponto inicial e : %d", soma);

    return 0;
}
