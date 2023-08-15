#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#define MaxL 10
#define MaxN 5
#define MaxV 6
struct livros{
  int Id;
  char Titulo[100];
  int Ano;
  char Autor[100];
};
struct livros Biblioteca[MaxL];
/*
PROCEDIMENTO
NOME: registralivros
PARAMETROS: N/A
RETORNO: N/A
*/
void registralivros (){
//Declaração e atribuição de valor às variáveis
  int N;
  struct livros Cadastro[N];
  printf("\nQuantos livros deseja registrar? (Máximo de 10) ");
  scanf("%d", &N);
  for (int i = 0; i < N && i < MaxL; i++){
//Cadastro da identificação
    printf("\nLivro %d\n", i+1);
    printf("Numero de identificacao do livro: ");
    scanf("%d", &Cadastro[i].Id);
//Cadastro do titulo
    printf("Titulo do livro: ");
    scanf("%s", Cadastro[i].Titulo);
    fflush(stdin);
//Cadastro do ano
    printf("Ano do livro: ");
    scanf("%d", &Cadastro[i].Ano);
//Cadastro do autor
    printf("Nome do autor do livro: ");
    scanf("%s", Cadastro[i].Autor);
    fflush(stdin);
    Biblioteca[i] = Cadastro[i];
  }
//Mensagem de confirmação
  printf("\nLivros cadastrados com sucesso!\n");
}
/*
PROCEDIMENTO
NOME: listalivros
PARAMETROS: N/A
RETORNO: N/A
*/
void listalivros (){
//Declaração e atribuição de valor às variáveis
  int x;
//Verificando quais livros cadastrados atendem à especificação do ano
  printf("\nDigite o ano dos livros que deseja listar: ");
  scanf("%d", &x);
  printf("\nLivros referentes ao ano %d:\n", x);
  for (int i = 0; i < MaxL; i++){
//Exibindo os livros que atendem à especificação do ano
    if(Biblioteca[i].Ano == x)
    printf("\nNumero de identificacao: %d\nTitulo: %s\nAutor: %s\n", Biblioteca[i].Id, Biblioteca[i].Titulo, Biblioteca[i].Autor);
  }
}
/*
PROCEDIMENTO
NOME: atualizatitulo
PARAMETROS: N/A
RETORNO: N/A
*/
void atualizatitulo (){
//Declaração e atribuição de valor às variáveis
  char nome[100];
  printf("\nDigite o titulo atual do livro: ");
  scanf("%s", nome);
//Verificação do nome digitado e alteração de titulos
  for (int i = 0; i < 100 && nome[i] != '\0'; i++){
    if (nome[i] == Biblioteca[i].Titulo[i]){
      printf("\nDigite o novo titulo: ");
      scanf("%s", Biblioteca[i].Titulo);
      printf("\nO livro %s, teve seu titulo alterado com sucesso para %s!\n", nome, Biblioteca[i].Titulo);
    }
  }
}
/*
PROCEDIMENTO
NOME: preenche_arquivo
PARAMETROS: N/A
RETORNO: N/A
*/
void preenche_arquivo (){
//Declaração e atribuição de valor às variáveis
  float N[MaxN];
//Abrindo o arquivo
  FILE *Numeros;
  Numeros = fopen("numeros.txt", "w");
//Verificando se o arquivo existe
  if (Numeros == NULL){
    printf("\nArquivo inexistente\n");
  }
//Preenchendo o arquivo
  for (int i = 0; i < MaxN; i++){
    printf("\nNumero %d: ", i + 1);
    scanf("%f", &N[i]);
    fprintf(Numeros, "%f", N[i]);
  }
  printf("\nArquivo preenchido com sucesso!\n");
  fclose(Numeros);
}
/*
PROCEDIMENTO
NOME: Mostra_soma_arquivo
PARAMETROS: N/A
RETORNO: N/A
*/
void Mostra_soma_arquivo (){
//Declaração e atribuição de valor às variáveis
  float N[MaxN], soma = 0, num;
//Abrindo o arquivo
  FILE *Numeros;
  Numeros = fopen("numeros.txt", "w");
//Verificando se o arquivo existe
  if (Numeros == NULL){
    printf("\nArquivo inexistente\n");
  }
//Mostrando a soma do conteudo do arquivo
  for (int i = 0; i < MaxN; i++){
    fscanf(Numeros, "%f", &N[i]);
    soma += N[i];
  }
  printf("\nSoma do conteudo do arquivo: %.1f\n", soma);
  fclose(Numeros);
}
/*
PROCEDIMENTO
NOME: abre_HTML
PARAMETROS: N/A
RETORNO: N/A
*/
void abre_HTML (){
//Declaração e atribuição de valor às variáveis
  FILE *Tabela;
  char V[1000];
//Abre o arquivo HTML
  Tabela = fopen("TabelaASCII.html", "r");
//Verifica se o arquivo existe
  if (Tabela == NULL){
    printf("\nArquivo inexistente\n");
    exit(0);
  }
//Exibe o arquivo
  else {
    while (!feof(Tabela)){
    fgets(V, 100, Tabela);
    printf("%s\t", V);
    }
  }
//Fecha o arquivo
  fclose(Tabela);
}
/*
PROCEDIMENTO
NOME: backup_HTML
PARAMETROS: N/A
RETORNO: N/A
*/
void backup_HTML(){
//Declaração e atribuição de valor às variáveis
  FILE *Tabela;
  FILE *Backup;
  char X[1000];
//Abrindo o arquivo HTML
  Tabela = fopen("TabelaASCII.html", "r");
//Verifica se o arquivo existe
  if(Tabela == NULL){
    printf("Arquivo Inexistente!\n");
    exit(0);
  }
//Abre arquivo de backup
  Backup = fopen("backup.html", "w");
//Faz o backup do arquivo, até chegar no ultimo caracter válido
  while (fgets (X, sizeof(X), Tabela) != '\0');
  fputs(X, Backup);
//Mensagem de confirmação do backup
  printf("\nBackup Realizado!!\n");
//fecha o arquivo HTML e o arquivo de backup
  fclose(Backup);
  fclose(Tabela);
}
struct In{
  int dia;
  int mes;
  int ano;
  int hora;
  int minuto;
};
struct Out{
  int dia;
  int mes;
  int ano;
  int hora;
  int minuto;
};
//Criação da struct principal
struct veiculos {
  int Cod;
  char Placa[7];
  char Modelo[30];
  struct In Entrada;
  struct Out Saida;
  float ValorPago;
};
struct veiculos Lista[MaxV];
/* Procedimento 1 -
Descrição:
Entradas: N/A
Saída: N/A
*/

