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

    if(imc < 18.5){
        printf("Abaixo do peso");
    }else if (imc >= 18.5 && imc <= 24.9){
        printf("Peso normal");
    }else if (imc >= 25.0 && imc <= 29.9){
        printf("Sobrepeso");
    }else if (imc >= 30.0){
        printf("Obesidade");
    }


    return 0;
}