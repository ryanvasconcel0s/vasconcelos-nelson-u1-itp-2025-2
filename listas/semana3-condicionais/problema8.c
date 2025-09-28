#include <stdio.h>
#include <math.h>

int main()
{

    printf("===VALIDADOR DE TRIANGULOS===\n\n");

    //Lados dos triangulos
    float l1, l2, l3;
    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &l1);
    printf("Digite o valor do segundo lado: ");
    scanf("%f", &l2);
    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &l3);


    //Classificando tamanho dos lados tal que lado 'a' é o maior lado
    float la, lb, lc;
    if((l1 >= l2 && l1 >= l3)){
        la = l1;
        lb = l2;
        lc = l3;
    }else if(l2 >= l1 && l2 >= l3){
        la = l2;
        lb = l1;
        lc = l3;
    }else if(l3 >= l1 && l3 >= l2){
        la = l3;
        lb = l1;
        lc = l2; 
    }

    printf("\nClassificação do triângulo:\n");


    //Verificando se é um triângulo
   if(lb+lc < la){
    printf("Não é um triangulo.");
   }

   //Primeira verificação: Equilátero, Isóceles e Escaleno
   if(la == lb && la == lc && lb+lc > la){
    printf("Equilátero");
   }else if((la == lb && la != lc) || (lb == lc && lb != la) || (lc == la && lc !=lb) && lb+lc > la){
    printf("Isóceles");
   }else if(la != lb && la != lc && lb != lc && lb+lc > la){
    printf("Escaleno");
   }

    //Lados elevados ao quadrado
    float laq, lbq, lcq;
    laq = pow(la, 2);
    lbq = pow(lb, 2);
    lcq = pow(lc, 2);

   //Segunda verificação: Retângulo, Acutângulo e Obtusângulo
   if(laq == (lbq + lcq) && lb+lc > la){
    printf(" e Retângulo.");
   }else if(laq < (lbq + lcq) && lb+lc > la){
    printf(" e Acutângulo.");
   }else if(laq > (lbq + lcq) && lb+lc > la){
    printf(" e Obtusângulo.");
   }

    return 0;
}

/*
Desenvolva um programa que leia três valores representando os lados de um triângulo e determine:
Se os valores podem formar um triângulo (soma de dois lados sempre maior que o terceiro)
Se formar um triângulo, classificá-lo como:
Equilátero (todos os lados iguais)
Isósceles (dois lados iguais)
Escaleno (todos os lados diferentes)
Também classifique quanto aos ângulos:
Retângulo (a² = b² + c², onde a é o maior lado)
Acutângulo (a² < b² + c²)
Obtusângulo (a² > b² + c²)


*/