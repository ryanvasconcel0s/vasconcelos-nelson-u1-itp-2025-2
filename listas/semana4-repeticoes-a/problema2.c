#include <stdio.h>
#include <math.h>


int main()
{
    printf("===SALVE O HOMEM ARANHA===\n\n");
    
    
    //Distância da teia 
    float distanciaTeia;
    printf("Digite a distancia maxima da teia: ");
    scanf("%f", &distanciaTeia);
    
    //Coordenadas iniciais (ci)
    float x, y;
    printf("\nEntre com a sua coordenada incial x: ");
    scanf("%f", &x);
    printf("Entre com a sua coordenada inicial y: ");
    scanf("%f", &y);
    
    //Alvos (ax,ay)
    float numerosAlvos, ax, ay;
    printf("\nEntre com o numero de alvos a serem atingindos: ");
    scanf("%f", &numerosAlvos);
    
    //Contador dos alvos alcançados (j)
    int j = 0;
    
    int i = 1;
    for(i; i <= numerosAlvos; i++){
        printf("Entre com a coordenada x do alvo %d: ", i);
        scanf("%f", &ax);
        printf("Entre com a coordenada y do alvo %d: ", i);
        scanf("%f", &ay);
        
        float distanciaEuclidiana = sqrt(pow(x-ax, 2) + pow(y-ay, 2));
        printf("\nA distancia euclidiana do Homem aranha ate o alvo %d eh: %.2f", i, distanciaEuclidiana);
        
        if(distanciaEuclidiana <= distanciaTeia){
            printf("\nHomem aranha atingiu o alvo %d!", i);
            j++;
            x = (2*ax - x);
            
            printf("\nNova coordenada do Homem Aranha eh: (%.2f, %.2f)\n\n", x, y);
        
        }else{
            printf("\nHomem aranha nao atingiu o alvo %d\n\n", i);
            
        }

    }

    printf("Homem aranha atingiu %d alvos", j);
    printf("\nHomem aranha atingiu todos os alvos?\n");
    if(numerosAlvos == j){
        printf("S");
    }else{
        printf("N");
    }
      

    return 0;
}