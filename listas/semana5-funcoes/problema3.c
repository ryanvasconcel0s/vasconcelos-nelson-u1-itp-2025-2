#include <stdio.h> 
#include <math.h>

float alturaSonda(float x, float y){
    float altura = sin(cos(y) + x) + cos(y + sin(x)); 
    return altura;
}

float pontosVerdes(float x, float y){

    int pontosverdes = 0;

    float ponto1x = x + 0.2;
    float ponto1y = y + 0.2;
    float ponto1 = alturaSonda(ponto1x, ponto1y);
    if(ponto1 >= 0 && ponto1 <= 2){
        pontosverdes++;
    }

    float ponto2x = x - 0.2;
    float ponto2y = y - 0.2;
    float ponto2 = alturaSonda(ponto2x, ponto2y);
    if(ponto2 >= 0 && ponto2 <= 2){
        pontosverdes++;
    }

    float ponto3x = x + 0.2;
    float ponto3y = y - 0.2;
    float ponto3 = alturaSonda(ponto3x, ponto3y);
    if(ponto3 >= 0 && ponto3 <= 2){
        pontosverdes++;
    }

    float ponto4x = x - 0.2;
    float ponto4y = y + 0.2;
    float ponto4 = alturaSonda(ponto4x, ponto4y);
    if(ponto4 >= 0 && ponto4 <= 2){
        pontosverdes++;
    }

    return pontosverdes;

}


float pontosSeguros(float x, float y){

    int pontoseguros = 0;

    float ponto_Ax = x + 2;
    float ponto_Ay = y;
    float ponto_A = alturaSonda(ponto_Ax, ponto_Ay);
    if(ponto_A >= 0 && ponto_A <= 2){
        pontoseguros++;
    }

    float ponto_Bx = x - 2;
    float ponto_By = y;
    float ponto_B = alturaSonda(ponto_Bx, ponto_By);
    if(ponto_B >= 0 && ponto_B <= 2){
        pontoseguros++;
    }

    float ponto_Cx = x;
    float ponto_Cy = y - 2;
    float ponto_C = alturaSonda(ponto_Cx, ponto_Cy);
    if(ponto_C >= 0 && ponto_C <= 2){
        pontoseguros++;
    }

    float ponto_Dx = x;
    float ponto_Dy = y + 2;
    float ponto_D = alturaSonda(ponto_Dx, ponto_Dy);
    if(ponto_D >= 0 && ponto_D <= 2){
        pontoseguros++;
    }

    return pontoseguros;
}


int main(){

    float x_sonda, y_sonda;

    printf("Entre com a coordenada x: ");
    scanf("%f", &x_sonda);
    printf("Entre com a coordenada y: ");
    scanf("%f", &y_sonda);

    float altura_sonda = alturaSonda(x_sonda, y_sonda);
    float pontos_verdes = pontosVerdes(x_sonda, y_sonda);
    float pontos_seguros = pontosSeguros(x_sonda, y_sonda);

    if(altura_sonda < 0 || altura_sonda > 2 || pontos_verdes != 4){
        printf("\ntroque a coordenada");
    }else if(altura_sonda >= 0 && altura_sonda <= 2 && pontos_verdes == 4 && (pontos_seguros == 0 || pontos_seguros == 1)){
        printf("inseguro\n");
    }else if(altura_sonda >= 0 && altura_sonda <= 2 && pontos_verdes == 4 && (pontos_seguros == 2 || pontos_seguros == 3)){
        printf("relativamente seguro\n");
    }else if(altura_sonda >= 0 && altura_sonda <= 2 && pontos_verdes == 4 && pontos_seguros == 4 ){
        printf("seguro\n");
    }
    return 0; 
}

