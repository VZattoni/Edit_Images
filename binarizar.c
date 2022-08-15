/*
 * Função para binarizar a imagem, ou seja, qualquer valor maior q 127 vira 255 e qualquer valor menor  vira 0.
 * Cria uma copia da matrizImagem original para ser posteriormente gravada em um novo arquivo.
*/
#include "libsTrabalho2.h"

int **binarizar(int **mat, int lin, int col){
    int **copia, i, j;
    //Faz a copia da matriz passada como parâmetro
    copia = copiaMatrizImagem(mat, lin, col);
    //Percorre cada valor da copia que sera alterada
    for (i = 0; i < (lin); i++)
    {
        for (j = 0; j < (col); j++){
            //Verifica o valor e altera pra 255 ou 0
            if (copia[i][j] > 127)
            {
                copia[i][j] = 255;
            }
            else
            {
                copia[i][j] = 0;
            }
        }
    }
    //Retorna **copia
    return copia;
}
