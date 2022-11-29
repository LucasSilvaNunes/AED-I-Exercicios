#include <stdio.h>
#define tam 5

int main(){
    int array[tam], key, j;

    for(int i=0; i<tam; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &array[i]);
    }

    for(int i=0; i<tam; i++){
        key = array[i+1];
        for(j=i; (j>=0) && (key<array[j]);j--){
            array[j+1] = array[j];
        }
        array[j+1] = key;
    }

    for(int i=0; i<tam; i++){
        printf("%d ",array[i]);
    }

    return 0;
}

//Não esquecer de modular o código.