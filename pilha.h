typedef struct pilha TPilha;

TPilha *criar(int qtde);
void empilhar(TPilha *p, int x);
int desempilhar(TPilha *p);
int topo(TPilha *p);
int esta_vazia(TPilha *p);
int esta_cheia(TPilha *p);
void exibe(TPilha *p);
int tamanho(TPilha *p);
