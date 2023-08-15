#include <stdio.h>
#include <stdlib.h>
int main()
{
    //declarando as variaveis e seus ponteiros
    char C6, *c6;
    int I6, *i6;
    float F6, *f6;
    double D6, *d6;

    //mostrando para o usuario o resultado
    printf("\n O Endereço do char C6 é %x \n  Tem valor %c \n Essa variável ocupa %d bytes. \n\n\n", &C6, C6, sizeof(char));
    printf("\n O Endereço do char* *c6 é %x \n Tem valor %c \n Essa variável ocupa %d bytes. \n\n\n", &*c6, *c6, sizeof(char*));

    printf("\n O Endereço do int I6 é %x \n Tem valor %d \n Essa variável ocupa %d bytes. \n\n\n", &I6, I6, sizeof(int));
    printf("\n O Endereço do int* *i6 é %x \n Tem valor %d \n Essa variável ocupa %d bytes.\n\n\n", &*i6, *i6, sizeof(int*));

    printf("\n O Endereço do float F6 é %x \n Tem valor %f \n Essa variável ocupa %d bytes. \n\n\n", &F6, F6, sizeof(float));
    printf("\n O Endereço do float* *f6 é %x \n Tem valor %f \n Essa variável ocupa %d bytes. \n\n\n", &*f6, *f6, sizeof(float*));

    printf("\n O Endereço do double D6 é %x \n Tem valor %d \n Essa variável ocupa %d bytes. \n\n\n", &D6, D6, sizeof(double));
    printf("\n O Endereço do double* *d6 é %x \n Tem valor %.2lf \n Essa variável ocupa %d bytes. \n\n\n", &*d6, *d6, sizeof(double*));
    return 0;
}
