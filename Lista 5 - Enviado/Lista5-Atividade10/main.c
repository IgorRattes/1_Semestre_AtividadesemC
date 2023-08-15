#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int manhattan (int x, int y, int n){
  srand (time(NULL));
  int soma, distm;
  for (int cont = 1; cont <= n; cont++){
        int x2 = rand() % 3;                                                            //declarando variaveis aleatorias
        int y2 = rand() % 10;
        printf ("\n Coordenadas do ponto %d: %d, %d", cont, x2, y2);                     //imprimindo as variaveis aleatorias
        distm = abs (x - x2) + abs (y - y2);                                            //calculando a distancia de manhattan
        printf("\n Distancia de Manhattan: %d\n", distm);                                //mostrando a distancia de manhattan entre o ponto dig e os pontos aleatorios
        soma = soma + distm;                                                            //calculando a soma geral
    }
    return soma;
}
int main(void) {
  int quant, x, y;
  printf("\n Informe a quantidade de pontos aleatórios desejados: ");
  scanf("%d", &quant);
  printf("\n Informe as coordenadas x e y do ponto P (separadas por espaco): ");
  scanf("%d %d", &x, &y);
  printf("\n \n A Soma das distancias de Manhattan é: %d", manhattan(x, y, quant));
  return 0;
}
