#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 10
typedef struct profissinal{
  char nome[51];
  char profissao[21];
  int idade;
}Prof;

void MostrarOsFun(Prof profi[TAM],char profEs[21]){
  int i;
  for(i=0;i<TAM;i++){
    if(strcmp(profi[i].profissao,profEs)==0){
    printf("Imprimindo Funcionario: %i\n",i+1);
    printf("Nome: %s\n",profi[i].nome);
    printf("Profissao: %s\n",profi[i].profissao);
    printf("Idade: %i\n",profi[i].idade);
    }
  }


}


int main(){

  int i;
  Prof profi[TAM];
  char profEs[21];

  for(i=0;i<TAM;i++){
    printf("lendo Funcionario: %i\n",i+1);
    printf("Digite o nome do profissinal: \n");
    gets(profi[i].nome);
    printf("Digite a profissão: \n");
    gets(profi[i].profissao);
    printf("Digite a Idade: \n");
    scanf("%i",&profi[i].idade);
    getchar();

  }

    system("cls");

      printf("Digite a profissão que deseja imprimir\n");
      gets(profEs);

    MostrarOsFun(profi,profEs);

  return 0;
}
