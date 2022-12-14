/*
a) inserir um dado elemento na primeira posição de uma lista;
b) inserir um dado elemento na última posição de uma lista;
c) modificar um elemento de uma lista, sendo dado a sua posição e o novo valor;
d) remover o primeiro elemento de uma lista;
e) remover o último elemento de uma lista;
f) remover um elemento dado o seu valor.
g) imprimir toda a lista
*/

//O código não está completo, ainda faltam algumas implementações de algumas funções

#include <stdio.h>
#define MAX 5
typedef struct lista{
  int valores[MAX];
  int n;
}lista;

void inicializar_lista(lista* L){
  L->n = 0;
}; 

int buscarValor(lista L, int valor){
    for(int i=0;i<L.n;i++){
        if(L.valores[i] == valor){
            return i;
        }
    }
    return -1;
}
void inserir_primeiro(lista* L, int valor){
  if(L->n > 0){
    
  }else{
    printf("Lista vazia!");
  }
}

void inserir_ultimo(lista* L,int valor){
  if(L->n < MAX){
    L->valores[L->n] = valor;
    (L->n)++;
  }
  else{
    printf("Lista cheia");
  }
}

void modificar_elemento(lista* L,int posicao, int novoValor){
  L->valores[posicao] = novoValor;
}

void remover_primeiro(lista* L){
  L->valores[0] = 0;
}

void remover_ultimo(lista* L){
  (L->n)--;
}
void remover_elemento(lista *L, int remov){
  for(int i = 0; i < L->n;i++){
    if(L->valores[i] == remov){
      L->valores[i] = 0;
    }
  }
}

void imprimir(lista L){
  printf("[ ");
  for(int i = 0; i < L.n; i++){
    printf("%d ",L.valores[i]);
  }
  printf("]");
}

int main(){
  int resp = 0; 
  lista l;
  inicializar_lista(&l);
  do{
    printf("\n1- Inserir valor na primeira pos.\n2-Inserir valor na ultima pos\n3- Modificar elemento.\n4- Remover o primeiro elem.\n5- Remover o ultimo elem.\n6- Remover elemento.\n7- Imprimir a lista toda.\n8- Sair.");
    printf("\nO que deseja fazer?\n");
    scanf("%d", &resp);
    int valor=0;
    switch(resp){
      case 1:
        printf("\nValor para isnerir: \n");
        scanf("%d",&valor);
        inserir_primeiro(&l,valor);
        break;
      case 2:
        printf("\nValor: \n");
        scanf("%d",&valor);
        inserir_ultimo(&l,valor);
        break;
      case 3:
        printf("");
        int posicao = 0, novoValor = 0;
        printf("\nPosição que deseja alterar: \n");
        scanf("%d",&posicao);
        printf("\nNovo valor: \n");
        scanf("%d",&novoValor);
        modificar_elemento(&l,posicao,novoValor);
        break;
      case 4:
        remover_primeiro(&l);
        break;
      case 5:
        remover_ultimo(&l);
        break;
      case 6:
        printf("");
        int remov;
        printf("Elemento a ser removido: ");
        scanf("%d",&remov);
        remover_elemento(&l,remov);
        break;
      case 7:
        imprimir(l);
        break;
      case 8:
        printf("\nEncerrando.............\n");
        break;
      default:
        printf("\nNúmero inválido\n");
        break;
    }
  }while(resp!=8);
}
