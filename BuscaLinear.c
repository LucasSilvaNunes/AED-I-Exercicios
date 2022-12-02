#include <stdio.h>
#define tam 5

int buscaBinaria(int array[], int valor){
    for(int i=0; i<tam; i++){
        if(array[i] == valor){
            printf("Valor encontrado na posicao %d!", i+1);
            return 0;
        }        
    }
    printf("Valor nao encontrado!");
    return -1;
}

int main(){

    int array[tam], valor;

    for(int i=0; i<tam; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &array[i]);
    }
    printf("Digite o valor que voce deseja buscar: ");
    scanf("%d", &valor);

    buscaBinaria(array, valor);

    return 0;
}