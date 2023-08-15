#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    //declarando variaveis
    int senha, senhacorreta=1234;

    //coletando os dados com o usuario
    printf("Digite uma senha:\n");
    scanf("%d", &senha);

    //verificando a validade da senha e respondendo ao usuario
    if (senha == senhacorreta){
        printf("ACESSO PERMITIDO");
    }else{
        printf("ACESSO NEGADO");
    }
  return 0;
}
