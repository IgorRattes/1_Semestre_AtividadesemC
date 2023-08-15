#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int kessimo (int n, int k){
    int resp, i;
    for(i=0; i<k; i++){
        resp = n%10;
        n = n/10;
        if(i==k){
            return resp;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int N, K;
    printf("\nDigite um Numero e a posição desejada: ");
    scanf("%i %i", &N, &K);
    printf("\nO %d Digito de %d é: %d", K, N, kessimo(N, K));
    return 0;
}
