#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void maxmin (){
    int n, maior, menor, primeira=0;
    do{
        printf("Digite um numero ou 0 para sair: ");
        scanf("%d", &n);
        if(primeira==0){
            primeira++;
            maior=n;
            menor=n;
        }
        if(menor>n && n!=0)
            menor = n;
        if((maior<n)&& n!=0)
            maior = n;
    }while (n!=0);
    printf("\n O maior numero foi %d", maior);
    printf("\n O menor numero foi %d", menor);
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    maxmin();
    return 0;
}
