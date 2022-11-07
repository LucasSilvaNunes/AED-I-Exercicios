/* Faça um programa que preencha um vetor de 10 posições com números inteiros, exiba 
todo o vetor informado e o maior valor encontrado nesse vetor. */

#include <stdio.h>

int main(){
    int vet[10], maior;

    for(int i=0; i<10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &vet[i]);
        if(i==0){
            maior = vet[i];
        }
        if(vet[i] >= maior){
            maior = vet[i];
        }
    }

    for(int i=0; i<10; i++){
        printf("Elemento na posicao %d: %d\n", i , vet[i]);
    }

    printf("O maior elemento = %d", maior);
    return 0;
}