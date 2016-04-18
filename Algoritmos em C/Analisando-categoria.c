#include <stdio.h>
#include <stdlib.h>

void categoria(int idade){

    printf("############# Categoria: ##############\n");
    if(idade >= 5 && idade <= 7){
        printf("\tInfantil A\n");
    }else if(idade >= 8 && idade <= 10){
        printf("\tInfantil B\n");
    }else if(idade >= 11 && idade <= 13){
        printf("\tJuvenil A\n");
    }else if(idade >= 14 && idade <= 17){
        printf("\tJuvenil B\n");
    }else if(idade >= 18){
        printf("\tAdulto\n");
    }else{
        printf("\tSem categoria!\n");
    }
    printf("#######################################\n");
}

int main(){
    int idade;
    system("clear");
    // Informando idade da Pessoa
    printf("Informe a idade: ");
    scanf("%d",&idade);
    // Mostrando categoria da Pessoa
    system("clear");
    categoria(idade);
}
