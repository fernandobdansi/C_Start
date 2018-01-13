#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mystrcpy(char str1[50],char str2[50]){

  int i;

  for(i=0; str1[i] !='\0' ;i++){
    str2[i] = str1[i];
  }
    str2[i] = '\0';
}

int main(){

    char str1[50],str2[50];


    printf("Digite o nome A ser copiado: \n");
    scanf("%[^\n]s",str1);


    system("cls");
    mystrcpy(str1,str2);

    printf("%s \n", str2);

    system("pause");
  
    return 0;
}
