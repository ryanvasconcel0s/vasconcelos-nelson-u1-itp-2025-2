#include <stdio.h>


int main()
{
    printf("====EM BUSCA DO TESOURO====\n\n");
    
    int ilhas[10]; 
    int primeiraVisita = 0;
    for(int i = 0; i < 10; i++){
        printf("Nativos da ilha %d afirmam que o tesouro está na ilha: ", i);
        scanf("%d", &ilhas[i]);
        for(int j = 0; j < 10; j++){
            if(i < j && ilhas[i] == ilhas[j] && primeiraVisita == 0);
        }
    }
    
    for(int i = 0; i <10; i++){
        for(int j = 0; j < 10; j++){
            if(i < j && ilhas[i] == ilhas[j] && primeiraVisita == 0){
                primeiraVisita = i; 
                printf("\ni: %d j: %d", i, j);
            }
        }
    }
    
    if(primeiraVisita != 0){
        printf("\n\nRevisitar primeiro a ilha %d", ilhas[primeiraVisita]);
    }else{
        printf("\nIlha a ser visitada %d", primeiraVisita);
    }
    
   
    return 0;
}
