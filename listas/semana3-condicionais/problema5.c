#include <stdio.h>

int main()
{

    printf("===CALCULADORA DE DESCONTO PROGRESSIVO===\n\n");

    float valorCompra;
    printf("Digite o valor da compra do cliente: ");
    scanf("%f", &valorCompra);


    float descontoCompra, vFinalCompra;
    if(valorCompra <= 100.00){
        printf("\nO cliente não possui descontos.\nTotal de descontos: 0.\nValor final: %.2f R$.", valorCompra);
    }else if(valorCompra > 100.00 && valorCompra <= 500.00){
        descontoCompra = (10.0/100.0)*valorCompra;
        vFinalCompra = valorCompra - descontoCompra;
        printf("\nO desconto do cliente foi de 10 por cento. \nTotal de descontos: %.2f R$. \nValor final: %.2f - %.2f = %.2f R$.\n", descontoCompra, valorCompra, descontoCompra, vFinalCompra);
    }else if(valorCompra > 500.00 && valorCompra <= 1000.00){
        descontoCompra = (15.0/100.0)*valorCompra;
        vFinalCompra = valorCompra - descontoCompra;
        printf("\nO desconto do cliente foi de 15 por cento. \nTotal de descontos: %.2f R$. \nValor final: %.2f - %.2f = %.2f R$.\n", descontoCompra, valorCompra, descontoCompra, vFinalCompra);
    }else if(valorCompra > 1000.00){
        descontoCompra = (20.0/100.0)*valorCompra;
        vFinalCompra = valorCompra - descontoCompra;
        printf("\nO desconto do cliente foi de 20 por cento. \nTotal de descontos: %.2f R$. \nValor final: %.2f - %.2f = %.2f R$.\n", descontoCompra, valorCompra, descontoCompra, vFinalCompra);
    }


    return 0;
}