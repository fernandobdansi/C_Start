#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int fatorial(int n){
    int i,fat=1;

    for(i=1;i<=n;i++){
        fat = fat * i;
    }
    return fat;
}
void fatorialVetores(int a[], int b[]){
    int i;

    for(i=0;i<TAM;i++){
        b[i] = fatorial(a[i]);
    }
}

int main(){
    int a[TAM], b[TAM];
    int i;
    system("cls");
    for(i=0;i<TAM;i++){
        printf("Informe um valor na posicao %i:",i);
        scanf("%i",&a[i]);
    }
    fatorialVetores(a,b);
    system("clear");
  
    printf("\t\t A \t\t B \n");
    for(i=0;i<TAM;i++){
        printf("\t\t %i \t\t %i \n",a[i],b[i]);
    }
    system("pause");
    
    return 0;
}
