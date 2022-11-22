/* Faça uma função recursiva para fazer a multiplicação de dois números (a e b). A 
função receberá dois números positivos não nulos a e b e deve retornar o resultado de a × b.*/

#include <stdio.h>

int mult_recursiva(int a, int b){
    if(a == 1){
        return b;
    }else{
        return b + mult_recursiva(a-1,b);
    }
}

int main(){
    int a=0, b=0;
    printf("Digite dois numeros naturais para multiplicar: ");
    scanf("%d %d", &a, &b);
    printf("A multiplicacao entre os numeros %d e %d e: %d", a, b, mult_recursiva(a,b));
}