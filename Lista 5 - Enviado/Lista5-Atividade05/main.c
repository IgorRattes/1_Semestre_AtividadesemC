#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*
função tipo float
retorno tipo float
parametro raio tipo float
nome diametro

*/
float diametro (float raio){
    return raio*raio;
}
float circunferencia (float raio){
    return 2*3.14*raio;
}
float area (float raio){
    return 3.14*pow(raio,2);
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float raio;
    printf("\n Digite o Raio da Circunferencia: ");
    scanf("%f", &raio);
    printf("\n A Circunferencia de Raio %f tem as seguintes medidas", raio);
    printf("\n O Diâmetro é : %.2f", diametro(raio));
    printf("\n O Perimetro é : %.2f", circunferencia(raio));
    printf("\n O Área é : %.2f", area(raio));
    return 0;
}
