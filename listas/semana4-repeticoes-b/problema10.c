#include <stdio.h>

int main(){

    printf("===PROMOCAO COM MAIOR RAZAO===\n\n");

    float valorP_venda, valorQ_producao;

    printf("Digite o preco de venda p: ");
    scanf("%f", &valorP_venda);
    printf("Digite o preco de compra q: ");
    scanf("%f", &valorQ_producao);


    
    
    float lucro, bonusCliente;
    float prejuizo, verificador_prejuizo = 10*valorP_venda;
    int quantidade1 = 0, quantidade2 = 0;
    

    for(int x = 0; x <= 10; x++){
        for(int y = 0; y <= 10; y++){
            bonusCliente = x*valorQ_producao;
            lucro = (y*valorP_venda);
            prejuizo = lucro - bonusCliente;
            if(x > y && x+y <=10 && prejuizo > 0 && verificador_prejuizo > prejuizo){
                verificador_prejuizo = prejuizo;
                quantidade1 = x;
                quantidade2 = y;
            }
        }
    }

    printf("A melhor promocao eh: leve %d pague %d.", quantidade1, quantidade2);



    return 0;

}