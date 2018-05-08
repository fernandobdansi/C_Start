#include<stdio.h>
#include<stdlib.h>

void lerMatriz(int matriz[][4]){
  int i,j;
  int num=1;

  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        matriz[i][j]=num;
             num++;

    }
  }
}

float mediaMatriz(int matriz[][4]){
  int i,j;
  float num=0;
  float media=0;

  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
       num += matriz[i][j];
    }
  }

  media = num/(i*j);

  return media;
}

void verificarRepeticao(int matriz[][4]){
  int i,j,l,v;
  int num=0;
  int media=0;
  int rep=0;
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
         for(l=0;l<3;l++){
          for(v=0;v<4;v++){
            if(matriz[i][j]==matriz[l][v]){
              rep++;
            }
        }
      }
      if(rep>1){
        printf("Elemtento Duplicado!\n");
        printf("Posicao I=%d J=%d Elemento= %d Qtd=%d\n\n", i,j,matriz[i][j],rep);
      }
      rep=0;
    }
  }

}

void imprimir(int matriz[][4]){
  int i,j;

  for(i=0;i<3;i++){
    printf("\n");
      for(j=0;j<4;j++){
        printf("%d\t", matriz[i][j]);
    }
  }
}

int main(){
  int i,j;
  int matriz[3][4];
  float media;

  lerMatriz(matriz);

  imprimir(matriz);

  media=mediaMatriz(matriz);

  printf("\nMedia=%.2f",media);

  verificarRepeticao(matriz);

  return 0;
}
