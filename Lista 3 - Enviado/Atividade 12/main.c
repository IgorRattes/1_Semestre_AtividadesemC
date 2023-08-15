#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float consumo, kwh=0, menor=0, maior=0, total=0, pagar;
    int minimo=0, tx=14, cmin=45;


    for(int cont = 1; cont<=10; cont++){

    printf("\n \n Digite o valor do consumo em kWh:");
    scanf ("%f", &consumo);
    kwh=kwh+consumo;

    if(menor>consumo || menor==0){
            menor = consumo;
        }
    if(maior<consumo || maior==0){
            maior = consumo;
        }

    if(consumo<=0){
        printf("\n!! VALOR DO CONSUMO INVALIDO !!\n");

    }else if(consumo >0 && consumo <= 30){
        printf("\n Consumo Minimo de %.2f kWk \n Valor a pagar pelo consumo R$ %d mais taxa de iluminação publica R$ %d \n Total a Pagar R$ %d \n", consumo, cmin, tx, cmin+tx);
        minimo=minimo+1;
        total=total+cmin+tx;
    }else if(consumo >30 && consumo <=100){
        pagar=tx+cmin+((consumo-30)*1.90);
        total=total+pagar;
        printf("O valor a pagar pelo consumo %.2f kWk é de R$ %.2f \n", consumo, pagar);
    }else if(consumo >100){
        pagar=(((100-30)*1.90)+(consumo-100)*3.95)+tx+cmin;
        total=total+pagar;
        printf("O valor a pagar pelo consumo %.2f kWk é de R$ %.2f \n", consumo, pagar);
    }


    }
    printf("\n \n Consumo Médio %.2f kWh \n Menor Consumo: %.2f kWh \n Maior Consumo: %.2f kWh \n Quantidade de consumidores que pagaram o minimo %d \n Valor total R$ %.2f \n \n", kwh/10, menor, maior, minimo, total);
    return 0;
}
