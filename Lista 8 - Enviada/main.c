#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#define L 10
#define C 5
/*
PARAMETRO
NOME:preenchematriz
PARAMETRO: UMA MATRIZ LxC
RETORNO: N/A
*/
void preenchematriz(int mat[L][C]){
  int op;
  printf("\n [1] - Para preencher a matriz automaticamente \n [2] para preencher manualmente: ");
  scanf("%d", &op);
  do{
  if(op==1){
  for(int i=0; i<L; i++){
    for(int j=0; j<C; j++){  //preenchendo a matriz aleatoriamente
      mat[i][j] = rand()%10;
    }
  }
	}if(op == 2){
		printf("Digite os valores presentes na matriz: ");
		for(int i=0; i<L; i++){
    for(int j=0; j<C; j++){                     //preenchendo a matriz manualmente
    	scanf("%d", &mat[i][j]);
    }
  }
	}
  }while (op<1 || op>2);
}
/*
PARAMETRO
NOME:preenchematrizquad
PARAMETRO: UMA MATRIZ LxL
RETORNO: N/A
*/
void preenchematrizquad(int mat[L][L]){
  int op;
  printf("\n Digite 1 para preencher a matriz automaticamente ou 2 para preencher manualmente: ");
  scanf("%d", &op);
  do{
  if(op ==1){
  for(int i=0; i<L; i++){
    for(int j=0; j<L; j++){                             //preenchendo a matriz automaticamente
      mat[i][j] = rand()%10;
    }
  }
	}if(op == 2){
		printf("Digite os valores presentes na matriz: ");
		for(int i=0; i<L; i++){
    for(int j=0; j<L; j++){                             //preenchendo a matriz manualmente
    	scanf("%d", &mat[i][j]);
    }
  }
	}
  }while (op<1 || op>2);
}
/*
PARAMETRO
NOME: imprime
PARAMETRO: UMA MATRIZ LxC
RETORNO: N/A
*/
void imprime(int M[L][C]){
	printf("\n \n");
	for (int i=0; i<L; i++){
		printf("\n");
		for (int j=0; j<C; j++){                //mostrando a matriz
			printf("| %d |", M[i][j]);
		}
	}
	printf("\n \n");
}
/*
PARAMETRO
NOME: imprimequad
PARAMETRO: UMA MATRIZ LxL
RETORNO: N/A
*/
void imprimeq(int M[L][L]){
	printf("\n \n");
	for (int i=0; i<L; i++){
		printf("\n");
		for (int j=0; j<L; j++){                //mostrando a matriz quadrada
			printf("| %d |", M[i][j]);
		}
	}
	printf("\n \n");
}
/*
FUNÇÃO TIPO INTEIRO
NOME: somalinha
PARAMETRO: UMA MATRIZ LxC e um numero inteiro correspondente a linha desejada
RETORNO: um vetor soma inteiro
*/
int somalinha (int M[L][C], int linha1){
	int soma=0;
	for(int i=0; i<C; i++){
		soma+=M[linha1-1][i];           //somando a linha desejada
	}
	return soma;
}
/*
FUNÇÃO TIPO INTEIRO
NOME: somadiag
PARAMETRO: UMA MATRIZ LxL
RETORNO: a soma dos numeros posicionados acima da diagonal principal
*/
int somadiag (int M[L][L]){
	int soma=0;
	for(int i=0; i<L; i++){
		for(int j=0; j<L; j++){
			if(j>i){
				soma+=M[i][j];          //somando a diagonal
			}
		}
	}
	return soma;
}
/*
FUNÇÃO TIPO INTEIRO
NOME: mostradiagsec
PARAMETRO: UMA MATRIZ LxL
RETORNO: VARIAVEL INTEIRA
*/
int mostradiagsec (int M[L][L]){
	int soma=0;
	for(int i=0; i<L; i++){
		for(int j=0; j<L; j++){
			if(j+i==(L-1)){                 //somando a diagonal secundaria
				printf("| %d |", M[i][j]);
			}
		}
	}
	return soma;
}
/*
PROCEDIMENTO
NOME: preenchematrizxy
PARAMETRO: UMA MATRIZ X Y
RETORNO: N/A
*/
void preenchematrizxy(int M4[100][100], int X, int Y){
	int op;
	printf("\n [1] - Para preencher a matriz automaticamente \n [DIFERENTE DE 1] Para preencher manualmente \n");
  scanf("%d", &op);
  if(op==1){
  	for(int i=0; i<X; i++){
    	for(int j=0; j<Y; j++){                             //preenchendo a matriz automaticamente
      	M4[i][j] = rand()%10;
    	}
  	}
	}
	if(op != 1){
		printf("Digite os valores presentes na matriz: ");      //preenchendo a matriz manualmente
		for(int i=0; i<X; i++){
    	for(int j=0; j<Y; j++){
    		scanf("%d", &M4[i][j]);
    	}
  	}
	}
	printf("\n \n");
	for (int i=0; i<X; i++){
		printf("\n");
		for (int j=0; j<Y; j++){                            //mostrando a matriz
			printf("| %d |", M4[i][j]);
		}
	}
	printf("\n \n");
}
/*
FUNÇÃO TIPO INTEIRO
NOME: ampitude
PARAMETRO: uma matriz, X e Y inteiros
RETORNO: a subtração do maior pelo menor
*/
int amplitude (int Mat[100][100], int X, int Y){
  int maior = Mat[0][0], menor = Mat[0][0];
  for (int i = 0; i < X; i++){
    for (int j = 0; j < Y; j++){
  // Definição do maior
      if (Mat[i][j] > maior)
        maior = Mat[i][j];
  // Definição do menor
      if (Mat[i][j] < menor)
        menor = Mat[i][j];
    }
  }
  printf("\nMaior: %d\nMenor: %d\n", maior, menor);
  return (maior - menor);               //retornando a amplitude
}
/*
PROCEDIMENTO
NOME: somamatrizs
PARAMETROS: uma Matriz, X e Y inteiros
RETORNO: N/A
*/
void somamatrizs (int M4[100][100], int X, int Y){
	int M6[X][Y], M62[X][Y];
	printf("\n Digite os valores presentes na matriz: ");
	for(int i=0; i<X; i++){
    for(int j=0; j<Y; j++){
    	scanf("%d", &M6[i][j]);
			M62[i][j]=M4[i][j]+M6[i][j];        //somando as matrizes e armazenando numa 3 matriz
    }
  }
	printf("\n \n");
	for (int i=0; i<X; i++){
		printf("\n");
		for (int j=0; j<Y; j++){            //mostrando as matrizes
			printf("| %d |", M4[i][j]);
		}
	}
	printf("\n \n");
	for (int i=0; i<X; i++){
		printf("\n");
		for (int j=0; j<Y; j++){
			printf("| %d |", M6[i][j]);
		}
	}
	printf("\n \n");

	printf("RESULTADO DA SOMA DAS DUAS MATRIZES\n \n");
	for (int i=0; i<X; i++){
		printf("\n");
		for (int j=0; j<Y; j++){
			printf("| %d |", M62[i][j]);
		}
	}
	printf("\n \n");
}
/*
FUNÇÃO
NOME: triangular tipo booleana
PARAMETROS: uma Matriz, X e Y inteiros
RETORNO: UM VALOR BOOLEANO
*/
bool triangular(int M7[100][100], int X, int Y){
	int contmenor=0, contmaior=0;
	for (int i=0; i<X; i++){
		for(int j=0; j<Y; j++){
			if(j>i){
				if(M7[i][j]!=0)
					contmaior++;
			}else if(j<i){                  //verificando as condiçoes
				if(M7[i][j]!=0)
					contmenor++;
			}
		}
	}
	if(contmaior==0 || contmenor==0)            //retornando o resuldado da verificação
		return true;
	else
		return false;
}
/*
FUNÇÃO
NOME: "quadratica" tipo booleana
PARAMETROS: uma Matriz, X e Y inteiros
RETORNO: UM VALOR BOOLEANO
*/
bool quadratica (int M8[100][100], int X, int Y){
	if(X==Y)
		return true;            //verificando o que se pede e retornando o resultado
	else
		return false;
}
/*
FUNÇÃO
NOME: "determinante" tipo inteiro
PARAMETROS: uma Matriz, X e Y inteiros
RETORNO: UM VALOR int determinante
*/
int determinante (int M9[100][100], int X, int Y){
	int soma1, soma2;
	if(X==4 && Y==4){
	soma1= (M9[0][0]*M9[1][1]*M9[2][2]*M9[3][3])+(M9[0][1]*M9[1][2]*M9[2][3]*M9[3][0])+(M9[0][2]*M9[1][3]*M9[2][0]*M9[3][1])+(M9[0][3]*M9[1][0]*M9[2][1]*M9[3][2]);
	soma2= (M9[0][3]*M9[1][2]*M9[2][1]*M9[3][0])-(M9[0][0]*M9[1][3]*M9[2][2]*M9[3][1])-(M9[0][1]*M9[1][0]*M9[2][3]*M9[3][2])-(M9[0][2]*M9[1][1]*M9[2][0]*M9[3][3]); //determinante de matriz 4x4

	}
	if(X==3 && Y==3){
	soma1= (M9[0][0]*M9[1][1]*M9[2][2])+(M9[0][1]*M9[1][2]*M9[2][0])+(M9[0][2]*M9[1][0]*M9[2][1]);
	soma2= (M9[0][0]*M9[1][1]*M9[2][2])-(M9[0][1]*M9[1][2]*M9[2][0])-(M9[0][2]*M9[1][0]*M9[2][1]);//determinante de matriz 3x3

	}
	if(X==2 && Y==2){
	soma1= (M9[0][0]*M9[1][1]);
	soma2= (M9[0][1]*M9[1][0]);//determinante de matriz 2x2
	}
	soma1-=soma2;
	return soma1; //retornando o resultado
}
/*
FUNÇÃO
NOME: "simetrica" tipo booleano
PARAMETROS: uma Matriz, X e Y inteiros
RETORNO: UM VALOR booleano
*/
bool simetrica (int M10[100][100], int X, int Y){
	for(int i=0; i<X; i++){
		for(int j=0; j<Y; j++){
			if(M10[i][j]!=M10[j][i]){     // if verificando se a matriz e simetrica e retornando o resultado
				return false;
			}
		}
	}
	return true;
}
/*
FUNÇÃO
NOME: "comparalindiag" tipo booleano
PARAMETROS: uma Matriz, X e Y inteiros
RETORNO: UM VALOR booleano
*/
bool comparalindiag (int M11[100][100], int X, int Y){
int V1[X], V2[X];
	for(int i=0; i<Y; i++){
		V1[i]=M11[0][i];
		V2[i]=M11[i][i];                //salvando os valores da diagonal e da primeira linha em vetores
	}
	for (int i=0; i<Y; i++){
		if(V1[i]!=V2[i]){       //comparando os vetores e retornando o resultado
			return false;
		}
	}
	return true;
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  srand(time(NULL));
  int op, MATRIZ[L][C], linha1, M2[L][L], MATRIZ4[100][100], M7[3][3], X=4, Y=4;;
	bool resp;
  do {
  printf("\n\n|MENU DE OPÇÕES|");
  printf("\n - [0] - Sair");
  printf("\n - [1] - SOMA LINHA MATRIZ");
  printf("\n - [2] - SOMA ACIMA DIAGONAL PRINCIPAL");
  printf("\n - [3] - MOSTRA DIAGONAL SECUNDARIA");
  printf("\n - [4] - PREENCHE MATRIZ M N");
  printf("\n - [5] - AMPLITUDE DA MATRIZ");
  printf("\n - [6] - SOMA MATRIZES");                               //menu inicial
  printf("\n - [7] - MATRIZ TRIANGULAR");
  printf("\n - [8] - VERIFICA SE É MATRIZ QUADRATICA");
  printf("\n - [9] - DETERMINANTE");
  printf("\n - [10] - VERIFICA MATRIZ SIMETRICA");
  printf("\n - [11] - COMPARA DIAGONAL PRINCIPAL COM A PRIMEIRA LINHA\n");
  printf("\nDigite o numero da opção desejada: ");
  scanf("%d", &op);
    switch (op){
      case 0:
        printf("Fim");
      break;
      case 1:
				printf("Digite a linha que deseja saber a soma: ");
				scanf("%d", &linha1);
				if(linha1 <= L && linha1 >=0)
        preenchematriz(MATRIZ);                                     //pergundando os parametros, solicitando o preenchimento da matriz
				printf("A Soma da Linha %d da Matriz:", linha1);
				imprime(MATRIZ);                                    // chamando a função imprime
				printf("\n É %d",somalinha(MATRIZ, linha1));        //chamando a função e mostrando o resultado
      break;
      case 2:
				preenchematrizquad(M2);                 // chamando a função para preencher a matriz
				imprimeq(M2);                       // chamando a função imprime
				printf("a soma dos valores posicionados acima da diagonal principal é: %d", somadiag(M2)); //mostrando o resultado da soma da diagonal
      break;
      case 3:
      	preenchematrizquad(M2);  // chamando a função para preencher a matriz
				imprimeq(M2);     // chamando a função imprime
				mostradiagsec(M2);  //chamando a função para mostrar a diagonal secundaria
      break;
      case 4:
				printf("\n [1] - Para seleionar a quantidade de linhas e colunas \n [DIFERENTE DE 1] Para utilizar a quantidade de linhas e colunas parametrizadas \n");
  			scanf("%d", &op);
				if(op==1){
					printf("\n Digite a Quantidade de Linhas: ");
					scanf("%d", &X);                                //coletando a quantidade de linhas e colunas
					printf("\n Digite a Quantidade de Colunas: ");
					scanf("%d", &Y);
				}
				preenchematrizxy(MATRIZ4, X, Y);   //solicitando o preenchimento da matriz
				X=4;
				Y=4;
      break;
      case 5:
				printf("\n [1] - Para seleionar a quantidade de linhas e colunas \n [DIFERENTE DE 1] Para utilizar a quantidade de linhas e colunas parametrizadas \n");
  			scanf("%d", &op);
				if(op==1){
					printf("\n Digite a Quantidade de Linhas: ");
					scanf("%d", &X);                                    //coletando a quantidade de linhas e colunas
					printf("\n Digite a Quantidade de Colunas: ");
					scanf("%d", &Y);
				}
				preenchematrizxy(MATRIZ4, X, Y);              //solicitando o preenchimento da matriz
				printf("\nA amplitude da matriz é: %d", amplitude(MATRIZ4, X, Y));
				X=4;
				Y=4;
      break;
      case 6:
				printf("\n [1] - Para seleionar a quantidade de linhas e colunas \n [DIFERENTE DE 1] Para utilizar a quantidade de linhas e colunas parametrizadas \n");
  			scanf("%d", &op);
				if(op==1){
					printf("\n Digite a Quantidade de Linhas: ");
					scanf("%d", &X);                                    //coletando a quantidade de linhas e colunas
					printf("\n Digite a Quantidade de Colunas: ");
					scanf("%d", &Y);
				}
        preenchematrizxy(MATRIZ4, X, Y);                      //solicitando o preenchimento da matriz
				somamatrizs(MATRIZ4, X, Y);
				X=4;
				Y=4;
      break;
      case 7:
       	printf("\n [1] - Para seleionar a quantidade de linhas e colunas \n [DIFERENTE DE 1] Para utilizar a quantidade de linhas e colunas parametrizadas \n");
  			scanf("%d", &op);
				if(op==1){
					printf("\n Digite a Quantidade de Linhas: ");
					scanf("%d", &X);                                    //coletando a quantidade de linhas e colunas
					printf("\n Digite a Quantidade de Colunas: ");
					scanf("%d", &Y);
				}
				preenchematrizxy(MATRIZ4, X, Y);                  //solicitando o preenchimento da matriz
				resp=triangular(MATRIZ4, X, Y);                     //chamando a função para verificar a condição
				if(resp)
					printf("A Matriz é triangular");
				else                                        //mostrando o resultado
					printf("A Matriz não é triangular");
				X=4;
				Y=4;
      break;
      case 8:
				printf("\n [1] - Para seleionar a quantidade de linhas e colunas \n [DIFERENTE DE 1] Para utilizar a quantidade de linhas e colunas parametrizadas \n");
  			scanf("%d", &op);
				if(op==1){
					printf("\n Digite a Quantidade de Linhas: ");
					scanf("%d", &X);                                //coletando a quantidade de linhas e colunas
					printf("\n Digite a Quantidade de Colunas: ");
					scanf("%d", &Y);
				}
        resp = quadratica(MATRIZ4, X, Y);               //chamando a função para verificar a condição
				if(resp){
					printf("\nA Matriz é Quadratica");          //mostrando o resultado
					}else{
					printf("\nA Matriz não é Quadratica");}
      break;
      case 9:
				X=3;
				Y=3;
        printf("\n [1] - Para seleionar a quantidade de linhas e colunas \n [DIFERENTE DE 1] Para utilizar a quantidade de linhas e colunas parametrizadas \n\n!!O PROGRAMA SUPORTA MATRIZES ATE TAMANHO 3X3\n");
  			scanf("%d", &op);
				if(op==1){
					printf("\n Digite a Quantidade de Linhas: ");
					scanf("%d", &X);                                    //coletando a quantidade de linhas e colunas
					printf("\n Digite a Quantidade de Colunas: ");
					scanf("%d", &Y);
				}
					preenchematrizxy(MATRIZ4, X, Y);                //solicitando o preenchimento da matriz
				  resp = quadratica(MATRIZ4, X, Y);                 //verificando se a matriz é quadratica
				if(resp){
					printf("\nA Determinante é %d", determinante(MATRIZ4, X, Y));
					}else{                                                          //demonstrando o resultado para o usuario
					printf("\nA Matriz não é Quadratica");}
				X=4;
				Y=4;
      break;
      case 10:
        printf("\n [1] - Para seleionar a quantidade de linhas e colunas \n [DIFERENTE DE 1] Para utilizar a quantidade de linhas e colunas parametrizadas \n");
  			scanf("%d", &op);
				if(op==1){
					printf("\n Digite a Quantidade de Linhas: ");
					scanf("%d", &X);                                    //coletando a quantidade de linhas e colunas
					printf("\n Digite a Quantidade de Colunas: ");
					scanf("%d", &Y);
				}
					preenchematrizxy(MATRIZ4, X, Y);                    //solicitando o preenchimento da matriz
					resp = simetrica (MATRIZ4, X, Y);                   //verificando a condição de ser simetrica
				if(resp)
					printf("Matriz é simetrica");
				else                                        //mostrando o resultado para o usuario
					printf("Matriz Não é Simetrica");
      break;
      case 11:
				printf("\n [1] - Para seleionar a quantidade de linhas e colunas \n [DIFERENTE DE 1] Para utilizar a quantidade de linhas e colunas parametrizadas \n");
  			scanf("%d", &op);
				if(op==1){
					printf("\n Digite a Quantidade de Linhas: ");
					scanf("%d", &X);                                    //coletando a quantidade de linhas e colunas
					printf("\n Digite a Quantidade de Colunas: ");
					scanf("%d", &Y);
				}
				if(quadratica(MATRIZ4, X, Y)){                  //condição ser quadratica para entrar no IF
					preenchematrizxy(MATRIZ4, X, Y);                //solicitando o preenchimento da matriz
        resp = comparalindiag(MATRIZ4, X, Y);                   //funçãp para comparar o que se pede
        if(resp == true)
          printf("\nA primeira linha da matriz é igual sua diagonal principal\n");
        else //resp == false                                                            //mostrando o resultado para o usuario
          printf("\nA primeira linha da matriz nao eh igual sua diagonal principal\n");
				}
				else
					printf("Matriz Invalida para este procedimento");
      break;
      default:
        printf("\nOpção Invalida");    //para caso o usuario digite algo fora do 0 a 11
      break;
    }
  } while (op != 0);        //laço de repetição enquanto o usuario não digitar 0
  return 0;
}
