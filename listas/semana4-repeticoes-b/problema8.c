#include <stdio.h>

int main(){

    printf("===COMPRA PLACAS DE ALUMINIO PT1===\n\n");

    float preco_fornecedor1, preco_fornecedor2;
    float quantia_disponivel, quantia_restante;

    printf("Digite o preco do primeiro fornecedor: ");
    scanf("%f", &preco_fornecedor1);
    printf("Digite o preco do segundo fornecedor: ");
    scanf("%f", &preco_fornecedor2);
    printf("Digite a quantia disponivel: ");
    scanf("%f", &quantia_disponivel);


    for(int i = 0; i <= 10; i++){
        for(int j =0; j <= 10; j++){
            quantia_restante = quantia_disponivel - ((i*preco_fornecedor1) + (j*preco_fornecedor2));
            if(quantia_restante >= 0){
                printf("\nComprando %d do primeiro e %d do segundo resta: %.2f", i, j, quantia_restante);
            }else if (quantia_restante < 0){
                printf("\nComprando %d do primeiro e %d do segundo, o saldo fica negativo (%.2f): Compra inviavel", i, j, quantia_restante);
                
            }
        
        }
        printf("\n");

    }


    return 0;
}