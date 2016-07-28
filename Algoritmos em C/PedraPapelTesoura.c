#include<stdio.h>
#include <stdlib.h> // necessário p/ as funções rand() e srand()
#include <time.h> //necessário p/ função time()

/*  srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da função time(NULL). Este por sua vez, é calculado
    como sendo o total  de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
*/

// Regras Basicas do Pedra Papel Tesoura
/*
      Pedra ganha da tesoura (amassando-a ou quebrando-a).
      Tesoura ganha do papel (cortando-o).
      Papel ganha da pedra (embrulhando-a).

      0 Ganha 2
      2 Ganha 1
      1 Ganha 0
*/

int jogarMoeda(){
  int jogada=0;
    srand(time(NULL));
    //Funcao para gerar um numero de 0 ate 2 aleatoriamente!
    // No qual 0=Pedra, 1=Papel, 2=Tesoura
    jogada = rand () % 3;
    return jogada;
}

void menu(){
  printf("############################################################\n");
  printf("#### Jogo de Pedra, Papel , Tesoura - Player VS Maquina ####\n");
  printf("####                       Legenda                      ####\n");
  printf("####                       0 = Pedra                    ####\n");
  printf("####                       1 = Papel                    ####\n");
  printf("####                       2 = Tesoura                  ####\n");
  printf("############################################################\n");
}
void Jogada(int Joga){
  switch (Joga){
    case 0:
      printf("Pedra");
    break;
    case 1:
      printf("Papel");
    break;
    case 2:
      printf("Tesoura");
    break;
  }
}
int main(){
  int i;
  int M, P;
  int opc;
  char Joga[20];

    do{

    system("clear");
  do{
    system("clear");
    menu();
    printf("Player por favor Digite sua jogada: \n");
    scanf("%i",&P);
    if((P != 0 && P != 1 && P != 2)){
      printf("Jogada Invalida!!\n");
      system("sleep 2");
    }
  }while ((P != 0 && P != 1 && P != 2));
    // a Maquina recebe sua jogada aleatoria
    M = jogarMoeda();

      if(P == M){
        printf("Empate!!\n");
        printf("  P          M\n");
        Jogada(P);
        printf(" VS ");
        Jogada(M);
        printf("\n");
      }else if((P == 0 && M == 2) || (P == 2 && M == 1) || (P == 1 && M == 0 )){
        printf("Player Venceu!! \n");
        printf("  P          M\n");
        Jogada(P);
        printf(" VS ");
        Jogada(M);
        printf("\n");
      }else{
        printf("Maquina Venceu!! \n");
        printf("  P          M\n");
        Jogada(P);
        printf(" VS ");
        Jogada(M);
        printf("\n");
      }

      printf("Deseja Jogar Novamente? 1=SIM 0=NAO\n");
      scanf("%i",&opc);
}while (opc==1);
printf("\n\n");
printf("Obrigado Por Utilizar!!!\n");
printf("BY:\n");
printf(" /$$$$$$$$ /$$$$$$$                                          /$$$$$$$\n| $$_____/| $$__  $$                                        | $$__  $$\n| $$      | $$  \\ $$ /$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$ | $$  \\ $$\n| $$$$$   | $$$$$$$ | $$  | $$ /$$__  $$| $$__  $$ /$$__  $$| $$  | $$\n| $$__/   | $$__  $$| $$  | $$| $$$$$$$$| $$  \\ $$| $$  \\ $$| $$  | $$\n| $$      | $$  \\ $$| $$  | $$| $$_____/| $$  | $$| $$  | $$| $$  | $$\n| $$      | $$$$$$$/|  $$$$$$/|  $$$$$$$| $$  | $$|  $$$$$$/| $$$$$$$/\n|__/      |_______/  \\______/  \\_______/|__/  |__/ \\______/ |_______/\n");

    return 0;
}