/* Procedimento 2 -
Descrição:
Entradas: N/A
Saída: N/A
*/

/* Procedimento 3 -
Descrição:
Entradas: N/A
Saída: N/A
*/

/* Procedimento 4 -
Descrição:
Entradas: N/A
Saída: N/A
*/
//_________________________

int main() {
//ATRIBUINDO VARIAVEIS
  int op, op2;
//MENU
  do{
    printf("\nMENU DE OPCOES - PRINCIPAL\n");
    printf("[0] - Sair\n");
    printf("[1] - Registos Livros\n");
    printf("[2] - Arquivos Texto\n");
    printf("[3] - Arquivos Binários\n");
    printf("\nOpcao: ");
    scanf("%d", &op);
    fflush(stdin);
    switch (op){
      case 0: //Sai do programa
        printf("\nPrograma Encerrado!\n");
      break;
      case 1: //Programa Registros
        do{
          printf("\nMENU DE OPCOES - REGISTROS\n");
          printf("[0] - Sair\n");
          printf("[1] - Cadastro de Livros\n");
          printf("[2] - Lista Livros por Ano\n");
          printf("[3] - Atualiza nome de um livro\n");
          printf("\nOpcao: ");
          scanf("%d", &op2);
          fflush(stdin);
          switch (op2){
            case 0: //sair do programa de volta ao menu principal
            printf("\nVoltando ao Menu Principal\n...\n");
            break;
            case 1: //Cadastro de livros
              registralivros();
            break;
            case 2: //Lista livros por ano
              listalivros();
            break;
            case 3: //Atualiza nome de um livro pesquisado pelo usuário
              atualizatitulo();
            break;
            default:
              printf("\nOPCAO INVALIDA\n");
            break;
          }
        }while (op2 != 0);
      break;

      case 2: //Programa Arquivos Texto
        do{
          printf("\nMENU DE OPCOES - ARQUIVOS TEXTO\n");
          printf("[0] - Sair\n");
          printf("[1] - Preenche Aquivo Texto\n");
          printf("[2] - Soma do Conteudo do arquivo\n");
          printf("[3] - Abre arquivo HTML\n");
          printf("[4] - Faz backup do arquivo HTML\n");
          printf("\nOpcao: ");
          scanf("%d", &op2);
          fflush(stdin);
          switch (op2){
            case 0: //sair do programa de volta ao menu
            printf("\nVoltando ao Menu Principal\n...\n");
            break;
            case 1: //Preenche arquivo texto
              preenche_arquivo();
            break;
            case 2: //Mostra soma do conteudo do arquivo preenchido
              Mostra_soma_arquivo();
            break;
            case 3: //Abre arquivo HTML
              abre_HTML();
            break;
            case 4: //Faz backup de um arquivo HTML
              backup_HTML();
            break;
            default:
              printf("\nOPCAO INVALIDA\n");
            break;
          }
        }while (op2 != 0);
      break;

      case 3: //Programa Arquivos Binários
        do{
          printf("\nMENU DE OPCOES - ARQUIVOS BINARIOS\n");
          printf("[0] - Sair\n");
          printf("[1] - Cadastrar Veículos\n");
          printf("[2] - Listar Veículos\n");
          printf("[3] - Alterar Veículos\n");
					printf("[4] - Pesquisar por Placa\n");
					printf("[5] - Pesquisar por Modelo\n");
					printf("[6] - Lista por Data\n");
					printf("[7] - Backup dos dados em Arquivo Binário\n");
					printf("[8] - Restauração de dados de Arquivo Binário\n");
          printf("\nOpcao: ");
          scanf("%d", &op2);
          fflush(stdin);
          switch (op2){
            case 0: //sair do programa de volta ao menu principal
            printf("\nVoltando ao Menu Principal\n...\n");
            break;
            case 1:

            break;
            case 2:

            break;
            case 3:

            break;
						case 4:

            break;
						case 5:

            break;
						case 6:

            break;
						case 7:

            break;
						case 8:

            break;
            default:
              printf("\nOPCAO INVALIDA\n");
            break;
          }
        }while (op2 != 0);
      break;
      default:
        printf("\nOPCAO INVALIDA!\n");
      break;
    }
  }while (op != 0);
  return 0;
}
