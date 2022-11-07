/*Em uma escola é necessário armazenar os dados de diversos alunos. Suponha uma turma
com 20 alunos e que os dados de cadastro desejados são: nome, matrícula, quatro notas e
a média final. Faça um programa para armazenar esses dados e imprimir a média de cada
aluno.*/

#include <stdio.h>
#define quant 20

typedef struct aluno{
    char nome[30];
    int matricula;
    float nota[4], media;
}aluno;

int main(){
    float aux;
    aluno stu[quant];
    for(int cont=0; cont<quant; cont++){

        //leitura do nome
        printf("Informe o nome do aluno: ");
        fgets(stu[cont].nome, 30, stdin);

        //leitura da matricula
        printf("Informe a matricula do aluno:");
        scanf("%d", &stu[cont].matricula);

        //leitura das notas
        for(int i=0; i<4; i++){
            printf("Digite a nota %d do aluno: ", i+1);
            scanf("%f", &stu[cont].nota[i]);
        }

        //calculo da media das notas
        for(int i=0; i<4; i++){
            aux = aux + stu[cont].nota[i];
        }
        stu[cont].media = aux/4;
    }

    for(int i=0; i<quant; i++){
        printf("A media do aluno %s e: %f\n\n", stu[i].nome, stu[i].media);
    }
    return 0;
}