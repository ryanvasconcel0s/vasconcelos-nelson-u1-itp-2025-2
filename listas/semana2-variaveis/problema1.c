#include <stdio.h>

int main()
{
    float peso, altura, imc;
    
    printf("===CALCULADORA DE IMC :) ===\n");
    
    printf("Digite o seu peso (kg):\n");
    scanf("%f", &peso );
    
    printf("Digite sua altura (m):\n");
    scanf("%f", &altura);
    
    imc = peso/(altura * altura);
    printf("Seu IMC eh: %.2f kg/m^2\n", imc );


    return 0;
}