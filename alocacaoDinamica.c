#include <stdio.h>

int main(){
    
    int *vetor;
    int qtde;
    printf("Quantos valores deseja informar?");
    scanf("%d", &qtde);
    vetor = (int *) malloc(qtde*sizeof(int));
    if (vetor == NULL){
        int i;
        for(i=0; i<qtde; i++){
            printf("Informe um valor: ");
            scanf("%d", &vetor[i]);
        }
        free(vetor);
    }else{
        printf("Memoria insuficiente");
    }

    return 0;
}
