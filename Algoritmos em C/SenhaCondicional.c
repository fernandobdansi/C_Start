#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Tam 10
int main(){
  char senha[Tam][6];
  int vet[Tam],cont;
  int i,j;

  for(i=0;i<Tam;i++){

    printf("Digite a Senha de 5 caracteres Numero: %i\n",i+1);
    scanf("%s",senha[i]);

  }

  for(i=0;i<Tam;i++){
    cont = 0;
    for(j=0;j<6;j++){
      if(senha[i][j]>='a' && senha[i][j]<='z'){
        cont++;
      }
    }
    if(cont>3){
      vet[i] = 0;
    }else{
      vet[i] = 1;
    }
  }

  for(i=0;i<Tam;i++){
    printf("Senha %i eh: %i\n",i+1,vet[i]);
  }




  return 0;
}
