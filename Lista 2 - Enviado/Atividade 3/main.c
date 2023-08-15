#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    //declarando variaveis
    int dia, mes, ano;


    //perguntando ao usuario a data a ser verificada
    printf("Digite uma data: (dd/mm/aaaa)\n");
    printf("Dia: ");
    scanf ("%d", &dia); // le o dia
    printf("\nMes: ");
    scanf("%d", &mes);  // le o mes
    printf("\nAno: ");
    scanf("%d", &ano); // le o ano

    //if para verificar as condicoes de ser uma data valida e mostrar ao usuario o resultado da validacao
    if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 &&
        ano == 2022){

        //Mes de fevereiro
        if (mes == 2){
            if (dia <=28){
            printf("Data valida para o ano de 2022: %d/%d/%d", dia, mes, ano);
            } else {
            printf("Data invalida para o ano de 2022");
            }
        }

        //Meses com 31 dias
        if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
            mes == 8 || mes == 10 || mes == 12)){
            printf("Data valida para o ano de 2022: %d/%d/%d", dia, mes, ano);
        }


        //Meses com 30 dias
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if (dia <=30){
            printf("Data valida para o ano de 2022: %d/%d/%d", dia, mes, ano);
        } else{
            printf("Data invalida para o ano de 2022");
        }
        }

    } else {
      printf("Data invalida para o ano de 2022"); // caso o primeiro if não seja verdadeiro
    }
  return 0;
}
