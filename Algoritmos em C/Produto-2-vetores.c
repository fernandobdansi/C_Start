#include<stdio.h>
#include<stdio.h>
#define TAM 10

void prodVet01Vet02(float vetor1[TAM], float vetor2[TAM], float resultado[TAM]){
  int i;

    for(i=0;i<TAM;i++){
      resultado[i] = vetor1[i]*vetor2[i];
    }

    for(i=0;i<TAM;i++){
      printf("O produto da posição %i dos vetores 1 e 2 eh: %.2f\n",i+1,resultado[i]);
    }
}

int main(){
  float vetor1[TAM],vetor2[TAM],resultado[TAM];
  int i;

    for(i=0;i<TAM;i++){
      printf("Digite o numero da posição %i do Vetor1\n",i+1);
      scanf("%f",&vetor1[i]);
      printf("Digite o numero da posição %i do Vetor2\n",i+1);
      scanf("%f",&vetor2[i]);
    }
    system("clear");
    prodVet01Vet02(vetor1,vetor2,resultado);

  return 0;
}
