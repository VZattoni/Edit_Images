/*
 * Aloca dinamicamente uma matriz, de acordo com as linhas e colunas enviadas como parâmetro
*/
#include "libsTrabalho2.h"

int **alocaMatrizImagem(int lin, int col){
    int **mat, i;
    mat = (int **) malloc ((lin) *sizeof(int *));
    for (i = 0; i < (lin); i++)
    {
        mat[i] = (int *) malloc (col * sizeof(int));
    }
    return mat;
}