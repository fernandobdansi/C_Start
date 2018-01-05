#include<stdio.h>
#include<stdlib.h>

int multiploSete(int num){

    if((num%7)==0){
      return 1;
    }else{
      return 0;
    }
}

int main(){
  int i, cont=0;
  int n;
  //capturar o Valor de N
  printf("Digite o numero:\n");
  scanf("%i",&n);
  printf("########################### Multiplos de Sete###########################\n");
  for(i=1;i<=n;i++){
    //Verificar todos os numeros multiplos de 7
    if(multiploSete(i)==1){
        printf("Esse numero e multiplos de 7: %i\n",i);
    }

  }

  printf("########################################################################\n");
  system("sleep 2");
    
  return 0;
}
