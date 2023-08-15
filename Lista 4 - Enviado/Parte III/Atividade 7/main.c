#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int x, y, m, n, c;                                // Declaração e atribuição de valor às variáveis

    printf("\nDigite o numero de linhas (N): ");
    scanf("%d", &m);

    printf("\nDigite o numero de colunas (M): ");
    scanf("%d", &n);

    for (x = 1; x <= M; x++){                         // Repetição pelo numero de M colunas


        for (y = 1; y <= N; y++){                       // Repetição pelo numero de N colunas
            c = pow (x,y);                                // Calculo do valor de x
            printf("\t \t%d", c);
        }
        printf("\n");
    }

  return 0;
}
