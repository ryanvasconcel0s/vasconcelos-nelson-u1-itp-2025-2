
#include <stdio.h>

int main()
{
    printf("===PRIMOS ENTRE DOIS NUMEROS===\n\n");
    
    int a, b;
    
    //Entrada do programa, no qual número a tem que ser maior que número b.
    do{
        printf("Entre com o numero a: ");
        scanf("%d", &a);
        printf("Entre com o numero b: ");
        scanf("%d", &b);
        
        if(a<b){
            printf("\nO numero 'a' precisa ser maior que o numero 'b'.\nDigite os números novamente.\n\n");
        }
    }while(a<b);

    
    int i;
    int primeiroPrimo = 0; 
    
    for(i = b; i <= a; i++){
        
        int verificadorPrimo = 0;
        
        for(int j = 1; j <= i; j++){
            if(i%j == 0){
                verificadorPrimo++;  
            }
        }
        
        if(verificadorPrimo == 2){
                primeiroPrimo++;
        }
        
        
        if(verificadorPrimo == 2 && primeiroPrimo == 1){
            printf("\n%d", i);
        }
        else if(verificadorPrimo == 2){
            printf(", %d", i);
        }
        
    }
    printf(".");


    return 0;
}
