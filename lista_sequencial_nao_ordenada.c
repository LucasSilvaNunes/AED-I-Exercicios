// <LISTA SEQUENCIAL NÃO ORDENADA>

#include <stdio.h>
#define max 6

typedef struct listaSeq{
    int valores[max];
    int n;
}listaSeq;

void inicializar(listaSeq *L){
    L->n = 0;
}

void exibirLista(listaSeq L){
    if(L.n > 0){
        for(int i=0; i<L.n; i++){
            printf("%d ", L.valores[i]);
        }
    }else{
        printf("\nLista vazia!");
    }
}

int buscarValor(int valor, listaSeq L){
    for(int i=0; i<L.n; i++){
        if(L.valores[i] == valor){
            return i;
        }
    }
    return -1;
}

void inserir(listaSeq *L, int valor){
    if(L->n < max){
        if(buscarValor(valor, *L) == -1){
            L->valores[L->n] = valor;
            L->n++;
        }else{
            printf("Elemento já presente no vetor.\n");
        }
    }else{
        printf("Lista com todas posições possíveis ocupadas!");
    }
}

void remover(listaSeq *L, int valor){
    if(L->n > 0){
        int pos = buscarValor(valor, *L);
        if(pos != -1){
            L->valores[pos] = L->valores[(L->n)-1];
            (L->n)--;
        }else{
            printf("Elemento inexistente");
        }
    }else{
        printf("Lista vazia!");
    }
}

int main(){
    listaSeq lista;
    
    inicializar(&lista);
    
    inserir(&lista, 1);
    inserir(&lista, 5);
    inserir(&lista, 8);
    inserir(&lista, 9);
    inserir(&lista, 3);
    remover(&lista, 1);
    
    exibirLista(lista);
    return 0;
}
