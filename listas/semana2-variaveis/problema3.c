#include <stdio.h>
#include <math.h>

int main (){
    float capital, taxa, tempo, montante; 

    printf("===CALCULADORA DE JUROS COMPOSTOS===\n");
    
    printf("Digite o valor do seu capital inicial:\n");
    scanf("%f", &capital);

    printf("Digite a taxa de juros:\n");
    scanf("%f", &taxa);

    printf("Digite o tempo que o capital será aplicado\n");
    scanf("%f", &tempo);

    montante = capital*pow((1 + taxa/100), tempo);

    printf("Seu motante após esse período será: %.2f.", montante);
    

    return 0;



}