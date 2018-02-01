#include<stdio.h>
#include<stdlib.h>
#define CHAP 5
#define MAT 3

void lerSomar(float matriz[CHAP][MAT]){
  int i,j;
  float soma,somaP[CHAP];
  for(i=0;i<CHAP;i++){
    system("clear");
    soma = 0;
    for(j=0;j<MAT;j++){
      printf("Digite o valor so Material %i da CHAPA %i\n",j+1,i+1);
      scanf("%f",&matriz[i][j]);
      soma = soma + matriz[i][j];
    }
    somaP[i] = soma;
  }

  for(i=0;i<CHAP;i++){
    somaP[i] = (somaP[i]+(somaP[i]*0.15));
    printf("Soma da CHAPA %i: %.2f\n",i,somaP[i]);
  }
}

int main(){
  float matriz[CHAP][MAT];

  system("clear");

  lerSomar(matriz);

  system("sleep 2");
  
  return 0;
}
