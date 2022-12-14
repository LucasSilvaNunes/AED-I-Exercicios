/*Elabore um programa que preencha um vetor de valores inteiros de 20 posições e
ao final faça uma busca sequencial por um valor, a ser informado pelo usuário.*/

#include <stdio.h>
#define TAM 5

int buscaSeq(int vetor[], int x);

int main() {
  int vet[TAM];
  int x;
  for (int i = 0; i < TAM; i++) {
    scanf("%d", &vet[i]);
  }
  printf("Valor buscado: \n");
  scanf("%d", &x);
  buscaSeq(vet, x);
  return 0;
}

int buscaSeq(int vetor[], int x) {
  for (int i = 0; i < TAM; i++) {
    if (vetor[i] == x) {
      printf("\nValor encontrado na posição %d do vetor\n", i + 1);
      return 0;
    }
  }
  printf("Valor não encontrado dentro do vetor");
}
