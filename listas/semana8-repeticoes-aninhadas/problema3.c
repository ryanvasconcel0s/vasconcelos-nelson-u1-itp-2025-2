#include <stdio.h>

int main(){
    printf("=== Esse sim é piloto\n\n===");

    int n_jogadores;
    printf("Entre com o numero de jogadores da corrida: ");
    scanf("%d", &n_jogadores);

    printf("LARGADA:\n");
    int largada[21];
    for(int i = 1; i < n_jogadores; i++){
        scanf("%d", &largada[i]);
    }

    printf("CHEGADA:\n");
    int chegada[21];
    for(int i = 1; i < n_jogadores; i++){
        scanf("%d", &chegada[i]);
    }

    int posicaoLargada[21], posicaoChegada[21];

    for(int i = 1; i <= n_jogadores; i++){
        posicaoLargada[largada[i]] = i;   
        posicaoChegada[chegada[i]] = i;   
    }


    int maior_ganho = 0;
    int piloto_ganhador = 0;
    int empate = 0;


    for(int i = 1; i <= n_jogadores; i++){
        int ganho = posicaoLargada[i] - posicaoChegada[i];

        if(ganho > maior_ganho){
            maior_ganho = ganho;
            piloto_ganhador = i;
            empate = 0;
        }
        else if(ganho == maior_ganho && ganho > 0){
            empate = 1;
        }
    }


    if(maior_ganho <= 0 || empate){
        printf("empate");
    } else {
        printf("%d", piloto_ganhador);
    }

    return 0;

}
