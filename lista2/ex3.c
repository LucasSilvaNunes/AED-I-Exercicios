/*Implemente uma versão recursiva do método de busca binária.*/


#include <stdio.h>
#define TAM 10

int binarySearch(int vetor[], int x, int inicio, int fim);

int main() {
  int vet[TAM];
  int x;
  for (int i = 0; i < TAM; i++) {
    scanf("%d", &vet[i]);
  }
  printf("Valor buscado: \n");
  scanf("%d", &x);
  printf("%d", binarySearch(vet, x, 0, TAM));
  return 0;
}

int binarySearch(int vet[], int x, int inicio, int fim) {
  if (inicio > fim) {
    return -1;
  }
  int meio = (inicio + fim) / 2;
  if (vet[meio] == x) {
    return meio+1;
  } else if (vet[meio] < x) {
    return binarySearch(vet, x, meio + 1, fim);
  } else {
    return binarySearch(vet, x, inicio, meio - 1);
  }
}
