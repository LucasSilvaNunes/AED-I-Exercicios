#include <stdio.h>

int fib_Recursivo(int num){
    if(num == 1){
        return 1;
    }else if(num == 0){
        return 0;
    }else{
        return fib_Recursivo(num-1) + fib_Recursivo(num-2);
    }   
}

/*int fib_iterativo(int num){
    int n0=0, n1=1, aux=0;
    
    for(int i=1; i<num; i++){
        aux = n0+n1;
        n0=n1;
        n1=aux;
    }
    return aux;
}*/

int main(){
    int num = 0;
    printf("Qual termo da sequencia de fibonacci vc quer saber?");
    scanf("%d", &num);
    printf("%d", fib_Recursivo(num));
    return 0;
}