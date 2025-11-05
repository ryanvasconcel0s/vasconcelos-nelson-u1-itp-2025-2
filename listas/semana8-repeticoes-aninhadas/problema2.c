#include <stdio.h>
#include <string.h>


int main(){
    
    char meses[12][15] = {"Janeiro", "Fevereiro", "Marco", 
        "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", 
        "Outubro", "Novembro", "Dezembro"};

        int chuvas[12];

        for(int i = 0; i < 12; i++){
            printf("Entre com a quantidade de chuva em relacao ao mes %d: ", i+1);
            scanf("%d", &chuvas[i]);
        }



        for(int i = 0; i < 12; i++){

            int indiceMaiorChuva = i;
            for(int j = i + 1; j < 12; j++){
                if(chuvas[j] > chuvas[indiceMaiorChuva]){
                    indiceMaiorChuva = j;
                }
            }

            if(indiceMaiorChuva != i){
                int ordemChuva = chuvas[indiceMaiorChuva];
                chuvas[indiceMaiorChuva] = chuvas[i];
                chuvas[i] = ordemChuva;

                char ordemMeses[15];
                strcpy(ordemMeses, meses[indiceMaiorChuva]);
                strcpy(meses[indiceMaiorChuva], meses[i]);
                strcpy(meses[i], ordemMeses);

            }

        }

        printf("\n\nOrdem da quantidade de chuvas em relacao aos meses: ");

        printf("\n");
        for(int i = 0; i < 12; i++){
            printf("%s %d\n", meses[i], chuvas[i]);
        }


    return 0;
}
