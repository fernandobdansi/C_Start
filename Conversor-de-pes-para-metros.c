#include <stdio.h>
#include <stdlib.h>

float pes2metros(float pes){
    return (pes * 3.281);
}
int main(){
    float pes;
    printf("Informe o numero de pes: ");
    scanf("%f",&pes);
    // Usando Função do c para converter de pes para metros
    printf("%.2f pes eh igual a %.2f metros\n", pes, pes2metros(pes));
}
