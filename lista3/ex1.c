#include <stdio.h>
#define MAX 4

typedef struct pilha{
  int valores[MAX];
  int topo;
}pilha;

void inicializa_pilha(int *topo){
  *topo = -1;
}

int pilha_cheia(int topo){
  return(topo==MAX-1);
}

int pilha_vazia(int topo){
  return(topo==-1);
}

void mostra_valor_topo(pilha *pilha){
  if(!pilha_vazia(pilha->topo)){
    printf("\nTopo da pilha: %d\n",pilha->valores[pilha->topo]);
  }
  else{
    printf("\nPilha vazia.\n");
  }
}

void empilha(pilha * p, int valor){
  if(!pilha_cheia(p->topo)){
    (p->topo)++; // aponta pro ultimo elem inserido, andando com o topo vasco
    p->valores[p->topo] = valor; // 
    printf("\nEmpilhou\n");
  }
  else{
    printf("\nPilha cheia\n");
  }
}
void desempilha(pilha * p){
  if(!pilha_vazia(p->topo)){
    printf("\nValor %d desempilhado!\n",p->valores[p->topo]);
    (p->topo)--;
  }
  else{
    printf("\nPilha vazia\n");
  }
}

int main(){
  
  int valor;
  pilha p;
  inicializa_pilha(&p.topo);
  for(int i=0; i<MAX;i++){
    printf("valor = ");
    scanf("%d",&valor);
    if(valor%2==0){
      empilha(&p, valor);
    }
    
    else{
      desempilha(&p);
    }
  }
  for(int i = p.topo; i>=0; i--){
    desempilha(&p);
  }
  return 0;
}
