#include <stdio.h>

int main() {

    printf("PROBLEMA 4 RAINHAS===\n\n");



    int c1, c2, c3, c4; // colunas das rainhas
    int contador = 0;

    for (c1 = 0; c1 < 4; c1++) {
        for (c2 = 0; c2 < 4; c2++) {
            for (c3 = 0; c3 < 4; c3++) {
                for (c4 = 0; c4 < 4; c4++) {

                    // mesma coluna
                    if (c1 == c2 || c1 == c3 || c1 == c4 ||
                        c2 == c3 || c2 == c4 ||
                        c3 == c4) continue;

                    // diagonais (linha é fixa: 0,1,2,3)
                    if ((c1 - c2 == 1) || (c1 - c2 == -1)) continue; // linha 0 vs 1
                    if ((c1 - c3 == 2) || (c1 - c3 == -2)) continue; // linha 0 vs 2
                    if ((c1 - c4 == 3) || (c1 - c4 == -3)) continue; // linha 0 vs 3
                    if ((c2 - c3 == 1) || (c2 - c3 == -1)) continue; // linha 1 vs 2
                    if ((c2 - c4 == 2) || (c2 - c4 == -2)) continue; // linha 1 vs 3
                    if ((c3 - c4 == 1) || (c3 - c4 == -1)) continue; // linha 2 vs 3

                    contador++;
                }
            }
        }
    }

    printf("Numero total de solucoes distintas: %d\n", contador);
    return 0;
}
