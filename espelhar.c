/*
 * Função para adicionar ruido a imagem, entre 0 e 100, respeitando o limite de 255.
 * Cria uma copia da matrizImagem original para ser posteriormente gravada em um novo arquivo.
*/
#include "libsTrabalho2.h"

int **espelhar(int **mat, int lin, int col){
    int **copia, i, j;
    int ruido, total;
    //Faz a copia da matriz passada como parâmetro
    copia = copiaMatrizImagem(mat, lin, col);
    //Percorre cada "pixel" da copia que sera alterada
    for (i = 0; i < (lin); i++)
    {
        for (j = 0; j < (col); j++){
            copia[i][j] = copia[i][col - j];
        }
    }
    //Retorna **copia
    return copia;
}