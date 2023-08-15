#include <stdio.h>
#include <stdlib.h>
void imprima (int limi, int lims, int incrementa){
    for(int i=limi; i<=lims; i+=incrementa)
        printf("\n %d", i);
}
int main()
{
    int limi, lims, incrementa;
    printf("\n Digite o Limite Inferior, Superior e a Taxa de incrementação: ");
    scanf("%d %d %d", &limi, &lims, &incrementa);
    imprima(limi, lims, incrementa);
    return 0;
}
