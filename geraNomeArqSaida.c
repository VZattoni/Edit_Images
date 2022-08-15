/*
 * Gera o nome do arquivo que será salvado com as modificações 
*/

#include "libsTrabalho2.h"

char *geraNomeArqSaida(char *nomeArqFisico, char* operacao){
    char *nome = NULL;
    int tamanhoArq, tamanhoOp, i;
    tamanhoArq = strlen(nomeArqFisico);
    tamanhoOp = strlen(operacao);
    nome = alocaString(tamanhoArq + tamanhoOp + 1);
    
    //Copia nomeArqFisico para nome
    for (i = 0; i < tamanhoArq- 4; i++){
        nome[i] = nomeArqFisico[i];
    }

    //Copia operacao para nome
    for (i = 0; i < tamanhoOp; i++){
        nome[i+tamanhoArq - 4] = operacao[i];
    } 

    //Adiciona o finalizador de string para nome
    nome[tamanhoArq + tamanhoOp -4] = '.';
    nome[tamanhoArq + tamanhoOp -3] = 'p';
    nome[tamanhoArq + tamanhoOp -2] = 'g';
    nome[tamanhoArq + tamanhoOp -1] = 'm';
    nome[tamanhoArq + tamanhoOp] = '\0';
    //Retorna o *nome
    return nome;
}