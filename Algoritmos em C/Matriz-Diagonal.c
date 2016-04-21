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
      for(j=0;j<TAM;j++){
        if(i==0 && j==4){
          printf("Matriz Diagonal: %c\n",matriz[i][j]);
        }else if(i==1 && j==3){
          printf("Matriz Diagonal: %c\n",matriz[i][j]);
        }else if(i==2 && j==2){
          printf("Matriz Diagonal: %c\n",matriz[i][j]);
        }else if(i==3 && j==1){
          printf("Matriz Diagonal: %c\n",matriz[i][j]);
        }else if(i==4 && j==0){
          printf("Matriz Diagonal: %c\n",matriz[i][j]);
        }

      }
    }



  return 0;
}
