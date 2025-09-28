#include <stdio.h>

int main()
{
    printf("===NUMEROS COLEGAS===\n\n");
    
    int numeroA, numeroB, divisorA = 0, divisorB = 0, somaDiv_A = 0, somaDiv_B = 0;
    
    printf("Entre com o numero A: ");
    scanf("%d", &numeroA);
    printf("Entre com o numero B: ");
    scanf("%d", &numeroB);
    
    
    printf("\n==Para o numero A, temos os seguintes divisores:");
    int i;
    for(i = 1; i <= (numeroA/2); i++){
        
        if(numeroA%i == 0){
            divisorA = i;
            somaDiv_A = somaDiv_A + i;
            printf("\nDivisor: %d\n", divisorA);
            printf("Soma acumulada dos divisores A: %d", somaDiv_A);
        }
    }
    
    printf("\n\n==Para numero B, temos os seguintes divisores:");
    for(i = 1; i <= (numeroB/2); i++){
        
        if(numeroB%i == 0){
            divisorB = i;
            somaDiv_B = somaDiv_B + i;
            printf("\nDivisor: %d\n", divisorB);
            printf("Soma acumulada dos divisores B: %d", somaDiv_B);
        }
    }
    
    printf("\n\nNumero %d e o numero %d sao colegas?\n", somaDiv_A, somaDiv_B);
    int verif_NumerosColegas1 = somaDiv_A - numeroB;
    int verif_NumerosColegas2 = somaDiv_B - numeroA;
    
    printf("Verificacao: %d\n", verif_NumerosColegas2);
    
    if((verif_NumerosColegas1 <= 2 && verif_NumerosColegas1 >= -2) && (verif_NumerosColegas2 <= 2 && verif_NumerosColegas2 >= -2) 
        && verif_NumerosColegas1 != 0 && verif_NumerosColegas2 != 0){
        printf("S");
    }else{
        printf("N");
    }
    
    

    return 0;
}




