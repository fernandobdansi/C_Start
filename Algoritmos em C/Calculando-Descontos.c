#include <stdio.h>
#include <stdlib.h>

void opcao1(float g){
    float desconto;
    desconto = (g * 0.1);
    
    system("clear");
    printf("#############################\n");
    printf("Preco final: %.2f\n",(g - desconto));
    printf("#############################\n");
    system("pause");
}
void opcao2(float g){
    int i;
    float valorPrestacao;
    valorPrestacao = g/2;
   
    system("clear");
    printf("#############################\n");
    for(i=1;i<=2;i++){
        printf("Valor da prestacao %i eh: %.2f",i,valorPrestacao);
    }
    printf("#############################\n");
    system("pause");
}
void opcao3(float g){
    int i;
    float num, valorPrestacoes, juros;

    system("clear");
    if(g > 100){
        printf("Informe o numero de prestacoes: ");
        scanf("%f",&num);

        if(num >= 3 && num <= 10){
            juros = g * 0.03 * num;
            valorPrestacoes = (g + juros)/num;
            system("clear");
            printf("#############################\n");
            for(i=1;i<=num;i++){
                printf("Valor da prestacao %i eh: %.2f",i,valorPrestacoes);
            }
            printf("#############################\n");
        }else{
            printf("Numero de prestacoes nao e permitido!\n");
        }
    }else{
        printf("Valor da compra deve ser maior que 100!\n");
    }
    system("pause");
}
int escolhaOpcoes(){
    int opc;
    printf("###################################\n");
    printf("# 1: A vista 10%% de desconto     #\n");
    printf("# 2: Em duas vezes                #\n");
    printf("# 3: em 3 ou 10 Vezes(3%% a/m)    #\n");
    printf("###################################\n");
    printf("Escolha uma Opcão: ");
    scanf("%i",&opc);

    return opc;
}
int main(){
    float gasto;
    printf("Informe o gasto do cliente: ");
    scanf("%f",&gasto);

    switch(escolhaOpcoes()){
        case 1:
                opcao1(gasto);
                break;
        case 2:
                opcao2(gasto);
                break;
        case 3:
                opcao3(gasto);
                break;
        default:
                printf("Opcao Invalida!");
                break;
    }
    
    return 0;
}
