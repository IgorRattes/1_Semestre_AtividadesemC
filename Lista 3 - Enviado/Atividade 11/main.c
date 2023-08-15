#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando variaveis
    float salario, soma=0, maior;
    int cont=1;

    //coletando os dados com o usuario e armazenando as informacoes necessarias
    do{
        printf("\n Digite o Valor do Salario ou 0 para finalizar Funcionario %d: ", cont);
        scanf("\n %f", &salario);
        cont=cont+1;
        soma=soma+salario;
        if(salario> maior)
            maior = salario;
    }while (salario!=0);
    //mostrando o resultado para o usuario
    printf("\n A Soma dos salarios foi %.2f \n A media foi %.2f \n O maior salario foi %.2f \n", soma, soma/(cont-1), maior);
    return 0;
}
