/*
 * Função main com o objetivo de realizar modificações na imagem passada como parâmetro
 * Caso o numero de parâmetros seja inválido já cancela a execução
 */

#include "libsTrabalho2.h"

int gravaImagem(char *nomeArqSaida, char *tipo, int lin, int col, int maxVal, int **mat){
    FILE *arq = fopen(nomeArqSaida, "w");
    int i,j;
    //Verifica se o arquivo abriu e retorna codigo de erro em caso de erro
    if (arq == NULL)
    {
        return 1;
    }
    //Pega os dados do inicio do arquivo PGM
    fprintf(arq, "%s\n", tipo);
    fprintf(arq, "%d %d\n", col, lin);
    fprintf(arq, "%d\n", maxVal);
    //Imprime item a item no arquivo
    for (i = 0; i < (lin); i++)
    {
        for (j = 0; j < (col); j++){
            fprintf(arq, "%d ", mat[i][j]);
        }
        fprintf(arq,"%s", "\n");
    }
    fclose(arq);
    //Retorna 0 para mensagem de sucesso
    return 0;
}