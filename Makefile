####################################################
#======================================================

all: saida
	@echo " "
	@echo "Compilacao Concluida com Sucesso"
	@echo " "

#======================================================
# Cria um executavel a partir dos arquivos .o
saida: main.o alocaMatrizImagem.o alocaString.o binarizar.o copiaMatrizImagem.o desalocaMatrizImagem.o espelhar.o geraNomeArqSaida.o gravaImagem.o leArquivoImagem.o menu.o negativo.o ruido.o
	gcc -o saida main.o alocaMatrizImagem.o alocaString.o binarizar.o copiaMatrizImagem.o desalocaMatrizImagem.o espelhar.o geraNomeArqSaida.o gravaImagem.o leArquivoImagem.o menu.o negativo.o ruido.o

#======================================================
# Cria main.o
main.o: main.c
	gcc -o main.o -c main.c

#========================================================
# Cria alocaMatrizImagem.o
alocaMatrizImagem.o: alocaMatrizImagem.c
	gcc -o alocaMatrizImagem.o -c alocaMatrizImagem.c

#========================================================
# Cria alocaString.o
alocaString.o: alocaString.c
	gcc -o alocaString.o -c alocaString.c

#=========================================================
# Cria binarizar.o
binarizar.o: binarizar.c
	gcc -o binarizar.o -c binarizar.c

#=========================================================
# Cria copiaMatrizImagem.o
copiaMatrizImagem.o: copiaMatrizImagem.c
	gcc -o copiaMatrizImagem.o -c copiaMatrizImagem.c

#=========================================================

# Cria desalocaMatrizImagem.o
desalocaMatrizImagem.o: desalocaMatrizImagem.c
	gcc -o desalocaMatrizImagem.o -c desalocaMatrizImagem.c

#=========================================================
# Cria espelhar.o
espelhar.o: espelhar.c
	gcc -o espelhar.o -c espelhar.c

#=========================================================
# Cria geraNomeArqSaida.o
geraNomeArqSaida.o: geraNomeArqSaida.c
	gcc -o geraNomeArqSaida.o -c geraNomeArqSaida.c

#=========================================================
# Cria gravaImagem.o
gravaImagem.o: gravaImagem.c
	gcc -o gravaImagem.o -c gravaImagem.c

#=========================================================
# Cria leArquivoImagem.o
leArquivoImagem.o: leArquivoImagem.c
	gcc -o leArquivoImagem.o -c leArquivoImagem.c

#=========================================================
# Cria menu.o
menu.o: menu.c
	gcc -o menu.o -c menu.c

#=========================================================
# Cria negativo.o
negativo.o: negativo.c
	gcc -o negativo.o -c negativo.c

#=========================================================
# Cria ruido.o
ruido.o: ruido.c
	gcc -o ruido.o -c ruido.c

#=========================================================
#clean: apaga os arquivos .o ao digitarmos make clean na console
clean:
	rm -f *.o

#=========================================================
#execClean: apaga o arquivo executável ao digitarmos make cleanExec na console
execClean:
	rm -f saida
