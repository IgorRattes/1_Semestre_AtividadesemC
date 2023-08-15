#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando variaveis
    float salario, soma=0, maior;

    //coletando os dados com o usuario e armazenando as informacoes necessarias
    for(int cont = 1; cont<=10; cont++){
        printf("\n Digite o Valor do Salario do Funcionario %d: ", cont);
        scanf("\n %f", &salario);

        soma=soma+salario;
        if(salario> maior)
            maior = salario;
    }
    //mostrando o resultado para o usuario
    printf("\n A Soma dos salarios foi %.2f \n A media foi %.2f \n O maior salario foi %.2f \n", soma, soma/10.0, maior);
    return 0;
}
