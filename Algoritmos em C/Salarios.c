#include <stdio.h>
#include <stdlib.h>

void cadastro(){
    
    float salario, somaSalarios=0, maiorSalario=0;
    float qtdFilhos, somaQtdFilhos=0;
    float numCadastros=0, qtdSalarios750=0;
    int continuar=1;

    do{
        system("clear");
        printf("Informe o salario: ");
        scanf("%f", &salario);
        printf("Informe a qtd filhos: ");
        scanf("%f", &qtdFilhos);

        numCadastros++;
        somaSalarios += salario;
        somaQtdFilhos += qtdFilhos;

        if(salario > maiorSalario){
            maiorSalario = salario;
        }
        if(salario <= 750){
            qtdSalarios750++;
        }

        printf("Deseja continuar? 1=SIM 0=NAO ");
        scanf("%d", &continuar);
    }while(continuar==1);

    system("clear");
    printf("Media de salarios: %.2f\n", (somaSalarios/numCadastros));
    printf("Media numero de filhos: %.2f\n", (somaQtdFilhos/numCadastros));
    printf("Maior Salario: %.2f\n", maiorSalario);
    printf("Perc. pessoas sal. ate 750: %.2f\n",((qtdSalarios750*100)/numCadastros));
}

int main(){
    cadastro();
    
    return 0;
}
