//Função que le os dados da imagem e o seu conteúdo e retorna um ponteiro para a main

#include "libsTrabalho2.h"

int **leArquivoImagem (char *nomeArqFisico, char *tipo, int *lin, int *col, int *maxVal){
    FILE *arq = fopen(nomeArqFisico, "r");
    int **mat, i, j;
    //Verifica se o arquivo abriu
    if (arq == NULL)
    {
        return NULL;
    }
    //Pega os dados do inicio do arquivo PGM
    fscanf(arq, "%s", tipo);
    fscanf(arq, "%d %d", col, lin);
    fscanf(arq, "%d", maxVal);
    //Chama a função para alocar a matriz
    mat = alocaMatrizImagem((*lin), (*col));
    //Atribui cada valora da matriz(Imagem) para a variavel **mat
    for (i = 0; i < (*lin); i++)
    {
        for (j = 0; j < (*col); j++){
            fscanf(arq, "%d ", &mat[i][j]);
        }
    }
    //Fecha o arquivo fisico
    fclose(arq);
    //Retorna **mat
    return mat;
}
