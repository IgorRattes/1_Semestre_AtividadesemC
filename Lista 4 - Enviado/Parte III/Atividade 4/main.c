#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int a=0,c,n;           //Declarando as variáveis

    printf("Digite um numero para ser exibido os numeros primos até ele!\n");
    scanf("%i",&n);
    printf("Os numeros primos até %i sao:\n",n);      //coletando dados com o usuário

    do{
        a++;
        c=0;
        for(int b=1;b<a;b++)
            if(a%b==0){                  //testando para saber se são numeros primos
                c++;
            }
            if(c==1){
                printf("%i\n",a);      //Imprimindo os números primos
            }
    }while(a<n); //Repete o bloco enquanto a for menor ou igual ao numero digitado pelo usuário.
}
