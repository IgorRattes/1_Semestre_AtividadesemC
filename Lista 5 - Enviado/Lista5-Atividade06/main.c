#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool verdade ( int a, int b, int c){
    bool resposta, A, B, C;
    if(a==1){
        A = true;
    }else {
        A = false;
    }
        if(b==1){
        B = true;
    }else {
        B = false;
    }
        if(c==1){
        C = true;
    }else {
        C = false;
    }

    resposta = ((!A)||(B&C));
        return  resposta;
    }
int main()
{
    int A, B, C;
    bool resp;
    printf("\n Digite o Valor de A B C separados por espaço: ");
    scanf("\n %d %d %d", &A, &B, &C);
    resp = verdade(A, B, C);
    if (resp==true){
        printf("Verdade");
    }
    else{
        printf("Falso");
    }
    return 0;
}
