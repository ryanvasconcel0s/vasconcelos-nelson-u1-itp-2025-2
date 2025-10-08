#include <stdio.h>
#include <math.h>

int main()
{
    
    printf("=====JOGO DE DARDOS=====\n\n");
    
	float x, y;
	int pontos = 0, pontosBonus = 0, pontosTotal = 0;
    float distanciaEuclidiana;
    
	for(int i = 1; i <= 3; i++) {
		printf("Entre com a coordenada x do alvo %d: ", i);
		scanf("%f", &x);
		printf("Entre com a coordenada y do alvo %d: ", i);
		scanf("%f", &y);

		distanciaEuclidiana = sqrt(pow(x-0, 2) + pow(y-0, 2));
		
		printf("\nA distancia euclidiana eh: %.2f\n", distanciaEuclidiana);
		
		if(distanciaEuclidiana >= 0 && distanciaEuclidiana <= 1) {
		    pontos = 10;
		    pontosBonus = pontos/2;
			printf("Pontuacao Principal: %d   ||||   Pontucao Bonus: %d\n\n", pontos, pontosBonus);
		}else if(distanciaEuclidiana > 1 && distanciaEuclidiana <=2){
		    pontos = 6;
		    pontosBonus = pontos/2;
		    printf("Pontuacao Principal: %d   ||||   Pontucao Bonus: %d\n\n", pontos, pontosBonus);
		}else if(distanciaEuclidiana > 2 && distanciaEuclidiana <= 3){
		    pontos = 4;
		    pontosBonus = pontos/2;
		    printf("Pontuacao Principal: %d   ||||   Pontucao Bonus: %d\n\n", pontos, pontosBonus);
		}else if(distanciaEuclidiana > 3){
		    pontos = 0;
		    pontosBonus = 0;
		    printf("Pontuacao Principal: %d   ||||   Pontucao Bonus: %d\n\n", pontos, pontosBonus);
		}
		
		pontosTotal = pontosTotal + pontos + pontosBonus;

	}
	
	printf("\nTotal de pontos: %d", pontosTotal);

	return 0;
}