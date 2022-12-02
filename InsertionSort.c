#include <stdio.h>
#define tam 5

void insertionSort(int* array){
    int key, j;
    for(int i=0; i<tam; i++){
        key = array[i+1];
        for(j=i; (j>=0) && (key<array[j]);j--){
            array[j+1] = array[j];
        }
        array[j+1] = key;
    }
}

int main(){
    int array[tam], key, j;

    for(int i=0; i<tam; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &array[i]);
    }

    insertionSort(array);

    for(int i=0; i<tam; i++){
        printf("%d ",array[i]);
    }

    return 0;
}

//Não esquecer de modular o código.