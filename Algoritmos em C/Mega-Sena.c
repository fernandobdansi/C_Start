#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Fazendo a estrutura jogador
typedef struct jogadores {
    char nome[30];
    int jogada[6];
    int realizouJogada = 0;
    int numAcertos = 0;
}Jogador;

void gerarSorteio(int sorteio[6] , Jogador ∗jogadores , int qtd){
    // Gerando o Sorteio
    int i;
    for(i=0;i<6;i++){
    sorteio[i] = 1+rand()%30;
   }
}

void realizarJogada(Jogador *jogadores,int qtdJogadores){
    // Realizando jogada de cada Jogador
    int i,j;

    for(i=0;i<qtdJogadores;i++){
      for(j=0;j<6;j++){
        printf("Digite a Jogada %i do Jogador %i \n",j+1,i+1);
        scanf("%i",jogadores[i].jogada[j]);
        getchar();
      }
    }

}

void cadastroJogador(Jogador *jogadores,int qtdJogadores){
  int i;

    for(i=0;i<qtdJogadores;i++){
      printf("Digite o nome do Jogador %i\n",i+1);
      gets(jogadores[i].nome);
      getchar();
    }

}
int main(){
    Jogador *jogadores;
    int i, qtdJogadores, opc;
    int sorteio[6];
    // Melhorar a funcao de aleatoriedade
    srand( (unsigned) time( NULL )) ;

    printf("Informe o numero de Jogadores: ");
    scanf("%i",&qtdJogadores);
    jogadores = (jogadores *)malloc(sizeof(jogadores) * qtdJogadores);
    do {
        printf("#################### MENU ####################\n");
        printf("#### 1 - Realizar Jogada       ###############\n");
        printf("#### 2 - Cadastrar Jogadores   ###############\n");
        printf("#### 3 - Realizar Sorteio      ###############\n");
        printf("#### 0 - Sair                  ###############\n");
        printf("##############################################\n");
        printf("Informe uma opcao: ");
        scanf("%i",&opc);
        switch(opc){
            case 1:
                    realizarJogada(Jogador *jogadores,qtdJogadores);
                    break;
            case 2:
                    cadastroJogador(Jogador *jogadores,qtdJogadores);
                    break;
            case 3:
                    gerarSorteio(sorteio,Jogador *jogadores,qtdJogadores);
                    break;
            case 0:

                    break;
            default:

                    break;
        }
    }while(opc != 0);
}
