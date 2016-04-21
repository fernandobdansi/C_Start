#include<stdio.h>
#include<stdlib.h>

int jogarMoeda(){
  int jogada=0;

    jogada = rand () % 2;

    return jogada;
}

int main(){
  int i;
  int N,jogada;
  int contCaras=0, contCoroas=0;

    printf("Digite A quantidade de vezes que o programa ira lançar a moeda:\n");
    scanf("%i",&N);

    for(i=1;i<=N;i++){
      jogada = jogarMoeda();
      if(jogada==1){
        printf("A jogado %i deu CARA\n",i);
        contCaras++;
      }else{
        printf("A jogado %i deu COROA\n",i);
        contCoroas++;
      }

    }
    printf("O total de CARAS foi %i\n",contCaras);
    printf("O total de COROAS foi %i\n",contCoroas);

    return 0;
}
