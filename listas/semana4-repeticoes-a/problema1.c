#include <stdio.h>

int main()
{

    printf("===DOBRANDO ATE NAO PODER MAIS===\n\n");


    float larguraFolha, compFolha, compBolso;
    printf("Digite o comprimento da folha: ");
    scanf("%f", &compFolha);
    printf("Digite a largura da folha: ");
    scanf("%f", &larguraFolha);
    printf("Digite o comprimento do bolso: ");
    scanf("%f", &compBolso);



    int i = 0;
    while(compBolso <= compFolha && compBolso <= larguraFolha){
        
        if(larguraFolha >= compFolha){
            larguraFolha = larguraFolha/2.0;
            
        }else if(compFolha > larguraFolha){
            compFolha = compFolha/2.0;
        }
        i++;
    }

    printf("\nO numero de dobras para caber no bolso foi: %d", i);



    return 0;
}

/*Você está com o seguinte problema: precisa dobrar uma folha na metade algumas vezes para que caiba em seu
bolso. Crie um programa que leia o comprimeiro, a largura da folha e o comprimento do bolso (declare como
float). Deve, em seguida, calcular quantas vezes será necessário dobrar a folha para que caiba no bolso (um
dos lados da folha dobrada deve ser menor que o comprimento do bolso). Para facilitar a dobra, considere
que você sempre dobra a folha para reduzir o maior dos lados.

Por exemplo: a folha possui tamanho 30.0 por 20.0 e a largura do bolso é 8. Primeiro a folha é dobrada para
15 por 20 (pois 30 era o maior lado). Na segunda dobra, para 15 por 10 (pois 20 era o maior lado após a
primeira dobra). Na terceira dobra, para 7.5 por 10 e, então, a folha cabe no bolso pois um dos lados é menor
que 8. Portanto, o programa deve escrever 3 dobras.
*/