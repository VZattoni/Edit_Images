/*
 * Função para negativar a imagem, mudando de 255 para 0 e vice-versa;
 * Cria uma copia da matrizImagem original para ser posteriormente gravada em um novo arquivo.
*/
#include "libsTrabalho2.h"

int **negativo(int **mat, int lin, int col){
    int **copia, i, j, valor, novoValor;
    //Faz a copia da matriz passada como parâmetro
    copia = copiaMatrizImagem(mat, lin, col);
    //Percorre cada valor da copia que sera alterada
    for (i = 0; i < (lin); i++)
    {
        for (j = 0; j < (col); j++)
            {
                //Atribui a uma variavel para calculo
                valor = copia[i][j];
                //Faz a inversão do valor
                novoValor = 255 - valor;
                //Atribui o novo valor à copia
                copia[i][j] = novoValor;
            }
    }
    //Retorna **copia
    return copia;
}