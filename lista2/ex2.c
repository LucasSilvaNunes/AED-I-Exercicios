/*
Considere que o programa do exercício anterior preencha os valores do vetor de
forma ordenada. Faça uma busca por um valor informado pelo usuário. Utiliza a
busca binária.
*/

#include <stdio.h>
#define TAM 5

int binarySearch(int vetor[], int x);

int main() {
  int vet[TAM];
  int x;
  for (int i = 0; i < TAM; i++) {
    scanf("%d", &vet[i]);
  }
  printf("Valor buscado: \n");
  scanf("%d", &x);
  printf("%d",binarySearch(vet, x));
  return 0;
}

int binarySearch(int vet[], int x){
  int inicio = 0, fim = TAM, meio = (inicio + fim) / 2;
  while(fim >= inicio){
      if(vet[meio] == x){
        return meio;
      }else if(vet[meio] > x){
        fim = meio-1;
      }else{
        inicio = meio+1;
      }
  }
}
