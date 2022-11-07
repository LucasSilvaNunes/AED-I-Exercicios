#include <stdio.h>
#define max 5

typedef struct produto{
    int cod, qtde;
    float pCompra, pVenda;
    char nome[30];
}produto;

int main(){
    produto prod[max];
    for(int i=0; i<max; i++){
        printf("Informe o codigo do produto: ");
        scanf("%d", &prod[i].cod);
        getchar();        

        printf("Informe o nome do produto: ");
        fgets(prod[i].nome, 30, stdin);

        printf("Informe o preco de compra do produto: ");
        scanf("%f", &prod[i].pCompra);

        printf("Informe o preco de venda do produto: ");
        scanf("%f", &prod[i].pVenda);

        printf("Informe a quantidade em estoque do produto: ");
        scanf("%f", &prod[i].qtde);
    }
    return 0;
}