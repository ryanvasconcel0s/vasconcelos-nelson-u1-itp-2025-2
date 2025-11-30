#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char nome_busca[11];
    char entrada[1001];
    int i, l, j, presencas, total_dias;

    fgets(entrada, 1000, stdin);

    l = strlen(entrada);

    if (entrada[l - 1] == '\n') {
        entrada[l - 1] = '\0';
        l--;
    }

    for (i = 0, j = 0; (i < l) && (j < 10) && (entrada[i] != ' '); i++, j++) {
        nome_busca[j] = entrada[i];
    }
    nome_busca[j] = '\0';

    presencas = 0;
    total_dias = 0;
    i = i + 1;
    while (i < l) {
        if ((entrada[i] >= '0') && (entrada[i] <= '9')) {
            total_dias++;
            while ((i < l) && (entrada[i] != ' ')) {
                i++;
            }
        } else if (entrada[i] == ' ') {
            i++;
            continue;
        } else {
  
            int encontrou = 1;
            for (j = 0; ((i + j) < l) && (nome_busca[j] != '\0') && (encontrou); j++) {
                if (entrada[i + j] != nome_busca[j]) {
                    encontrou = 0;
                }
            }

            if ( (nome_busca[j] == '\0') && ((i + j == l) || (entrada[i + j] == ' ')) && (encontrou)) {
                presencas++;
            } 

            while ((i < l) && (entrada[i] != ' ')) {
                i++;
            }
        }
    }


    printf("%d\n", total_dias - presencas);

    return 0;
}