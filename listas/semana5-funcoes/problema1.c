#include <stdio.h>


void conversaoHoras(int horas, int minutos, int entrada){

    //laço para ajustar os minutos 
    while(minutos >= 60){
        minutos = minutos - 60; 
        horas = horas + 1; 
    }
    
    //laço para ajustar as horas 
    int hora_convertida = 0;
    int i = horas;
    while(i > 24){
        i--;
        hora_convertida++;
        if(hora_convertida == 25){
            hora_convertida = 1;
        }
        horas = hora_convertida; 
    }
    
    //condicoes para converter a hora 
    if(entrada == 0){                                   //para o formato hh:mm
        printf("%.2d:%.2d\n", horas, minutos);          
    }
    
    if(entrada == 1 && (horas <= 12 || horas == 24)){   //para o formato AM
        if(horas == 24){
            horas = 12;
        }
        printf("%.2d:%.2d AM\n", horas, minutos);       
    }
    
    int hora_convertida_PM = 0;
    int contador_PM = horas;
    
    if(entrada == 1 && horas > 12 && horas != 24){      //para o formato PM
        while(contador_PM > 12){
            contador_PM --;
            hora_convertida_PM++;
            horas = hora_convertida_PM;
        }
        printf("%.2d:%.2d PM\n", horas, minutos);
    }
    

    
}

int main()
{
    printf("===HORARIO DAS RONDAS===\n\n");

    int horas, minutos, entrada; 
    
    printf("Entre com as horas: ");
    scanf("%d", &horas);
    printf("Entre com os minutos: ");
    scanf("%d", &minutos);
    printf("Digite '0' para ver as rondas no formato hh:mm ou '1' para ver hora em AA: ");
    scanf("%d", &entrada);
    
    int horaRonda1, horaRonda2, horaRonda3, horaRonda4;
    int minutoRonda1, minutoRonda2, minutoRonda3, minutoRonda4;
    
    horaRonda1 = horas + 1;
    horaRonda2 = horas + 2;
    horaRonda3 = horas + 4;
    horaRonda4 = horas + 12;

    minutoRonda1 = minutos;
    minutoRonda2 = minutos + 10;
    minutoRonda3 = minutos + 40;
    minutoRonda4 = minutos + 15; 

    printf("\nHorarios:\n");
    conversaoHoras(horas, minutos, entrada);
    conversaoHoras(horaRonda1, minutoRonda1, entrada);
    conversaoHoras(horaRonda2, minutoRonda2, entrada);
    conversaoHoras(horaRonda3, minutoRonda3, entrada);
    conversaoHoras(horaRonda4, minutoRonda4, entrada);
    

    return 0;
}