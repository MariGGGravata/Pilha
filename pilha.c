#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha{
	
	int *vetor;
	int tp, qtde;
	
};

TPilha *criar(int qtde){
	
	TPilha *p = (TPilha*)malloc(sizeof(TPilha));
	p->qtde = qtde;
	p->vetor = (int *)malloc(qtde * sizeof(int));
	p->tp = -1;
	return p;
	
}

int esta_vazia(TPilha *p){
	
	return p->tp == -1;
}

int esta_cheia(TPilha *p){
	
	return p->tp == p->tp - 1;
	
}

void empilhar(TPilha *p,int x){
	
	if(esta_cheia(p)){  
	  
	  printf("\nA Pilha esta cheia.\n");
	  return;
	  
	} 
	
	p->tp++;      
	p->vetor[p->tp] = x;
		
}


int desempilhar (TPilha *p){
	
	if (esta_vazia(p)){
		
		printf("\nA Pilha esta vazia.\n");
		return -1;
				    
	} 
	
	p->tp--;	   
	return p->vetor[p->tp+1];
	
	
}

int tamanho(TPilha *p){
	
	return p->tp;
}

int topo(TPilha *p){
	
	return p->vetor[p->tp];
}

void exibe(TPilha *p){
	
	int i;
	
	if(esta_vazia(p)){
		
		printf("\nA pilha esta vazia.\n");
		return;
		
	}
	
	for(i = 0; i <= p->tp; i++){
		
		printf("%d\n", p->vetor[i]);
		
	}
	
}
