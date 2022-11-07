/* Faça um programa para ler um conjunto de números reais, armazenando-o em vetor e 
calcular o quadrado das componentes deste vetor, armazenando o resultado em outro 
vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>

int main(){
    
    int vet[10], vet2[10];

    for(int i=0; i<10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &vet[i]);
    }

    printf("n\tn**2\n");
    for(int i=0; i<10; i++){
        vet2[i] = vet[i] * vet[i];
        printf("%d\t%d\n", vet[i], vet2[i]);
    }

    return 0;
}