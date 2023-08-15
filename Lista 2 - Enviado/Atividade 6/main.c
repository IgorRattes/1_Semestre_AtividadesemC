#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando as variaveis
    float x,y;

    //perguntando ao usuário os pontos a serem verificados
    printf("Indique os pontos cartesianos x e y\n");
    printf("Digite o valor de x:");
    scanf("%f",&x);
    printf("Digite o valor de y:");
    scanf("%f",&y);

    //analisando os pontos fornecidos pelo usuário e mostrando a localização dentro do plano cartesiano
    if((x>0)&&(y>0))
    printf("O Ponto P(%.2f,%.2f) esta localizado no primeiro Quadrante\n",x,y);
    else
    {
      if((x<0)&&(y>0))
        printf("O Ponto P(%.2f.%.2f) esta localizado no segundo Quadrante\n",x,y);
        else
        {
        if((x<0)&&(y<0))
            printf("O Ponto P(%.2f,%.2f) esta localizado no terceiro Quadrante\n",x,y);
        else
        {
        if((x>0)&&(y<0))
            printf("O Ponto P(%.2f,%.2f) esta localizado no quarto Quadrante\n",x,y);
        else
        {
        if((x==0)&&((y>0||y<0)))
            printf("O Ponto P(%.2f,%.2f) esta localizado no eixo y\n",x,y);
        else
        {
        if((y==0)&&((x>0||x<0)))
            printf("O Ponto P(%.2f,%.2f) esta localizado no eixo x\n",x,y);
        else
        {
        if((x==0)&&(y==0))
        printf("O Ponto P(%.2f,%.2f) esta no ponto origem\n\n",x,y);
        }
        }
        }
        }
        }
    }
    return 0;
}
