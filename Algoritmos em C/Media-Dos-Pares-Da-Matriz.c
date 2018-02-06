#include<stdio.h>
#include<stdlib.h>
#define LIN 5
#define COL 6

int main(){
  int matriz[LIN][COL];
  int i=0,j=0;
  float media=0,soma=0,cont=0;

  for(i=0;i<LIN;i++){
    for(j=0;j<COL;j++){

      printf("Digite o Valor Posição Linha %i Coluna %i\n",i+1,j+1);
      scanf("%d",&matriz[i][j]);

    }
  }

  for(i=0;i<LIN;i++){
    for(j=0;j<COL;j++){

      if(matriz[i][j]%2==0){
        soma = soma + matriz[i][j];
        cont++;
      }
    }
  }
  
  media = soma/cont;
  printf("A media eh: %.2f\n",media);

  return 0;
}
