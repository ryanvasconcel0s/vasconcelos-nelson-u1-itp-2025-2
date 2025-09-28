#include <stdio.h>

int main (){

    float n1, n2, soma, subt, produto, div, media; 
    int resto;

    printf("===OPERAÇÕES COM DOIS NÚMEROS===\n\n");

    printf("Entre com o primeiro número:\n");
    scanf("%f", &n1);

    printf("Entre com o segundo número\n");
    scanf("%f", &n2);

    soma = n1+n2;
    subt = n1-n2;
    produto = n1*n2;
    div = n1/n2;
    resto = (int)n1%(int)n2;
    media = (n1+n2)/2;

    printf("A soma de %.2f e %.2f é %.2f.\n", n1, n2, soma);
    printf("A subtração de %.2f por %.2f é %.2f.\n", n1, n2, subt);
    printf("O produto de %.2f e %.2f é %.2f.\n", n1, n2, produto);
    printf("A divisão de %.2f por %.2f é %.2f.\n", n1, n2, div);
    printf("O resto da divisão inteira de %.2f por %.2f é %d.\n", n1, n2, resto);
    printf("A média entre %.2f e %.2f é %.2f.\n", n1, n2, media);


    return 0;
}