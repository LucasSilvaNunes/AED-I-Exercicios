#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox, *ant;
}no;


no *inicioE;
no *inicioD;

void inicializarLista(){
    inicioE = NULL;
    inicioD = NULL;
}

int listaVazia(){
  if(inicioE == NULL){
    return 1;
  }
  return 0;
}

void inserirDir(int valor){
    no* aux;
    aux = (no*) malloc(sizeof(no));
    if (aux != NULL){
        aux->info = valor;
        aux->ant = NULL;
        aux->prox = NULL;
        if(listaVazia()){
            inicioE = aux;
            inicioD = aux;
        }else{//inserir pela direita
            aux->ant = inicioD;
            inicioD->prox = aux;
            inicioD = aux;
        }
        
    }else{
        printf("\nERRO!");
    }
}
    
void percorrerDir(){
    no * aux = inicioD;
    if(!listaVazia()){
        aux = inicioD;
        while(aux != NULL){
            printf("%d ", aux->info);
            aux = aux->ant;
        }
    }else{
        printf("\nLista vazia!");
    }
}    

void percorrerEsq(){
    no* aux = inicioE;
    if(!listaVazia()){
        aux = inicioE;
        while(aux != NULL){
            printf("%d ", aux->info);
            aux = aux->prox;
        }
    }else{
        printf("\nLista vazia!");
    }
} 

no *buscaNo(int valor){
    
}

void removerLDE(int valor){
    no* aux;
    if(!listaVazia()){
        aux = buscaNo(valor);
        if(aux != NULL){
            if(inicioE == inicioD){ //Caso de elemento único na lista.
                inicioD = NULL;
                inicioE = NULL;
            }else if(aux->ant == NULL){ //Elemento que vai remover está no extremo esquerdo da lista.
                inicioE = aux->prox;
                inicioE->ant = NULL;
            }else if(aux->prox == NULL){ ////Elemento que vai remover está no extremo direito da lista.
                inicioD = aux->ant;
                inicioD->prox = NULL;
            }else{
                no* anterior = aux->ant;
                no* posterior = aux->prox;
                anterior->prox = posterior;
                posterior->ant = anterior;
            }
            free(aux);
        }else{
            printf("Elemento não encontrado!");
        }
    }else{
        printf("\nLista vazia!");
    }
}

int main(){
    
    inicializarLista();
    inserirDir(2);
    inserirDir(3);
    inserirDir(9);
    
    printf("\nPercorrer Esquerda:\n");
    percorrerEsq();
    printf("\nPercorrer Direita:\n");
    percorrerDir();

    return 0;
}
