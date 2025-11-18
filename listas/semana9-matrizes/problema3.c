#include <stdio.h>

int main()
{
    printf("===CAMPEONATO DE EMPATES====\n\n");
    
    int m_times; 
    printf("Entre com o numero de times: ");
    scanf("%d", &m_times);
    
    printf("Entre com a matriz do campeonato:\n");
    int campeonato[20][20] = {0};
    for(int i = 0; i < m_times; i++){
        for(int j = 0; j < m_times; j++){
            scanf("%d", &campeonato[i][j]);
        }
    }
    
    int empate = 0;
    for(int i = 0; i < m_times; i++){
        for(int j = 0;  j < m_times; j++){
            for(int k = 0; k < m_times; k++){
                if(campeonato[i][j] == campeonato[j][k] && i == k && i < j){
                    empate++;
                }
            }
        }
    }
    
    printf("Numero de empates: %d", empate);

    return 0;
    
}