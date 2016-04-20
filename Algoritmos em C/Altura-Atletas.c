#include<stdio.h>
#define TAM 10

void impAltMenorMaior(float alturaAtletas[TAM]){
  float soma=0,media;
  int i;
    for(i=0;i<TAM;i++){
      soma = soma+alturaAtletas[i];
    }

      media = soma/TAM;
      printf("A media de Altura e %.2f\n",media);
    for(i=0;i<TAM;i++){
      if(alturaAtletas[i]<media){
        printf("o Atleta %i tem altura menor que a media\n",i+1);
      }
    }
}

int main(){
  float alturaAtletas[TAM];
  int i;
  system("clear");
  //Lendo altura dos atletas
  for(i=0;i<TAM;i++){
    printf("Digite a altura do atletas %i\n",i+1);
    scanf("%f",&alturaAtletas[i]);
  }

  impAltMenorMaior(alturaAtletas);
  system("sleep 2");
  return 0;
}
