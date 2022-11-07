#include <stdio.h>
#define MAX 50
int main(){
    int x;
    struct Animais{
       char nome[15];
       char raca[30];
       char nasc[10];
       char sexo;
    }macacos[MAX];

    printf("Quantos macacos serao??");
    scanf("%d", &x);
    if(x > MAX){
        printf("Digite um numero menor ou igual a 50");
        return 1;
    }else{
        getchar();
        for(int i=0; i<x; i++){
            printf("Digite o nome do macaco: ");
            fgets(macacos[i].nome, 15, stdin);

            printf("Digite a raca do macaco: ");
            fgets(macacos[i].raca, 30, stdin);

            printf("Digite a data de nascimento do macaco: ");
            fgets(macacos[i].nasc, 10, stdin);

            printf("Digite o sexo do macaco (M/m ou F/f): ");
            while((scanf("%c",&macacos[i].sexo)) != 'm' || 'f' || "M" || 'F'){
                printf("Digite um sexo válido!");
            }
        }

        for(int i=0; i<x; i++){
            printf("Macaco(a) de nome %s\n", macacos[i].nome);
            printf("Raca: %s\n", macacos[i].raca);
            printf("Data de Nascimento: %s\n", macacos[i].nasc);
            printf("Sexo: %c\n\n", macacos[i].sexo);
        }
    }
    return 0;
}