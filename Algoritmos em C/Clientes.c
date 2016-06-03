#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cliente {
    int idCliente;
    char nome[30];
    int ativo;
    int idade;
}Cliente;

int main(){
    Cliente cli;
    int opc;

    FILE *arq;


    do{
        system("clear");
        printf("############# MENU ############\n");
        printf("# 1 - Cadastrar Cliente       #\n");
        printf("# 2 - Alterar Cliente         #\n");
        printf("# 3 - Deletar Cliente         #\n");
        printf("# 4 - Listar Clientes         #\n");
        printf("# 0 - Sair                    #\n");
        printf("###############################\n");
        printf("Informe uma opcao: ");
        scanf("%i",&opc);
        switch(opc){
            case 1:
                    arq = fopen("clientes.bin", "a+b");
                    system("clear");
                    printf("Informe o id do cliente: ");
                    scanf("%i",&cli.idCliente);
                    getchar();
                    printf("Informe o nome: ");
                    gets(cli.nome);
                    printf("Informr a idade: ");
                    scanf("%i",&cli.idade);
                    printf("Cliente ativo? (1-Sim, 0-Nao) ");
                    scanf("%i",&cli.ativo);

                    if(fwrite(&cli,sizeof(Cliente),1,arq) != 1){
                        printf("Erro ao inserir cliente!\n");
                    }
                    fclose(arq);
                    break;
            case 2:
                    arq = fopen("clientes.bin", "r+b");
                    int pos=0, id;
                    Cliente aux2;
                    printf("Informe o ID do cliente: ");
                    scanf("%i",&id);
                    rewind(arq);
                    while(!feof(arq)){
                        if(fread(&aux2, sizeof(Cliente),1,arq) != 1){
                            printf("Falha ao ler informacoes do cliente!\n");
                        }else{
                            if(id == aux2.idCliente){
                                break;
                            }
                        }
                        pos++;
                    }
                    printf("Alterando a Posicao: %i\n",pos);
                    printf("##### Dados atuais #####\n");
                    printf("# ID: %i\n", aux2.idCliente);
                    printf("# Nome: %s\n", aux2.nome);
                    printf("# Idade: %i\n", aux2.idade);
                    printf("# Ativo: %i\n", aux2.ativo);
                    printf("#########################\n");
                    printf("# Novo ID: ");
                    scanf("%i",&aux2.idCliente);
                    getchar();
                    printf("# Novo nome: ");
                    gets(aux2.nome);
                    printf("# Nova Idade: ");
                    scanf("%i", &aux2.idade);
                    printf("# Cliente ativo? (1-Sim, 0-Nao) ");
                    scanf("%i",&aux2.ativo);
                    // Altera o cursor
                    fseek(arq, sizeof(Cliente)*(pos), SEEK_SET);

                    fwrite(&aux2, sizeof(Cliente),1,arq);

                    fclose(arq);
                    break;
            case 3:
                    break;
            case 4:
                    arq = fopen("clientes.bin", "rb");
                    // Posiciona o cursor para o inicio do arquivo;
                    rewind(arq);
                    // Cria uma variavel auxiliar para imprimir
                    // os dados dos clientes;
                    Cliente aux;
                    // Efetua a leitura ate encontrar o final do arquivo;
                    system("clear");
                    while(!feof(arq)){
                        if(fread(&aux, sizeof(Cliente),1,arq) != 1){
                            printf("Falha ao ler informacoes do cliente!\n");
                        }else{
                            printf("#####################################\n");
                            printf("# ID: %i\n", aux.idCliente);
                            printf("# Nome: %s\n", aux.nome);
                            printf("# Idade: %i\n", aux.idade);
                            printf("# Ativo: %i\n", aux.ativo);
                        }
                    }
                    printf("#####################################\n");
                    system("sleep 2");
                    fclose(arq);
                    break;
            case 0:
                    fclose(arq);
                    break;
            default:
                    break;
        }
    }while(opc!=0);
}
