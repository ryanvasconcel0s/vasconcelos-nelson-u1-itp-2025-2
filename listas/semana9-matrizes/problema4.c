#include <stdio.h>

int main()
{
    printf("===UMA PECHINCHA!====\n\n");
    
    int m; 
    printf("Entre com um numero m para a matriz das passagens MxM: ");
    scanf("%d", &m);
    
    printf("Entre com a matriz das passagens:\n");
    int matriz_passagens[10][10] = {0};
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matriz_passagens[i][j]);
        }
    }
    

    int partida, chegada;
    printf("Entre com o ponto de partida: ");
    scanf("%d", &partida);
    printf("Entre com o ponto de chegada: ");
    scanf("%d", &chegada);



    int menor_preco = 0;
    int escala = 0;

    if(matriz_passagens[partida][chegada] > 0){
        menor_preco = matriz_passagens[partida][chegada];
    }   

    for(int i = 0; i < m; i++){
        if(matriz_passagens[partida][i] != 0 && matriz_passagens[i][chegada] != 0){

            int custo_conexao = matriz_passagens[partida][i] + matriz_passagens[i][chegada];

            if(menor_preco <= 0 || custo_conexao < menor_preco){
                menor_preco =  custo_conexao;
                escala = i; 
            }
        }
    }

    if(escala > 0){
        printf("%d-%d-%d R$%d", partida, escala, chegada, menor_preco);
    }else{
        printf("%d-%d R$%d", partida, chegada, menor_preco);
    }




    
    
    return 0;
}
