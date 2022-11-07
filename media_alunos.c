/*Faça programa que leia duas notas e calcule e exiba a média dessas duas
notas para cada aluno de uma turma de 15 estudantes.
Você deve fazer a leitura das notas utilizando um procedimento chamado
“leitura” e a média deve ser calculada por uma função “calcular_media”, que
recebe as duas notas por parâmetro e retorna o resultado da média.
O procedimento de leitura e a função da média devem ser chamados na função
main, que exibirá as notas e média de cada aluno.*/

#include <stdio.h>
#define qntAlunos 15

void leitura(float* n1, float* n2){
    printf("Digite a primeira nota: ");
    scanf("%f", n1);
    printf("Digite a segunda nota: ");
    scanf("%f", n2);
}

float calcular_nota(float x, float y){
    return (x+y)/2;
}

int main(){
    float nota1, nota2;
    for(int i=1; i<=qntAlunos; i++){
        leitura(&nota1, &nota2);
        printf("A media desse aluno e: %.2f\n\n", calcular_nota(nota1, nota2));
    }
    return 0;
}