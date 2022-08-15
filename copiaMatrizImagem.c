/*
 * Função que faz uma copia da matriz original com os dados da imagem para uma cópia dessa matriz, essa qual será alterada.
 * Isso é feito para evitar que em toda operação tenha que ser refeita a leitura do arquivo original.
 * Para cada operação é criada uma cópia da matriz e que posteriormente é salvada no arquivo pgm resultado.
*/
#include "libsTrabalho2.h"

int **copiaMatrizImagem (int **mat, int lin, int col){
    int **aux, i, j;
    //Aloca a matriz auxiliar
    aux = alocaMatrizImagem(lin, col);
    //Copia elemento a elemento da matriz original para a auxiliar
    for (i = 0; i < (lin); i++)
    {
        for (j = 0; j < (col); j++){
            aux[i][j] = mat[i][j];
        }
    }
    //Retorna **aux
    return aux;
}
