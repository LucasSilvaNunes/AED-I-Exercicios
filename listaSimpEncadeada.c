#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int cod;
  char nome[30];
  float preco;
  struct no *prox;
} no;

no *inicioL;

void inicializarLista() { 
  inicioL = NULL;
}

int listaVazia() {
  if (inicioL == NULL) {
    return 1;
  }
  return 0;
}

void insereInicio(int cod, char nome[], float preco) {
  no *aux;
  aux = (no *)malloc(sizeof(no));
  if (aux != NULL) {
    aux->cod = cod;
    for (int i = 0; i < 30; i++) {
      aux->nome[i] = nome[i];
    }
    aux->preco = preco;
    aux->prox = inicioL;
    inicioL = aux;
  } else {
    printf("\nLista vazia\n");
  }
}

void percorrerLista() {
  no *aux;
  if (!listaVazia()) {
    aux = inicioL;
    while (aux != NULL) {
      printf("\n Produto: \n");
      printf("\nCódigo: %d", aux->cod);
      printf("\nNome: %s", aux->nome);
      printf("Preço: %.2f\n", aux->preco);
      aux = aux->prox;
    }
  } else {
    printf("\nLista vazia\n");
  }
}

void insereFim(int cod, char nome[30], float preco) {
  no *aux, *p;
  p = (no *)malloc(sizeof(no));
  if (p != NULL) {
    p->cod = cod;
    for (int i = 0; i < 30; i++) {
      p->nome[i] = nome[i];
    }
    p->preco = preco;
    p->prox = NULL;
    if (listaVazia()) {
      inicioL = p;
    } else {
      aux = inicioL;
      while (aux->prox != NULL) {
        aux = aux->prox;
      }
      aux->prox = p;
    }
  }
}

void busca(int cod) {
  no *aux;
  aux = inicioL;
  if (!listaVazia()) {
    while (aux != NULL && aux->cod != cod) {
      aux = aux->prox;
    }
    if (aux == NULL) {
      printf("\nValor não encontrado na lista\n");
    } else {
      printf("\n Produto: \n");
      printf("\nCódigo: %d", aux->cod);
      printf("\nNome: %s", aux->nome);
      printf("Preço: %.2f\n", aux->preco);
    }
  } else {
    printf("Lista vazia!");
  }
}

void remover(int cod) {
  no *ant, *aux;
  aux = inicioL;
  ant = NULL;
  if (!listaVazia()) {

    while (aux != NULL && aux->cod != cod) {
      ant = aux;
      aux = aux->prox;
    }
    if (aux == NULL) {
      printf("\nValor nao encontrado.\n");
    }
    else{
      if(ant == NULL){
        inicioL = aux->prox;
        }
      else{
        ant ->prox = aux ->prox;
        }
      free(aux);
      }
  } else {
    printf("\nLista Vazia!");
  }
}

int main() {
  int resp = 0;
  int cod;
  char nome[30];
  float preco = 0;
  inicializarLista();
  while (resp != 5) {
    printf(
        "\nO que deseja fazer? \n1- Cadastrar o produto \n2- Exibir todos os "
        "produtos \n3- Buscar um produto pelo código \n4- Remover um "
        "produto pelo código \n5- Finalizar o programa\n\n-> ");
    scanf("%d", &resp);
    if (resp == 1) {
      printf("\nDigite o código do produto: ");
      scanf("%d", &cod);
      getchar();
      printf("\nDigite o nome do produto: ");
      fgets(nome, 30, stdin);
      printf("\nDigite o preço do produto: ");
      scanf("%f", &preco);
      insereInicio(cod, nome, preco);
    } else if (resp == 2) {
      percorrerLista();
    } else if (resp == 3) {
      printf("\nDigite o código do produto que deseja buscar: ");
      scanf("%d", &cod);
      busca(cod);
    } else if (resp == 4) {
      printf("\nDigite o código do produto que deseja remover: ");
      scanf("%d", &cod);
      remover(cod);
    } else {
      printf("\nTerminando o programa...");
      return 0;
    }
  }
}
