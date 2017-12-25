#include <stdio.h>
#include <stdlib.h>

float pol2cm(float pol){
    return (pol * 2.54);
}

int main(){
    float pol;
  
    printf("Informe o numero de polegadas: ");
    scanf("%f",&pol);
    // Usando Função do C para converter pol para cm
    printf("O valor em centimetros eh: %.2f\n", pol2cm(pol));
    
    return 0;
}
