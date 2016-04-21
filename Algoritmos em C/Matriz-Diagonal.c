#include<stdio.h>
#include<stdlib.h>
#define TAM 5

int main(){
  int i,j;
  char matriz[TAM][TAM];

    for(i=0;i<TAM;i++){
      for(j=0;j<TAM;j++){

        printf("Digite o Caractere na posição %i E %i\n",i,j);
        scanf("%c",&matriz[i][j]);
        getchar();
      }
    }

    for(i=0;i<TAM;i++){
      printf("Diagonal pricipal : %c\n",matriz[i][i]);
    }



  return 0;
}
