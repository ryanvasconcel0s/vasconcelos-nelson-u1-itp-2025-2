#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>



char *misturar(char *str1, char *str2){
    int tamanho_str1 = strlen(str1);
    int tamanho_str2 = strlen(str2);

    char *string_misturada =  (char *)malloc((tamanho_str1 + tamanho_str2 + 1) * sizeof(char));

    int i = 0, j = 0, k = 0;

    while(i < tamanho_str1 && j < tamanho_str2){
        string_misturada[k] = str1[i];
        i++;
        k++;

        string_misturada[k] = str2[j];
        j++;
        k++;
    }

    while(i < tamanho_str1){
        string_misturada[k] = str1[i];
        i++;
        k++;
    }

    while(j < tamanho_str2){
        string_misturada[k] = str2[j];
        j++;
        k++;
    }

    string_misturada[k] = '\0';

    return string_misturada;

}



int main(){
    printf("===SOPA DE LETRINHAS===\n\n");

    char string1[102], string2[102];

    printf("Entre com a primeira string:\n");
    fgets(string1, 100, stdin);
    for(int i = 0; i < 80; i++){
        if(string1[i] == '\n'){
            string1[i] = '\0';
            break;
        }
    }
    printf("Entre com a segunda string:\n");
    fgets(string2, 100, stdin);
    for(int i = 0; i < 80; i++){
        if(string2[i] == '\n'){
            string2[i] = '\0';
            break;
        } 
    }

    char *letras_misturadas = misturar(string1, string2);

    printf("Texto misturado:\n%s", letras_misturadas);

    free(letras_misturadas);


    return 0;
}