#include <stdio.h>
#define tam 5

int buscaBinaria(int vetor[], int valor){
    int comeco = 0, fim = tam-1;
    while(comeco <= fim){
        int index = (comeco+fim)/2; //metade do vetor
        if(vetor[index] == valor){
            printf("Item encontrado na posicao: %d", index+1);
            return 0;
        }else if(vetor[index] > valor){
            fim = index-1;
        }else{
            comeco = index+1;
        }
    }
    return -1;
}

int main(){
    int vetor[tam], valor;

    for(int i=0; i<tam; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor[i]);
    }

    printf("Qual valor deseja buscar no vetor ORDENADO? ");
    scanf("%d", &valor);

    //Lembrando que o vetor PRECISA ESTAR ORDENADO.
    buscaBinaria(vetor, valor);


    return 0;
}