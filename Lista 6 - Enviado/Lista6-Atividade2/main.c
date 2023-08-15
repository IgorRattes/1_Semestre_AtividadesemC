#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
PROCEDIMENTO OP: RECEBE 3 VALORES BOOLEANOS E REALIZA UMA OPERAÇÃO VERDADE
ENTRADA BOOL *A, *B, *C E *resp todas as variaveis por referencia
*/
void op (bool *A2, bool *B2, bool *C2, bool *resp2){
    *resp2 = (!(*A2||((!*B2)&*C2)));
}
int main()
{
    //declarando variaveis
    int a2, b2, c2;
    bool A2, B2, C2, resp2;

    //perguntando para o usuario o valor verdade das variaveis
    printf("\n Digite o valor verdade de A, B, C: \n");
    scanf("%d %d %d", &a2, &b2, &c2);


    //convertendo para variaveis tipo booleanas
    if (a2 == 1){
        A2 == true;
    }else{
        A2 == false;
    }
    if (b2 == 1){
        B2 == true;
    }else{
        B2 == false;
    }
    if (c2 == 1){
        C2 == true;
    }else{
        C2 == false;
    }
    op(&A2, &B2, &C2, &resp2);
    if(resp2==true){
        printf("Verdade");
    }
    else{
        printf("Falso");
    }
    return 0;
}
