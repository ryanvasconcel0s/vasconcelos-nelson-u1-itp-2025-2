#include <stdio.h> 


int main()
{

    printf("===CALCULADORA DE ENERGIA===\n\n");
    
    //Taxa baseada no perfil dos consumidores; 
    float residencial = 0.60;
    float comercial = 0.48;
    float industrial = 1.29; 

    //Taxa fixa 
    float taxaf = 15.00;

    //Entrada do consumo de energia em kWh
    float consumo; 
    printf("Qual foi seu consumo de energia em kWh?\n");
    scanf("%f", &consumo);
   
    //Entrada do tipo de perfil;
    char perfil; 
    printf("\nQual seu perfil de consumidor? Digite 'r' para residencial, 'c' para comercial, 'i' para industrial\n");
    scanf(" %c", &perfil);

    //Saída do valor da conta
    float vconta;
    if(perfil != 'r' && perfil != 'c' && perfil != 'i'){
        printf("\nPerfil invalido\n");
    }else if(perfil == 'r'){
        vconta = (residencial*consumo) + taxaf;
        printf("\nO valor da sua conta de energia eh: %.2f R$\n", vconta);
    }else if (perfil == 'c'){
        vconta = (comercial*consumo) + taxaf;
        printf("\nO valor da sua conta de energia eh: %.2f R$\n", vconta);
    }else if (perfil == 'i'){
        vconta = (industrial*consumo) + taxaf;
        printf("\nO valor da sua conta de energia eh: %.2f R$\n", vconta);
    }
    
    
    return 0;
}
