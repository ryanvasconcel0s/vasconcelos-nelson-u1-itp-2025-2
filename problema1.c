#include <stdio.h>

int main()
{
    int numero_questoes;
    do{
        printf("Digite um numero de questoes entre 0 e 20: ");
        scanf("%d", &numero_questoes);
        
        if(numero_questoes < 0 || numero_questoes > 20){
            printf("--OPCAO INVALIDA--\n");
        }
    }while(numero_questoes < 0 || numero_questoes > 20);


    int gabarito[20];
    int respotasAlunos[20];
    
    for(int i = 0; i < 20; i++){
        gabarito[i] = 0;
    }
    for(int i = 0; i < 20; i++){
        respotasAlunos[i] = 0;
    }
    
    printf("\n");
    for(int i = 1; i <= numero_questoes; i++){
        printf("Entre com o gabarito da questao %d: ", i);
        scanf("%d", &gabarito[i-1]);
    }
    printf("\n");
    for(int i = 1; i <= numero_questoes; i++){
        printf("Entre com a resposta da questao %d: ", i);
        scanf("%d", &respotasAlunos[i-1]);
    }
    
    int acertos = 0;
    for(int i = 0; i < numero_questoes; i++){
        if(gabarito[i] == respotasAlunos[i]){
            acertos++;
        }
    }
    
    if(acertos == 1){
        printf("\n%d acerto", acertos);
    }else{
        printf("\n%d acertos", acertos);
    }


    return 0;
}


