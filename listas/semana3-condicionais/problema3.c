#include <stdio.h>


int main(){

    printf("===SISTEMA DE NOTAS===\n\n");

    //Notas dos alunos 

    float n1, n2, n3;
    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);
    printf("\nDigite sua segunda nota: ");
    scanf("%f", &n2);
    printf("\nDigite sua terceira nota: ");
    scanf("%f", &n3);

    //Media das três notas 
    float media;
    media = (n1+n2+n3)/3;

    printf("A média das suas notas é: %.2f.", media);


    return 0;

}