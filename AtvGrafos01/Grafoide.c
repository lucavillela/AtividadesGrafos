#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listase_simplesmente_encadeada.h"

typedef struct adjc{
	struct adjc* pontAdjc;
	struct vertice* pontProx;
}adjc;

typedef struct vertice{
	char rotulo;
	adjc* listaAdjc; 
}vertice;

typedef struct Grafo{
	vertice * raiz;
	int num_vertices;
}Grafo;


int main(){
	
	Grafo gr;
	gr.num_vertices = 0;
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
	
	gr.num_vertices = contaVertice;
	char pica[contaVertice];
	strncpy(pica, caracteresArquivo, contaVertice);
	int a;
	for(a = 0; a<contaVertice; a++){
		printf("\n%c", pica[a]);
	}
	
	
	
	// malloc sizeoff vertice
	// 
	
	printf("%d", contaVertice);
	fclose(file);
	return 0;
}


