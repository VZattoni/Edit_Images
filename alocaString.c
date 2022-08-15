/*
 * Aloca dinamicamente uma string, de acordo com o tamanho enviado como parâmetro
*/
#include "libsTrabalho2.h"

char *alocaString (int tamanho){
    char *vet;
    vet = (char *) malloc(tamanho * sizeof(char));
    //Retorna o ponteiro
    return vet;
}