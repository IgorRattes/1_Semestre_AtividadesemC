#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
função tipo float
nome media
parametros a, b, c, d & e
retorno tipo float
*/
float media (int a, int b, int c, int d, int e){
    float resp;
    resp=(a+b+c+d+e)/5;
    return resp;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");                        //comando para utilizar caracteres em portugues
    int a, b, c, d, e;                                         //declaracao de variaveis
    printf("Digite cinco numeros separados por espaco\n");      //perguntando ao usuario os 5 digitos
    scanf("\n%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("Média %.2f",media(a, b, c, d, e));                  //imprimindo na tela o resultado da funcao media
    return 0;
}
