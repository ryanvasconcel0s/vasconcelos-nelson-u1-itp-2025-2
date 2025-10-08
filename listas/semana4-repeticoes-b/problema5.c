#include <stdio.h>

int main()
{
    printf("===SOMA DE NUMEROS EM UM PADRAO DE N LINHAS===\n\n");
    
    int n; 
    printf("Entre com um numero n: ");
    scanf("%d", &n);
    
    
    //Contadares do somatorio; 
    int i, j, somatorio = 0;

    printf("\nO padrao de soma eh: \n");
    
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            somatorio = somatorio + 1;
            printf("%d ", somatorio); 
        }
        printf("\n");
    }

    return 0;
}




