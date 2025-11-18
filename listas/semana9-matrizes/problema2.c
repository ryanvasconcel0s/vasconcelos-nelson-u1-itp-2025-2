#include <stdio.h>

int main(){

    printf("===SUGESTAO DE AMIGOS===\n\n");

    int m_usuarios;
    printf("Entre com o numero de usuarios: ");
    scanf("%d", &m_usuarios);

    int matriz_amizade[100][100];
    for(int i = 0; i < m_usuarios; i++){
        for(int j = 0; j < m_usuarios; j++){
            scanf("%d", &matriz_amizade[i][j]);
        }
    }

    int x_amizade, amigosDe_x [100] = {0}; 
    printf("Entre com o numero do usuario, para saber quem tem amigos em comum: ");
    scanf("%d", &x_amizade);

    for(int i = x_amizade; i < x_amizade+1; i++){
        for(int j = 0; j < m_usuarios; j++){
            if(matriz_amizade[i][j] != 0){
                amigosDe_x[j] = matriz_amizade[i][j];
            }
        }
    }



    int verificacao_amizade[100] = {0};
    for(int i = x_amizade; i < x_amizade+1; i++){
        for(int j = 0; j < m_usuarios; j++){
            if(amigosDe_x[j] != 0){
                for(int k = 0; k < m_usuarios; k++){
                    if(matriz_amizade[j][k] == 1){
                        verificacao_amizade[k] = -1;
                    }
                }
            }
        }
        verificacao_amizade[x_amizade] = 0;
    }


    for(int i = 0; i < m_usuarios; i++){
        if(amigosDe_x[i] != 0){
            verificacao_amizade[i] = 0;
        }
    }

    for(int i = 0; i < m_usuarios; i++){
        if(verificacao_amizade[i] == -1){
            printf("%d ", i);
        }
    }

    return 0;
}