#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 100

void gerarSenha(char senha[TAM],int tamanho){
    int i,pos;
    srand((unsigned)time(NULL));
    char caractere[TAM] = "abcdefgijklmnopqrstuvxyzABCDEFGHIJKLMNOPQRSTUVXYZ123456789!@#$&*()+=-_{}|?/][";

    for(i=0;i<tamanho;i++){
      pos = rand() % (strlen(caractere));
      senha[i] = caractere[pos];
    }
    senha[i]='\0';
}

void lerTamanho(int *tamanho){
    printf("Digite o Tamanho da senha:\n");
    scanf("%i",tamanho);
}

int main(){
    int tamanho;
    char senha[TAM];

    system("clear");

    lerTamanho(&tamanho);
    gerarSenha(senha, tamanho);
    system("clear");
    printf("Senha: %s\n",senha);
}
