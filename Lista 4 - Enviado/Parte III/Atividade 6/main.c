#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int x1= 1, x2, x3, x4;                                                  // Declara��o de variaveis

    printf ("\n|  x1  |   x2 |    x3  | x4 |");                               // Impress�o da primeira linha
    printf("\n--------------------------------");

    while (x1 <= 100){                                                        // laco de repeticao at� x atingir o numero 100

        x2 = pow( x1, 2);
        x3 = pow( x1, 3);                                                       // calculo das potencias
        x4 = pow (x1, 4);

        printf("\n|%d    %d    %d    %d  |", x1, x2, x3, x4);          // Impress�o das linhas

        x1 = x1 + 1;
    }
  return 0;
}
