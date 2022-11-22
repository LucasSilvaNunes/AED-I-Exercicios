/*Faça um programa para ler um conjunto de números inteiros, armazenando-o em vetor 
e calcular a soma de todos os valores armazenados. Os conjuntos têm 10 elementos cada. 
Ao final, o programa deve exibir todos os valores do vetor e o somatório calculado.
OBS.: 
- O vetor deve ser declarado como uma variável local, dentro do main;
- Os dados do vetor devem ser lidos por um procedimento de leitura, aplicando 
corretamente o uso de passagem de parâmetros;
- A impressão dos dados deve ser feita por um procedimento e chamada no 
main para que seja executada.*/

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