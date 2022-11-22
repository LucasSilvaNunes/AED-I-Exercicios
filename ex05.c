/*Faça um programa que leia um número e gere todos os números primos entre 1 e 
este número fornecido, exibindo-os na tela. O programa deve ter uma sub-rotina que 
determina se um número é primo ou não.*/

#include <stdio.h>

int isPrime(int x){
    int cont = 0;
    for(int i=x/2; i>=2; i--){
        if((x%i) == 0){
            cont++;
        }else if(cont > 0){
            return 1;
        }
    }
    return 0;
}

int main(){
    int num;
    printf("Digite um numero natural nao nulo: ");
    scanf("%d", &num);
    for(int j=num; j>0; j--){
        if((isPrime(j)) == 0){
            printf("Primo %d\n", j);
        }
    }
}