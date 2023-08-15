#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
/*
PROCDIMENTO: recebe três números e “retorna” por referência o maior e menor.
ENTRADA: 3 numeros inteiros por referencia *mai1, *men1 e *c1
SAIDA: procedimento não tem saida
*/
void maimen (int *mai1, int *men1, int *c1){
    //verificando qual o menor numero
    if(*mai1 < *men1){
        if(*mai1 < *c1)
            *men1 = *mai1;
        else
            *men1= *c1;
    }
    else{
        if(*men1 < *c1)
            *men1 = *men1;
        else
            *men1 = *c1;
    }

    // verificando qual o maior
    if(*mai1 > *men1){
        if(*mai1 > *c1)
            *mai1 = *mai1;
        else
            *mai1 = *c1;
    }
    else{
        if(*men1 > *c1)
            *mai1 = *men1;
        else
            *mai1 = *c1;
    }
}
/*
PROCEDIMENTO OP: RECEBE 3 VALORES BOOLEANOS E REALIZA UMA OPERAÇÃO VERDADE
ENTRADA BOOL *A, *B, *C E *resp todas as variaveis por referencia
*/
void op (bool *A2, bool *B2, bool *C2, bool *resp2){
    *resp2 = (!(*A2||((!*B2)&*C2)));
}
/*
FUNÇÃO med: RECEBE TRES NUMEROS CALCULA A MEDIA ENTRE ELES E RETORNA PARA O USUARIO POR REFERENCIA O MAIOR
ENTRADA: 4 INTEIROS, UM3, DOIS3, TRES3, MAIOR3
SAIDA FLOAT IGUAL A MEDIA DOS TRES NUMEROS
*/
float med (int um3, int dois3, int tres3, int *maior3){
    //verificando o maior numero e retornando por referencia
    if(um3>dois3 && um3>tres3){
        *maior3=um3;
    } else if (dois3 > tres3){
        *maior3=dois3;
    }else{
        *maior3 = tres3;
    }
    //retornando a media para o main
    return (um3+dois3+tres3)/3.0;
}
/*
PROCEDIMENTO MOSTRA: MOSTRA O NOME DA VARIAVEL ENDEREÇO E VALOR
ENTRADA: POR REFERENCIA 3 INTEIROS a4, b4 e c4
*/
void mostra (int *a4, int *b4, int *c4){
    printf("\n NOME_VARIAVEL /      ENDEREÇO        /      VALOR    ");
    printf("\n       A       /       %x       /       %d      ", a4, *a4);
    printf("\n       B       /       %x       /       %d      ", b4, *b4);
    printf("\n       C       /       %x       /       %d      ", c4, *c4);
}
/*
PROCEDIMENTO VETOR: declara um vetor de 3 posições e mostra a posição endereço e valor do vetor
ENTRADA: SEM ENTRADA
SAIDA: SEM SAIDA
*/
void vetor (){
    //declarando a variavel vetor com 3 posiçoes
    int vetor[3];
    //laço for para perguntar o valor das 3 posições do vetor
    for(int i=0; i < 3; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }
    //mostrando o cabeçalho
    printf("\n\n  POSICAO_VETOR   /    ENDEREÇO    /      VALOR");
    //laço for para mostrar os 3 valores de cada posição do vetor
    for(int i=0; i < 3; i++){
        printf("\n        %d         /    %x    /        %d", i, &vetor[i], vetor[i]);
    }
    printf("\n \n");
}
/*
FUNÇÃO DIVISORES: verifica se o numero é primo e caso não seja salva nos ponteiros de referencia o maximo e o minimo divisor comum
ENTRADA: int n, *max e *min
SAIDA: tipo inteiro 0 ou 1
*/
int divisores (int n7, int *max7, int *min7){
    int cont7;
    //verificando se o numero é primo caso não seja vai salvar o maximo e o minimo divisor do numero nas variaveis de referencia
    for (int i7=2; i7<n7; i7++){
        if(n7%i7==0){
            cont7++;
            if(i7>*max7){
                *max7=i7;
            }
            if(i7<*min7){
                *min7=i7;
            }
        }
    }
    //retornando 0 caso seja primo e 1 se não for
    if(cont7==0){
        return 0;
    }
    return 1;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
     //declarando variaveis
    int opcao, mai1, men1, c1, I6, *i6, a2, b2, c2, UM3, DOIS3, TRES3, maior3, a4, b4, c4, primo7, max7=0, min7, n7;
    bool A2, B2, C2, resp2;
    char C6, *c6;
    float F6, *f6, mediat3;
    double D6, *d6;
    do {
        printf("\n\n Menu de Exercicios!\n");
        printf("1 - Atividade 1 - Maior Menor \n");
        printf("2 - Atividade 2 - Valor verdade Operação \n");
        printf("3 - Atividade 3 - Média e Maior valor \n");
        printf("4 - Atividade 4 - Nome, Endereço e Valor da Variavel \n");
        printf("5 - Atividade 5 - Posição, Endereço e Valor do Vetor \n");
        printf("6 - Atividade 6 - Valor, Enderço e Tamanho na Memória \n");
        printf("7 - Atividade 7 - Função Divisores - Primo \n");
        printf("0 - Sair \n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
              //coletando os dados com o usuario
              printf("\nDigite 3 numeros separados por espaço: ");
              scanf("%d %d %d", &mai1, &men1, &c1);
              //chamando a função dando as variaveis como referência
              maimen(&mai1, &men1, &c1);
              //mostrando o resultado para o usuario
              printf("\n\n Maior %d  /  Menor %d \n\n", mai1, men1);
                    break;
            case 2:
              //perguntando para o usuario o valor verdade das variaveis
              printf("\n Digite o valor verdade de A, B, C: \n");
              scanf("%d %d %d", &a2, &b2, &c2);
              //convertendo para variaveis tipo booleanas
              if (a2 == 1){
                 A2 = true;
              }else{
                 A2 = false;
              }
              if (b2 == 1){
                B2 = true;
              }else{
                B2 = false;
              }
              if (c2 == 1){
                C2 = true;
              }else{
                C2 = false;
              }
              op(&A2, &B2, &C2, &resp2);
              if(resp2==true){
                printf("Verdade");
              }else{
                printf("Falso");
              }
                    break;
            case 3:
              //perguntando os numeros para o usuario
              printf("\nDigite tres valores separados por espaço: ");
              scanf("%d %d %d", &UM3, &DOIS3, &TRES3);
              //chamando a função media fornecendo as entradas
              mediat3 = med(UM3, DOIS3, TRES3, &maior3);
              //mostrando o resultado para o usuario
              printf("Media %.2f Maior %d", mediat3, maior3);
                    break;
            case 4:
              //perguntando o valor para as quatro variaveis
              printf("\n Digite tres numeros separados por espaço: ");
              scanf("%d %d %d", &a4, &b4, &c4);
              //chamando o procedimento dando as variaveis de referencia
              mostra(&a4, &b4, &c4);
                    break;
            case 5:
              vetor();
                    break;
            case 6:
              //mostrando para o usuario o resultado
              printf("\n O Endereço do char C6 é %x \n  Tem valor: %c \n Essa variável ocupa %d bytes. \n\n\n", &C6, C6, sizeof(char));
              printf("\n O Endereço do char* *c6 é %x \n Tem valor: %c \n Essa variável ocupa %d bytes. \n\n\n", &*c6, *c6, sizeof(char*));
              printf("\n O Endereço do int I6 é %x \n Tem valor: %d \n Essa variável ocupa %d bytes. \n\n\n", &I6, I6, sizeof(int));
              printf("\n O Endereço do int* *i6 é %x \n Tem valor: %d \n Essa variável ocupa %d bytes.\n\n\n", &*i6, *i6, sizeof(int*));
              printf("\n O Endereço do float F6 é %x \n Tem valor: %f \n Essa variável ocupa %d bytes. \n\n\n", &F6, F6, sizeof(float));
              printf("\n O Endereço do float* *f6 é %x \n Tem valor: %f \n Essa variável ocupa %d bytes. \n\n\n", &*f6, *f6, sizeof(float*));
              printf("\n O Endereço do double D6 é %x \n Tem valor: %d \n Essa variável ocupa %d bytes. \n\n\n", &D6, D6, sizeof(double));
              printf("\n O Endereço do double* *d6 é %x \n Tem valor: %.2lf \n Essa variável ocupa %d bytes. \n\n\n", &*d6, *d6, sizeof(double*));
                    break;
            case 7:
              //perguntando o numero para o usuario
              printf("Digite um Número: ");
              scanf("%d", &n7);
              min7 = n7;
              //chamando a função passando n e o max e min por referencia
              primo7 = divisores (n7, &max7, &min7);
              //mostrando se é primo ou não de acordo com o retorno da função
              if (primo7==0){
              printf("\n O número é primo");
              }
              if (primo7==1){
              printf("\n O número digitado %d tem como Máximo e Minimo divisores: \n", n7);
              printf(" Máximo Divisor: %d\n", max7);
              printf(" Minimo Divisor: %d\n", min7);
              }
                    break;
            case 0:
              printf("Até a Próxima");
                    break;
            default:
                printf("\n!!Opção Invalida!!0000000000000000\n");
        }
    } while (opcao != 0);
    return 0;
}
