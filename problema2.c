#include <stdio.h>

int main()
{
    int m_total, n_posse;
    do{
        printf("Digite o numero total de figurinhas dentro do intervalo de 0 a 1000: ");
        scanf("%d", &m_total);
        
        if(m_total < 0 || m_total > 1000){
            printf("--OPCAO INVALIDA--\n");
        }
    }while(m_total < 0 || m_total > 1000);
    
    do{
        printf("Digite o numero de figurinhas que você possui: ");
        scanf("%d", &n_posse);
        
        if(n_posse < 0 || n_posse > m_total){
            printf("--OPCAO INVALIDA--\n");
        }
    }while(n_posse < 0 || n_posse > 1000);

    int total_figurinhas[1000];
    int posse_figurinhas[1000];
    
    for(int i = 0; i < 1000; i++){
        total_figurinhas[i] = 0;
    }
    for(int i = 0; i < 1000; i++){
        posse_figurinhas[i] = 0;
    }
    
    printf("\nDigite quais figurinhas voce tem: ");
    for(int i = 0; i < n_posse; i++){
        scanf("%d", &posse_figurinhas[i]);
    }
    for(int i = 0; i < m_total; i++){
        for(int j = 0; j < m_total; j++){
            if(posse_figurinhas[i] == j+1){
                total_figurinhas[j] = j+1;
            }
        }
    }
    
    printf("As figurinhas que faltam sao: ");
    for(int i = 0; i < m_total; i++){
        if(total_figurinhas[i] == 0){
            printf("%d ", i+1);
        }
    }
    

    return 0;
}





