#include <stdio.h>
#define tam 5

int main(){
    
    int array[tam];
    
    void swap(int* x, int* y){
        int aux = *x;
        *x = *y;
        *y = aux;
    }
    
    for(int i=0; i<tam; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &array[i]);
    }
    
    for(int i=0; i<tam-1; i++){
        for(int j=0; j<tam-1; j++){
            if(array[j] > array[j+1]){
                swap(&array[j], &array[j+1]);
                for(int i=0; i<tam; i++){
                    printf("%d ", array[i]);
                }
                printf("\n");
            }
        }
    }
    
    printf("\n");
    
   for(int i=0; i<tam; i++){
        printf("%d ", array[i]);
    }
    
    return 0;
}
