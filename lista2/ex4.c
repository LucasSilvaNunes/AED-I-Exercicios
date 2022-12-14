/*
Faça um programa para o cadastro de 50 funcionários com os seguintes dados:
nome, endereço, quantidade de filhos e salário. Após o cadastro, o programa deve
fazer uma busca pelo nome de um funcionário específico, que será informado pelo
usuário
*/

#include <string.h>
#include <stdio.h>
#define TAM 50

typedef struct {
  char nome[30];
  char endereco[50];
  int qtdFilhos;
  float salario;
}funcionario;

int main() {
  char nome[30];
  funcionario func[TAM];
  for(int i=0; i<TAM; i++){
    printf("Digite o nome: \n");
    fgets(func[i].nome,30,stdin);
    printf("Digite o endereço: \n");
    fgets(func[i].endereco,50,stdin);
    printf("Digite a quantidade de filhos: \n");
    scanf("%d", &func[i].qtdFilhos);
    printf("Digite o salário: \n");
    scanf("%f", &func[i].salario);
    getchar();
  }

  printf("Digite o nome que deseja procurar: ");
  fgets(nome,30,stdin);
  
  for(int i=0; i<TAM; i++){
    if(strcmp(nome,func[i].nome) == 0){
       printf("\nNome: %sEndereço: %sQuantidade de filhos: %d\nSalário: %.2f",func[i].nome,func[i].endereco,func[i].qtdFilhos,func[i].salario);
    }
  }
  // printf("-------");
  // for(int i = 0; i < TAM; i++){
  //   printf("\nCadastro: %d\n",i+1);
  //   printf("\nNome: %sEndereço: %sQuantidade de filhos: %d\nSalário: %.2f",func[i].nome,func[i].endereco,func[i].qtdFilhos,func[i].salario);
  //   printf("\n------");
  // }
  return 0;
}
