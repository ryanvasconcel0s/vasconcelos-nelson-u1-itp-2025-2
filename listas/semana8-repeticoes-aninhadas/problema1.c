#include <stdio.h>

#define MAX_Sortedos 30
#define MAX_Apostados 50


int main(){

    printf("===Estou com sorte (ou nao)===\n\n");

    int m, n;
    do{
        printf("Digite uma quantidade, entre 1 e 30, de numeros a serem sorteados: ");
        scanf("%d", &m);
        if(m < 1 || m > 30){
            printf("QUANTIDADE INVALIDA\n\n");
        }
    }while(m < 1 || m > 30);
    printf("\n");
    do{
        printf("Digite uma quantidade, entre  %d e 50, de numeros da aposta: ", m);
        scanf("%d", &m);
        if(n < m || n > 50){
            printf("QUANTIDADE INVALIDA\n\n");
        }
    }while( n < m || n > 50);


    int sorteados[30], apostados[50];
    
    for(int i = 0; i < m; i++){
        printf("Entre com o %d° numero sorteado: ", i+1);
        scanf("%d", &sorteados[i]);
    
    }
    for(int i = 0; i < m; i++){
        if(sorteados[i] == '\n'){
            sorteados[i] = '\0';
            break;
        }
    }
    
    printf("\n");
    
    
    for(int i = 0; i < n; i++){
        printf("Entre com o %d° numero da aposta: ", i+1);
        scanf("%d", &apostados[i]);
    
    }
    for(int i = 0; i < m; i++){
        if(apostados[i] == '\n'){
            apostados[i] = '\0';
            break;
        }
    }
    
    
    int numerosAcertados = 0;
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(sorteados[i] == apostados[j]){
                numerosAcertados++;
            }
        }
    }
    printf("\nNumeros acertados: %d", numerosAcertados);
    
    

    
    
    return 0;
}

/*A megasena é um jogo de aposta em que são sorteadas 6 dezenas e em cada cartela o jogador anota 6 dezenas
(aposta mínima). Na lotomania, o jogador marca 50 dezenas e são sorteadas 20. Escreva um programa
que leia um inteiro m (1 ≤ m ≤ 30), um inteiro n (m ≤ n ≤ 50), representando a quantidade de números
sorteados e a quantidade de números de uma aposta, respectivamente. Em seguida deve ler os m números
sorteados, os n números da aposta e escrever na tela quantos números o jogador acertou. Note que o intervalo
dos números sorteados/apostados é desconhecido (vide exemplo 3). Assuma que um número não aparece
mais de uma vez no mesmo sorteio nem na mesma aposta.
*/