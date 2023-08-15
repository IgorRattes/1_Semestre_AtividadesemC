#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Declarando as Variaveis
    int n1, n2, n3;


    //Coletando os dados do Usuario
    printf("Digite tres numeros inteiros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);


    //Verificando a ordem dos numeros e imprimindo para o usuário o resultado
    if (n3 > n1)
    {
        if (n1 > n2)
        {
        printf("Numero Menor: %d \n", n2);
        printf("Numero do Meio: %d \n", n1);
        printf("Numero Maior: %d \n", n3);
        }
        else {
        if (n2 < n3)
	    {
        printf("Numero Menor: %d \n", n1);
        printf("Numero do Meio: %d \n", n2);
        printf("Numero Maior: %d \n", n3);
	    }
        }
    }

    if (n1 > n2)
    {
        if (n2 > n3)
        {
        printf("Numero Menor: %d \n", n3);
        printf("Numero do Meio: %d \n", n2);
        printf("Numero Maior: %d \n", n1);
        }
        else
        {
        if (n3 < n1)
	    {
        printf("Numero Menor: %d \n", n2);
        printf("Numero do Meio: %d \n", n3);
        printf("Numero Maior: %d \n", n1);
	    }
        }
    }

    if (n1 < n2)
    {
        if (n3 < n1)
        {
        printf("Numero Menor: %d \n", n3);
        printf("Numero do Meio: %d \n", n1);
        printf("Numero Maior: %d \n", n2);
        }
        else
        {
        if (n3 < n2)
	    {
        printf("Numero Menor: %d \n", n1);
        printf("Numero do Meio: %d \n", n3);
        printf("Numero Maior: %d \n", n2);
	    }
        }
    }
  return 0;


}

