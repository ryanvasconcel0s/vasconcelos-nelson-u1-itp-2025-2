#include <stdio.h> 

int main(){

    int n_picos;
    do{
        printf("Digite o numero total de picos dentro do intervalo de 3 a 30: ");
        scanf("%d", &n_picos);
        
        if(n_picos < 3 || n_picos > 30){
            printf("--OPCAO INVALIDA--\n");
        }
    }while(n_picos < 3 || n_picos > 30);
    

    int picos[30];
    for(int i = 0; i < n_picos; i++){
        picos[i] = 0;
    }

    for(int i = 0; i < n_picos; i++){
        do{
        printf("Digite o tamanho do pico da posição %d ( pico > 0): ", i+1);
        scanf("%d", &picos[i]);
        
        if(picos[i] <= 0){
            printf("--OPCAO INVALIDA--\n");
        }
        }while(n_picos <= 0);

    }

    int pico1Maior, pico2Maior;
    int tamanhoPonte;
    int maiorValor = 0;

    for(int i = 0; i < n_picos; i++){
        for(int j = 0; j < n_picos; j++){
            if(i < j && picos[i] == picos[j] && maiorValor < picos[i]){
                maiorValor = picos[i];
                pico1Maior = i;
                pico2Maior = j;
                tamanhoPonte = (j-i) - 1;
            }
        }
    }

    printf("\nMaior valor de pico: %d ", maiorValor);
    printf("\nPicos maiores: %d, %d ", pico1Maior, pico2Maior);
    printf("\nTamanho da ponte: %d", tamanhoPonte);


    return 0; 

}