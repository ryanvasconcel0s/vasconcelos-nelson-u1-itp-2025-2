#include <stdio.h>


int main(){

    printf("===SISTEMA DE NOTAS===\n\n");

    //Notas dos alunos 

    float n1, n2, n3;
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("\nDigite a segunda nota do aluno: ");
    scanf("%f", &n2);
    printf("\nDigite a terceira nota do aluno: ");
    scanf("%f", &n3);

    //Media das três notas 
    float media;
    media = (n1+n2+n3)/3;
    printf("\nA media das notas do aluno eh: %.2f.", media);

    if(media >= 7.0){
        printf("\nO aluno foi APROVADO");
    }else if(media < 4.0){
        printf("\nO aluno foi REPROVADO");
    }else if(media >= 4.0 && media < 7.0){
        float notaFinal = 10.0 - media; 
        printf("\nO aluno esta em RECUPERACAO e precisa ter NOTA FINAL igual a %.2f para ser APROVADO", notaFinal);
    }

    


    return 0;

}