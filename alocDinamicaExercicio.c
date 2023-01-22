#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int cod;
    char nome[50];
    int estq;
    float preco;
}produto;

int main(){
    produto* p;
    int resp, cont=0;
    float maiorp = 0;
    
    p = (produto*) malloc(10*sizeof(produto));
    
    if(p != NULL){
        do{
            printf("Código: ");
            scanf("%d", &p[cont].cod);
            getchar();
            
            printf("Nome: ");
            fgets(p[cont].nome, 50, stdin);
            
            printf("Estoque: ");
            scanf("%d", &p[cont].estq);
            
            printf("Preço:");
            scanf("%f", &p[cont].preco);
            
            cont++;
            
            printf("Deseja continuar cadastrando? 1-sim / 0-não\n");
            scanf("%d", &resp);
        }while(resp!=0);
    }else{
        printf("Memoria insuficiente!");
        return 1;
    }
    
    for(int i=0; i<cont; i++){
        if(p[i].preco > maiorp){
            maiorp = p[i].preco;
        }
    }
    
    for(int i=0; i<cont; i++){
        if(p[i].preco == maiorp){
            printf("\nCódigo: %d\nNome: %s\nEstoque: %d\nPreço: %f", p[i].cod, p[i].nome, p[i].estq, p[i].preco);
        }
    }
    
        
    
    
    return 0;
}
