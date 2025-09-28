#include <stdio.h>

int main(){

    printf("===COMPRA PLACAS DE ALUMINIO PT2===\n\n");

    float preco_fornecedor1, preco_fornecedor2;
    float quantia_disponivel, quantia_restante;

    printf("Digite o preco do primeiro fornecedor: ");
    scanf("%f", &preco_fornecedor1);
    printf("Digite o preco do segundo fornecedor: ");
    scanf("%f", &preco_fornecedor2);
    printf("Digite a quantia disponivel: ");
    scanf("%f", &quantia_disponivel);

    float verificador_preco_anterior = quantia_disponivel;
    int quantidadef1 = 0, quantidadef2 = 0;

    for(int i = 0; i <= 10; i++){
        for(int j =0; j <= 10; j++){
            quantia_restante = quantia_disponivel - ((i*preco_fornecedor1) + (j*preco_fornecedor2));
            if(quantia_restante >= 0 && quantia_restante < verificador_preco_anterior){
                verificador_preco_anterior = quantia_restante;
                quantidadef1 = i;
                quantidadef2 = j;
            }  
        }

    }
    printf("\nResta menos comprando %d do primeiro e %d do segundo: %.2f", quantidadef1, quantidadef2, verificador_preco_anterior);

    return 0;
}