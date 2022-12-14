/*Faça um programa que implemente uma função recursiva que receba por parâmetro 
um número inteiro positivo n e imprima todos os números naturais de 0 a N em ordem 
crescente*/

#include <stdio.h>

void impressao(int num){
    if(num==0){
        printf("%d\t", num);
    }else{
        impressao(num-1);
        printf("%d\t", num);
    }
}

int main(){
    int num;
    printf("Digite um numero natural: ");
    scanf("%d", &num);
    impressao(num);   
    return 0;
}
