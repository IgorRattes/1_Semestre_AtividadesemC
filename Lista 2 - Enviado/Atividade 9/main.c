#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando variaveis
    float altura, peso, imc;

    //perguntando ao usuario seu peso e altura
    printf("Digite o seu peso: ");
    scanf("\n %f", &peso);
    printf("Digite a sua altura: ");
    scanf("\n %f", &altura);


    //calculo de imc
    imc = ((peso)/(pow(altura,2)));


    //condições para verificar em qual patamar de imc o usuario se enquadra
    if (imc <= 18.5){
        printf("\nImc %f, considerado abaixo do peso \n", imc);
    } else if (imc >= 18.6 && imc <= 24.9){
        printf("\nImc %f, considerado peso ideal \n", imc);
    } else if (imc >= 25 && imc <= 29.9){
        printf("\nImc %f, considerado levemente acima do peso \n", imc);
    } else if (imc >= 30 && imc <= 34.9){
        printf("\nImc %f, considerado Obesidade garu I \n", imc);
    } else if (imc >= 35 && imc <= 39.9){
        printf("\nImc %f, considerado Obesidade garu II (SEVERA) \n", imc);
    } else if (imc >= 40    ){
        printf("\nImc %f, considerado Obesidade garu III (MORBIDA) \n", imc);
    }
    return 0;
}
