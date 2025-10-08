#include <stdio.h>

int main (){

    float n1, n2, soma, subt, produto, div, media; 
    int resto;

    printf("===OPERAÇOES COM DOIS NUMEROS===\n\n");

    printf("Entre com o primeiro numero:\n");
    scanf("%f", &n1);

    printf("Entre com o segundo numero\n");
    scanf("%f", &n2);

    soma = n1+n2;
    subt = n1-n2;
    produto = n1*n2;
    div = n1/n2;
    resto = (int)n1%(int)n2;
    media = (n1+n2)/2;

    printf("A soma de %.2f e %.2f eh %.2f.\n", n1, n2, soma);
    printf("A subtração de %.2f por %.2f eh %.2f.\n", n1, n2, subt);
    printf("O produto de %.2f e %.2f eh %.2f.\n", n1, n2, produto);
    printf("A divisao de %.2f por %.2f eh %.2f.\n", n1, n2, div);
    printf("O resto da divisao inteira de %.2f por %.2f eh %d.\n", n1, n2, resto);
    printf("A media entre %.2f e %.2f eh %.2f.\n", n1, n2, media);


    return 0;
}