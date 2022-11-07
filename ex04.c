#include <stdio.h>
#define max 10

int lerVet(int* mat){
    int soma=0;
    for(int i=0; i<max; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &mat[i]);
        soma = soma + mat[i];
    }
    return soma;
}

void printVet(int mat[max], int result){
    for(int i=0; i<max; i++){
        printf("Elemento %d: %d\n", i, mat[i]);
    }
    printf("O resultado da soma dos elementos foi: %d", result);
}

int main(){
    int vet[max], result=0;
    result = lerVet(vet);
    printVet(vet, result);
    return 0;
}