#include<stdio.h>
#include<stdlib.h>

char alfa[26]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int posi(char c)
{
    int i;

    for(i=0; i<26; i++)
        if (alfa[i] == c) return i;

    return -1;
}

int main()
{

    int qtd, pular;
    char string[50];
    int i,h, pos;


    scanf("%d",&qtd);

    for(i=0; i<qtd; i++)
    {
        printf("Digite a String: \n");
        scanf("%s",string);
        printf("Digite a Quantidade: \n");
        scanf("%d",&pular);
        for(h=0; string[h] != '\0'; h++)
        {
            pos = (posi(string[h]) - pular) < 0 ? (posi(string[h]) - pular) + 25 : posi(string[h]) - pular;
            string[h] = alfa[pos];
        }
        printf("%s\n",string);

    }




    return 0;
}
