/*Elabore um programa que leia vários registros de animais contendo os dados: nome, 
raça, data de nascimento e sexo. Os registros devem ser lidos enquanto o usuário desejar. O 
máximo de animais cadastrados é 50. Ao final, todos os registros devem ser impressos*/

#include <stdio.h>
#define MAX 50

typedef struct animais{
    char nome[15];
    char raca[30];
    char nasc[10];
    char sexo;
}animais;

int main(){
    int x;
    animais bichos[MAX];

    printf("Quantos animais serao??");
    scanf("%d", &x);
    if(x > MAX){
        printf("Digite um numero menor ou igual a 50");
        return 1;
    }else{
        getchar();
        for(int i=0; i<x; i++){
            printf("Digite o nome do bicho: ");
            fgets(bichos[i].nome, 15, stdin);

            printf("Digite a raca do bicho: ");
            fgets(bichos[i].raca, 30, stdin);

            printf("Digite a data de nascimento do bicho: ");
            fgets(bichos[i].nasc, 10, stdin);

            printf("Digite o sexo do bicho (M/m ou F/f): ");
            while((scanf("%c",&bichos[i].sexo)) != 'm' || 'f' || "M" || 'F'){
                printf("Digite um sexo válido!");
            }
        }

        for(int i=0; i<x; i++){
            printf("Macaco(a) de nome %s\n", bichos[i].nome);
            printf("Raca: %s\n", bichos[i].raca);
            printf("Data de Nascimento: %s\n", bichos[i].nasc);
            printf("Sexo: %c\n\n", bichos[i].sexo);
        }
    }
    return 0;
}
