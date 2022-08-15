#ifndef _LIBSTRABALHO2_H_
#define _LIBSTRABALHO2_H_

//Bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Funções utilizadas
void menu();
int **copiaMatrizImagem (int **mat, int lin, int col);
char *alocaString(int tamanho);
int **leArquivoImagem (char *nomeArqFisico, char *tipo, int *lin, int *col, int *maxVal);
int **alocaMatrizImagem(int lin, int col);
int **binarizar(int **mat, int lin, int col);
int **ruido(int **mat, int lin, int col);
int **negativo(int **mat, int lin, int col);
int **espelhar(int **mat, int lin, int col);
char *geraNomeArqSaida(char *nomeArqFisico, char* operacao);
int gravaImagem(char *nomeArqSaida, char *tipo, int lin, int col, int maxVal, int **mat);
void desalocaMatrizImagem(int **mat, int lin, int col);

#endif
