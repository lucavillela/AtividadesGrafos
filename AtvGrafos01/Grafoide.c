#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listase_simplesmente_encadeada.h"

typedef struct adjc{
	struct adjc* pontAdjc;
	struct vertice* pontProx;
}tp_listase;

typedef struct vertice{
	char rotulo;
	adjc* listaAdjc; 
}tp_listase;

int main(){
	
	char caracteresArquivo[100];
	char charAux;
	int index = 0, booleano = 0, contaVertice = 0;
	
	FILE *file;
	file = fopen("ABCD.txt", "r");
	if(!file){
		printf ("Erro na abertura do arquivo.");
		return 0;
	}
	else {
		printf("Arquivo acessado com sucesso!\n");
	}
	
	while((charAux = fgetc(file)) != EOF){
		if(charAux != 32){
			if(charAux == '\n' && booleano == 0){
				contaVertice = index;
				booleano = 1;
			}
			caracteresArquivo[index] = charAux;
			printf("%c", caracteresArquivo[index]);
			index++;
		}
	}
	
	fclose(file);
	return 0;
}


