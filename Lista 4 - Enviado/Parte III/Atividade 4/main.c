#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int a=0,c,n;           //Declarando as vari�veis

    printf("Digite um numero para ser exibido os numeros primos at� ele!\n");
    scanf("%i",&n);
    printf("Os numeros primos at� %i sao:\n",n);      //coletando dados com o usu�rio

    do{
        a++;
        c=0;
        for(int b=1;b<a;b++)
            if(a%b==0){                  //testando para saber se s�o numeros primos
                c++;
            }
            if(c==1){
                printf("%i\n",a);      //Imprimindo os n�meros primos
            }
    }while(a<n); //Repete o bloco enquanto a for menor ou igual ao numero digitado pelo usu�rio.
}
