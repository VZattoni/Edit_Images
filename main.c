#include "libsTrabalho2.h"

/*
 * Função main: objetivo de realizar modificações na imagem passada como parâmetro
 * Caso o número de parâmetros seja inválido a execução é cancelada
 */

int main (int argc, char *argv[]){
    srand(time(NULL));
    int opt = 1, lin, col, maxVal, gravou;
    char *tipo, *nomeArqFisico, *nomeArqSaida;
    int **matImagem, **matCopia;
    printf("\n  Aluno: Victor Armado Zattoni RA: 2129221  \n");
    //Verificação dos parâmetros recebidos na main.
    if (argc != 2)
    {
        printf("\nNumero de argumentos invalido! Digite o nome do executavel e o nome do arquivo/imagem de entrada.\n\n");
        return 1;
    }
    //Aloca espaço para a string que armazenará o nome do arquivo(imagem) a ser lido, o qual foi recebido como argumento na função main 
    nomeArqFisico = alocaString(20);
    //Copia para a string alocada dinamicamente (nomeArqFisico) o nome do arquivo(imagem) recebido na função main  
    strcpy(nomeArqFisico, argv[1]);
    //==Completar: chamada pra alocaString para alocação da string tipo, a qual é passada como parâmetro para a função leArquivoImagem, onde, então, é feita a leitura do tipo da imagem (conforme descrito na especificação) 
    tipo = alocaString(2);
    //==Completar: chamada para leArquivoImagem. O retorno desta função deve ser atribuído à variável matImagem 
    matImagem = leArquivoImagem(nomeArqFisico, tipo, &lin, &col, &maxVal);
    if (matImagem == NULL)
    {
        printf("\nProblema ao abrir imagem. Execucao finalizada.\n");
    }
    while (opt != 0){
        //Função que mostra as opções para o usuário ao executar o programa     
        menu();
        scanf("%d", &opt);
        switch (opt){
            //matCopia recebe a matriz da imagem ja modificada
            case 1: matCopia = binarizar(matImagem, lin, col);
                    nomeArqSaida = geraNomeArqSaida(nomeArqFisico, "binarizar");
                    gravou = gravaImagem(nomeArqSaida, tipo, lin, col, maxVal, matCopia);
                    if (gravou == 0)
                    {
                        printf("Operação de binarizacao realizada com sucesso.\n");
                    }
                    else if (gravou == 1)
                    {
                        printf("Erro ao abrir arquivo de saida.\n");
                    }                
                    break;
            case 2: matCopia = ruido(matImagem, lin, col); 
                    nomeArqSaida = geraNomeArqSaida(nomeArqFisico, "ruido");
                    gravou = gravaImagem(nomeArqSaida, tipo, lin, col, maxVal, matCopia);
                    if (gravou == 0)
                    {
                        printf("Operação de ruido realizada com sucesso.\n");
                    }
                    else if (gravou == 1)
                    {
                        printf("Erro ao abrir arquivo de saida.\n");
                    }
                    break;
            case 3: matCopia = negativo(matImagem, lin, col);
                    nomeArqSaida = geraNomeArqSaida(nomeArqFisico, "negativo");
                    gravou = gravaImagem(nomeArqSaida, tipo, lin, col, maxVal, matCopia);
                    if (gravou == 0)
                    {
                        printf("Operação de negativo realizada com sucesso.\n");
                    }
                    else if (gravou == 1)
                    {
                        printf("Erro ao abrir arquivo de saida.\n");
                    }
                    break;
            case 4: matCopia = espelhar(matImagem, lin, col);
                    nomeArqSaida = geraNomeArqSaida(nomeArqFisico, "espelhar");
                    gravou = gravaImagem(nomeArqSaida, tipo, lin, col, maxVal, matCopia);
                    if (gravou == 0)
                    {
                        printf("Operação de espelhamento realizada com sucesso.\n");
                    }
                    else if (gravou == 1)
                    {
                        printf("Erro ao abrir arquivo de saida.\n");
                    }                    
                    break;
        }
    }
    return 0;
}
