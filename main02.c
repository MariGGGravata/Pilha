#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	TPilha *p = criar(100);
	
	empilhar(p, 1);
	empilhar(p, 3);
	empilhar(p, 5);
	empilhar(p, 7);
	empilhar(p, 9);
	
	exibe(p);
	
		
void inverter(TPilha *p){
	
	TPilha *a1, *a2;
    
    a1 = criar(tamanho(p));
    a2 = criar(tamanho(p));

  while(!esta_vazia(p)){
  	
  	empilhar(a1, desempilhar(p));
  	
  }
  while(!esta_vazia(a1)){
  	
  	empilhar(a2, desempilhar(a1));
  	
  }
  while(!esta_vazia(a2)){
  	
  	empilhar(p, desempilhar(a2));
  	
  }
            
            
}

	inverter(p);
	
	printf("\n--------------------\n");
	
	exibe(p);	
	
	return 0;
}
