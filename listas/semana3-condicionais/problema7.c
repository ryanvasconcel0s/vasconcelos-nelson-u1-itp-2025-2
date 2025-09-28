#include <stdio.h>
#include <math.h> 

int main()
{

    printf("===SISTEMAS DE EQUAÇÃO DO SEGUNDO GRAU===\n\n");

    //Variáveis da equação
    float a, b, c;
    printf("Entre com o valor de 'a' da equação: ");
    scanf("%f", &a);

    printf("Entre com o valor de 'b' da equação: ");
    scanf("%f", &b);

    printf("Entre com o valor de 'c' da equção: ");
    scanf("%f", &c);

    //Fórmulas para delta e raízes de x
    float delta = pow(b, 2) - (4*a*c);
    float x1, x2; 

    if(a == 0){
        printf("\nA equação não é do segundo grau.");

    }else if(delta == 0){
        x1 = -b/(2.0*a);
        printf("A equação possui uma raiz, sendo x = %.2f.", x1); 

    }else if(delta < 0 ){
        printf("A equação não possui raízes reais.");

    }else if(delta > 0){
        x1 = (-b+sqrt(delta))/(2.0*a);
        x2 = (-b-sqrt(delta))/(2.0*a);
        printf("A equação possui duas raízes, sendo elas x1 = %.2f e x2 %.2f.", x1, x2);
    }


    return 0; 
}

/*Crie um programa que resolva equações do segundo grau (ax² + bx + c = 0). O programa deve:
Ler os coeficientes a, b e c
Verificar se é uma equação do segundo grau (a ≠ 0)
Calcular o discriminante (Δ = b² - 4ac)
Determinar e exibir as raízes conforme o caso:
Se Δ > 0: duas raízes reais distintas
Se Δ = 0: uma raiz real
Se Δ < 0: não possui raízes reais*/