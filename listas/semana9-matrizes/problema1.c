#include <stdio.h>
int main()
{
    printf("=== Campo Agricola === \n\n");
    
    int m_linha, n_coluna;
    
    scanf("%d %d", &m_linha, &n_coluna);
    
    int campo[10][10] = {0};

    for(int i = 0; i < m_linha; i++){
        for(int j = 0;  j < n_coluna; j++){
            scanf("%d", &campo[i][j]);
        }
    }
    
    int irrigado[10][10] = {0};
    
    for(int i = 0; i < m_linha; i++){
        for(int j = 0;  j < n_coluna; j++){
            if(campo[i][j] == 2){
                if(i > 0 && campo[i-1][j] == 1){ //norte
                    irrigado[i-1][j] = 1;
                } 
                if(i < m_linha - 1 && campo[i+1][j] == 1){ //sul
                    irrigado[i+1][j] = 1;
                }
                if(j < n_coluna - 1 && campo[i][j+1]){ //leste 
                    irrigado[i][j+1] = 1; 
                }
                if(j > 0 && campo[i][j-1]){ //oeste
                    irrigado[i][j-1] = 1; 
                }
            }
        }
    }

    int ehIrrigado = 0, naoIrrigado = 0;
    for(int i = 0; i < m_linha; i++){
        for(int j = 0; j < n_coluna; j++){
            if(campo[i][j] == 1){
                if(irrigado[i][j] == 1){
                    ehIrrigado++;
                }else{
                    naoIrrigado++;
                }
            } 
        }
    }
    
    printf("\nIrrigados: %d || Nao irrigados: %d", ehIrrigado, naoIrrigado);
    
    
    

    return 0;
} // minha soluçao