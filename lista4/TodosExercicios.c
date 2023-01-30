#include <stdio.h>
#include <stdlib.h>
typedef struct no {
  int info;
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

void insereInicio(int valor) {
  no *aux;
  aux = (no *)malloc(sizeof(no));
  if (aux != NULL) {
    aux->info = valor;
    aux->prox = inicioL;
    inicioL = aux;
  } else {
    printf("\nNão foi possivel inserir");
  }
}

void insereFim(int valor) {
  no *aux, *p;
  aux = (no *)malloc(sizeof(no));
  if (aux != NULL) {
    aux->info = valor;
    aux->prox = NULL;
    if (!listaVazia()) {
      p = inicioL;
      while (p != NULL) {
        p = p->prox;
      }
      p->prox = aux;
    } else {
      inicioL = aux;
    }
  }
}

void percorrerLista() {
  no *aux;
  if (!listaVazia()) {
    aux = inicioL;
    while (aux != NULL) {
      printf("%d ", aux->info);
      aux = aux->prox;
    }
  } else {
    printf("\nLista vazia!");
  }
}
// Exercicio 1 soma de todos os valores dentro dos nós
int somaValores() {
  no *aux;
  int soma = 0;
  if (!listaVazia()) {
    aux = inicioL;
    while (aux != NULL) {
      soma += aux->info;
      aux = aux->prox;
    }
    return soma;
  } else {
    printf("\nLista vazia!");
  }
}

// Exercício 2 quantos nós tem na lista
int somaNos() {
  no *aux;
  int contador = 0;
  if (!listaVazia()) {
    aux = inicioL;
    while (aux != NULL) {
      contador += 1;
      aux = aux->prox;
    }
    return contador;
  } else {
    printf("\nLista vazia!");
  }
}

// Exercicio 3 quantos nós tem valores dentro deles maior que o informado
int percorrerComN(int n) {
  no *aux;
  int contador = 0;
  if (!listaVazia()) {
    aux = inicioL;
    while (aux != NULL) {
      if (aux->info > n) {
        contador++;
      }
      aux = aux->prox;
    }
    return contador;
  } else {
    printf("\nLista vazia!");
  }
}

// Exercício 4 retornar o ultimo nó
int ultimoNo() {
  no *aux;
  if (!listaVazia()) {
    aux = inicioL;
    while (aux->prox != NULL) {
      aux = aux->prox;
    }
    return aux->info;
  } else {
    printf("\nLista vazia!");
  }
}
// Exercício 5 dar um valor e remover o nó q contem esse valor da lista
int removeTodos(int valor) {
  no *aux, *ant;
  int check = 0;
  if (!listaVazia()) {
    aux = inicioL;
    if (aux->info == valor) {
      inicioL = aux->prox;
      check++;
    } else {
      while (aux != NULL && aux->info != valor) {
        ant = aux;
        aux = aux->prox;
      }
      if (aux == NULL) {
        return check;
        printf("\nNenhuma ocorrencia encontrada!");
      } else {
        ant->prox = aux->prox;
        check++;
      }
    }
    free(aux);
    return check;
  } else {
    printf("\nLista vazia");
  }
}
// Exercicio 6 inserir numero dado em posição dada
void inserePos(int valor, int pos) {
  no *aux, *ant, *index;
  int cont = 1;
  if (!listaVazia()) {
    aux = (no*) malloc(sizeof(no));
    aux->info = valor;
    index = inicioL;
    while (cont < pos) {
      ant = index;
      index = index->prox;
      cont++;
    }
    ant->prox = aux;
    aux->prox = index;
  }else{
    printf("\nLista vazia");
  }
}

int main() {
  int escolha = 0;
  int num;
  inicializarLista();
  do {
    printf("\n1 - Inserir\n2 - Percorrer\n3 - Soma dos valores\n4 - Quantidade "
           "de nós\n5 - Valores maiores que n\n6 - Último nó\n7 - Remover "
           "recorrências\n8 - Inserir em tal posição\n9 - Sair\n");
    scanf("%d", &escolha);
    if (escolha == 1) {
      printf("Digite um número para inserir: ");
      scanf("%d", &num);
      insereInicio(num);
    } else {
      if (escolha == 2) {
        percorrerLista();
      } else {
        if (escolha == 3) { //exercicio 1

          printf(" A soma dos valores inseridos é: %d", somaValores());
        } else {
          if (escolha == 4) { //exercicio 2
            printf("A quantidade de nós é: %d", somaNos());
          } else {
            if (escolha == 5) {//exercicio 3
              int nMaiores;
              printf("Digite um valor: ");
              scanf("%d", &nMaiores);
              printf("Foram encontradas %d ocorrências",
                     percorrerComN(nMaiores));
            } else {
              if (escolha == 6) {//exercicio 4
                printf("O valor do último nó é %d", ultimoNo());
              } else {
                if (escolha == 7) {//exercicio 5
                  int check = 1;
                  printf("\nDigite o número que deseja remover: ");
                  scanf("%d", &num);
                  while (removeTodos(num) != 0);
                  printf("\nOcorrências removidas.");
                } else {//exercicio 6
                  int pos;
                  printf("Numero a inserir: ");
                  scanf("%d", &num);
                  printf("Posição a ser inserido: ");
                  scanf("%d", &pos);
                  inserePos(num, pos);
                }
              }
            }
          }
        }
      }
    }
  } while (escolha != 9);
  printf("FIM");
  return 0;
}
