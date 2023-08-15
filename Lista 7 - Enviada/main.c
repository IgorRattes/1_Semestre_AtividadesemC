#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#define N 10

/*
Nome: reverso
Parametros: Não Tem
Retorno: Procedimnto não tem retorno
*/
void reverso (){
    int numero1 [N], i; //declarando variaveis
    for (i=0; i<N; i++){
        printf("\n Digite um Numero: ");  //perguntando e salvando os numeros no vetor
        scanf("%d", &numero1[i]);
    }
    for (i = 9; i>=0; i--){
        printf("\n Reverso: %d", numero1[i]); //mostrando a ordem contrária
    }
}
/*
Nome: temp
parametro: n/a
saida: sem saida
*/
void temp (){
    srand(time(NULL));   //inicializando o rand
    int temper4[N], mai4=0, men4=0, i4, cont4=0;  //declarando variaveis
    float med4;
    for (i4=0; i4<N; i4++){
        temper4[i4]=18+(rand()%23);  //gerando os numeros aleatórios e armazenando no vetor
        if(temper4[i4]< men4){
            men4=temper4[i4]; //verificando a menor temperatura
        }
        if(temper4[i4]>mai4){
            mai4=temper4[i4];  //verificando a maior temperatura
        }
        med4=med4+temper4[i4];
    }
    med4=med4/10;
    printf("\n A Maior temperatura foi: %d", mai4);       //mostrando o que se pede
    printf("\n A Menor temperatura foi: %d", men4);
    printf("\n A Média foi: %.2f\n \n", med4);
    for (i4=0; i4<N; i4++){
        if(temper4[i4]<med4){
            printf("\n Abaixo da Média %d", temper4[i4]);
            cont4=cont4+1;
        }
    }
    printf("\n \n Quantidade de temperaturas abaixo da média: %d\n \n", cont4);
}
/*
Procedimento
Nome: apareceu
Parametros: N/A
Sem Retorno
*/
void apareceu (){
    int quantidade6[10], x6;            //declarando variaveis
    for (int i=0; i<10; i++){
        quantidade6[i]=0;               //zerando as posições do vetor
    }
    printf("\nDigite um numero entre 0 e 9 ou diferente disto para sair\n");    //perguntando a posição
    do{
        scanf("%d", &x6);
        quantidade6[x6]++;          //somando mais um a posição descrita
    }while (x6>=0 && x6<=9);
    for (int i6=0; i6<10; i6++){
        printf("\nVETOR NA POSIÇÃO %d quantidade %d", i6, quantidade6[i6]);     //mostranto o resultado final
    }
}
/*
Procedimento
Nome: preechefib
Parametros: N/A
Retorno: Procedimento sem retorno
*/
void preenchefib (){
  int N9;    //declarando variaveis
  printf("Digite a quantidade de termos de Fibonacci desejados: ");
  scanf("%d", &N9);  //perguntando a quantidade desejada
  int fibo9[N9];
  fibo9[0]=1;
  fibo9[1]=1;
  for (int i9=2; i9<N9; i9++){
    fibo9[i9]=fibo9[i9-1]+fibo9[i9-2];    //preenchendo o vetor com a quantidade de elementos solicitada
  }
  for (int i9=0; i9<N9; i9++){
    printf("\n Numero de Fibonacci na posição %d: %d", i9+1, fibo9[i9]); //mostrando o que se pede
  }
}
/*
FUNÇÃO
NOME: distintos
PARAMETROS: DOIS VETORES INTEIROS
RETORNO: VARIAVEL SOMA DO TIPO INTEIRO
*/
int distintos (int v110[], int v210[]){
  int cont=0, soma=0, i10, j10;    //declarando variaveis

  for(i10=0; i10<5; i10++){
    soma=soma+v110[i10];      //realizando a soma de todos os termos de 110
  }
  for(j10=0; j10<6;j10++){
    soma=soma+v210[j10];      //realizando a soma de todos os termos de 210
  }
  for(i10=0;i10<5;i10++){
    for(j10=0;j10<6;j10++){
      if(v110[i10]==v210[j10])
      cont+=v110[i10]+v210[j10];    //somando os valores que sao iguais em v110 e v210
    }
  }
  return soma-cont;        //retornando a subtração da soma total pelos numeros que se repetem
}
/*
Procedimento
Nome: segmen
Parametros: N/A
Procedimento não tem retorno
*/
void segmen(){
    int vet12[100], vetord[2], i12=-1, maior, j12;  //declarando variaveis
    printf("Digite os numeros desejados ou 0 para sair: \n");
    do{
        i12++;
        scanf("%d", &vet12[i12]);       //solicitando os numeros desejados e armazenando no vetor
    }while(vet12[i12]!=0);
    vetord[0]=vet12[0];
    maior=vet12[0];
    for (j12=0; j12<i12; j12++){
        if(vet12[j12]<vetord[0]){
            vetord[0]=vet12[j12];           //descobrindo o menor numero
        }
        if(vet12[j12]>maior){
            maior=vet12[j12];               //descobrindo o maior numero
        }
    }
    vetord[1]=maior;                       //atribuindo o maior a posição do 2 menor
    for (j12=1; j12<=i12; j12++){
        if(vet12[j12]>vetord[0]&&vet12[j12]<vetord[1]){
            vetord[1]=vet12[j12];                           //descobrindo o segundo menor
        }
    }
    printf("Segundo Menor: %d", vetord[1]);         //mostrando o que se pede
}
/*
FUNÇÃO
NOME: compara
PARAMETROS: 2 vetores S1 E S2 do tipo char
RETORNO: um valor booleano;
*/
bool compara (char S1[], char S2[]){
// Repetição para verificação se todos os caracteres entre as duas strings são iguais
  for (int i = 0; S1[i] != '\0' && S2[i] != '\0'; i++){
    if (S1[i] != S2[i] || S1[i] > S2[i] || S1[i] < S2[i])
      return false;
  }
  return true;
}
/*
PROCEDIMENTO
NOME: ordenanomes
PARAMETROS: N/A
RETORNO: N/A
*/
void ordenanomes (){
//Delaração e atribuição de valores
  char A[20], B[20], C[20];
  int R;
  printf("\nNome 1: ");
  scanf("%s", A);
  printf("\nNome 2: ");
  scanf("%s", B);
  printf("\nNome 3: ");
  scanf("%s", C);
// Ordenação dos nomes em ordem alfabética
  // A sendo o mair nome
  if (strcmp (A, B) > 0 && strcmp (B, C) > 0){
    printf("\n%s\n%s\n%s", C, B, A);}
  else if (strcmp (A, B) > 0 && strcmp (C, B) > 0)
    printf("\n%s\n%s\n%s", B, C, A);
  // B sendo o maior nome
  else if (strcmp (B, A) > 0 && strcmp (A, C) > 0)
    printf("\n%s\n%s\n%s", C, A, B);
  else if (strcmp (B, A) > 0 && strcmp (C, A) > 0)
    printf("\n%s\n%s\n%s", A, C, B);
  // C sendo o maior nome
  else if (strcmp (C, A) > 0 && strcmp (B, A) > 0)
    printf("\n%s\n%s\n%s", A, B, C);
  else if (strcmp (C, A) > 0 && strcmp (A, B) > 0)
    printf("\n%s\n%s\n%s", B, A, C);
}
/*
FUNÇÃO
NOME: contacaracteres
PARAMETROS: 2 vetores do tipo char
RETORNO: valor do contador de caracteres que se repetem
*/
int contacaracteres (char S1[100], char S2[100]){
  int cont = 0;
//Conta os caracteres da primeira string
  for(int i = 0; S1[i] != '\0'; i++){
//Conta os caracteres da segunda string
    for (int j = 0; S2[j] != '\0'; j++){
      if (S1[i] == S2[j] && S1[i] != ' ' && S2[j] != ' ')
        cont++;
    }
  }
  return cont;
}
/*
PROCEDIMENTO
NOME: verificanome
PARAMETROS: N/A
RETORNO: N/A
*/
void verificanome (){
//declaração das variaveis
    int A = 0, vogais = 0, i;       //variavel p/ repetiçao; variavel p/ strings terminadas com 'a'; variavel p/ numero de vogais
    char nome1[50], nome2[50], nome3[50];
    printf("Digite 3 nomes:\n");
    //Armazena 3 nomes em 3 strings diferentes
    for(i = 0; i < 3; i++)
    {
        scanf("%s", (i == 0)? &nome1 : (i == 1)? &nome2 : &nome3);
            fflush(stdin);
    }
    //acha o nome mais longo
    printf("\nNome mais longo: ");
        if((strlen(nome1)>strlen(nome2))&&(strlen(nome1)>strlen(nome3)))
        {
            printf("%s\n", nome1);
        }
        else if((strlen(nome2)>strlen(nome1))&&(strlen(nome2)>strlen(nome3)))
        {
            printf("%s\n", nome2);
        }
        else
        {
            printf("%s\n", nome3);
        }
    //acha o nome mais curto
    printf("\nNome mais curto: ");
        if((strlen(nome1)<strlen(nome2))&&(strlen(nome1)<strlen(nome3)))
        {
            printf("%s\n", nome1);
        }
        else if((strlen(nome2)<strlen(nome1))&&(strlen(nome2)<strlen(nome3)))
        {
            printf("%s\n", nome2);
        }
        else
        {
            printf("%s\n", nome3);
        }
    //Acha a quantidade de nomes que terminam com a letra 'a'
    printf("Quantidade de nomes que terminam com a letra 'a': ");
            if(nome1[strlen(nome1)-1] == 'a' || nome1[strlen(nome1)-1] == 'A')
                A++;
            if(nome2[strlen(nome2)-1] == 'a' || nome2[strlen(nome2)-1] == 'A')
                A++;
            if(nome3[strlen(nome3)-1] == 'a' || nome3[strlen(nome3)-1] == 'A')
                A++;
        printf("%d\n", A);
    //Calcula  a quantidade de vogais
    printf("\nQuantidade de vogais: ");
        for(i = 0; i < strlen(nome1); i++)
        {
            if(tolower(nome1[i]) == 'a' || tolower(nome1[i]) == 'e' || tolower(nome1[i]) == 'i' || tolower(nome1[i]) == 'o' || tolower(nome1[i]) == 'u')
            {
                vogais++;
            }
        }
        for(i = 0; i < strlen(nome2); i++)
        {
            if(tolower(nome2[i]) == 'a' || tolower(nome2[i]) == 'e' || tolower(nome2[i]) == 'i' || tolower(nome2[i]) == 'o' || tolower(nome2[i]) == 'u')
            {
                vogais++;
            }
        }
        for(i = 0; i < strlen(nome3); i++)
        {
            if(tolower(nome3[i]) == 'a' || tolower(nome3[i]) == 'e' || tolower(nome3[i]) == 'i' || tolower(nome3[i]) == 'o' || tolower(nome3[i]) == 'u')
            {
                vogais++;
            }
        }
        printf("%d", vogais);
}
int main() {
  setlocale(LC_ALL, "Portuguese");
// DECLARANDO VARIAVEIS
  int op, Vetor[]={}, vet110[5]={12, 6, 3, 90, 12}, vet210[6]={0, -1, 3, 9, 6, 4}, x17;
  char Stg141[100], Stg142[100], Stg171[100], Stg172[100];
  bool B14;
// MENU
  do {
  printf("\n\n|MENU DE OPÇÕES|");
  printf("\n - [0] - Sair");
  printf("\n - [1] - Ordem Reversa de Leitura");
  printf("\n - [2] - Tempreratura Menor, Maior e a Média");
  printf("\n - [3] - Quantidade de vezes que um numero de 0 a 9 aparecer");
  printf("\n - [4] - N Termos de Fibonacci");
  printf("\n - [5] - Soma de elementos distintos Vetores");
  printf("\n - [6] - Segundo Menor Valor digitado");
  printf("\n - [7] - Compara Strings");
  printf("\n - [8] - Ordem crescente de Nomes");
  printf("\n - [9] - Conta Caracteres Comuns");
  printf("\n - [10] - Nome mais longo/curto quantidade de vogais e nomes que terminam em A\n");
  printf("\nDigite o numero da opcao desejada\n");
  scanf("%d", &op);
    switch (op){
      case 0:
        printf("\nFinalizando");
        printf("\n...");
        printf("\n..");
        printf("\n.");
      break;
      case 1: //Mostra Vetor Reverso
        reverso();
      break;
      case 2: //Temperaturas Aleatórias
        //chamando o procedimento
        temp();
      break;
      case 3: //Quantidade de Vezes de um Numero Na Posicao de um Vetor
// Chamando o procedimento
        apareceu();
      break;
      case 4:
        //chamando o procedimento
        preenchefib();
      break;
    case 5: //Soma Vetores
      // Chamando a função
      printf("Resultado da Soma %d", distintos(vet110, vet210));
    break;
      case 6: //Segundo Menor Valor
        //chamando a função
        segmen();
      break;
      case 7: //Strings identicas
        //Chamando a função
        printf("\nDigite o primeiro Char: ");
        scanf("%s", Stg141);
        printf("\nDigite o segundo Char: ");
        scanf("%s", Stg142);
        B14 = compara(Stg141, Stg142);
        if (B14 == true) //Condição verdadeira
        printf("\nAs strings são identicas");
        else //Condição falsa
        printf("\n As strings são diferentes");
      break;
      case 8: //Ordena Nomes
        //Chamando o procedimento
        ordenanomes();
      break;
      case 9: //Conta Caracteres Comuns
// Atribuição de valor às strings
        printf("\n Digite a 1º palavra: ");
        scanf("%s", Stg171);
        printf("\n Digite a 2º palavra: ");
        scanf("%s", Stg172);
        x17 = contacaracteres (Stg171, Stg172);
        printf("\n%s e %s possuem %d caracteres comuns (Desconsiderando espaco)", Stg171, Stg172, x17);
      break;
      case 10: //Verifica Nomes
        //Chamando o procedimento
        verificanome();
      break;
      default:
        printf("\nOpcao Invalida");
      break;
    }
  } while (op != 0);
  return 0;
}
