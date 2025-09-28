#include <stdio.h>

int main()
{

    printf("===JOGO PEDRA, PAPEL OU TESOURA===\n\n");

    
    char jogador1, jogador2;
    printf("Jogador 1: Digite P para pedra, A para papel, T para tesoura: ");
    scanf(" %c", &jogador1);
    printf("\nJogador 2: Digite P para pedra, A para papel, T para tesoura: ");
    scanf(" %c",&jogador2);

    if((jogador1 == 'P' && jogador2 == 'A') || (jogador2 == 'P' && jogador1 == 'A')){
        printf("\nPapel vence pedra\n");
    }else if((jogador1 == 'P' && jogador2 == 'T') || (jogador2 == 'P' && jogador1 == 'T') ){
        printf("\nPedra vence tesoura\n");
    }else if ((jogador1 == 'T' && jogador2 == 'A') || (jogador2 == 'T' && jogador1 == 'A')){
        printf("\nTesoura vence papel\n");
    }else if (jogador1 = jogador2){
        printf("\nJogadas resultam em empate");
    }
    
    



    return 0;
}