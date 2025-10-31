#include <stdio.h>

int main()
{
    
    printf("===DETECCAO DE PLACAS===\n\n");

    char placa[9];
    printf("Entre com a numeracao da placa para verficar seu tipo: ");
    fgets(placa, 9, stdin);
    int verificadorBrasil = 0;
    int verificadorMercosul = 0;
    
    
    for(int i = 0; i < 8; i++){
        if(i >= 0 && i <= 2 && placa[i] >= 'A' && placa[i] <= 'Z' && placa[3] == '-'){
            verificadorBrasil++; 
        }
        if(i >= 4 && i <= 7 && placa[i] >= '0' && placa[i] <= '9' && placa[3] == '-'){
            verificadorBrasil++; 
        }
        
        if(i >= 0 && i <= 4 && i != 3 && placa[i] >= 'A' && placa[i] <= 'Z'&& placa[3] != '-'){
            verificadorMercosul++;
        }
        if(i >= 3 && i <= 7 && i != 4 && placa[i] >= '0' && placa[i] <= '9'&& placa[3] != '-'){
            verificadorMercosul++;
        }
    }


    if(verificadorBrasil == 7){
        printf("brasileiro");
    }else if(verificadorMercosul == 8){
        printf("mercosul");
    }else{
        printf("invalido");
    }
    
    //testes ATX-1010 ATX1M010
    
    return 0;
}