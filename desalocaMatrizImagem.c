//Função que desaloca a matriz recebida como parâmetro

#include "libsTrabalho2.h"

void desalocaMatrizImagem(int **mat, int lin, int col){
    int i,j;

    for (i = 0; i < lin; i++){
        free(mat[i]);
    }
    free(mat);
    return;
}