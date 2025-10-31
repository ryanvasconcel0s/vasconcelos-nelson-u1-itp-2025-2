#include <stdio.h>

int main()
{
    char campoMinado[] = "..xx..x..x..x.x...x.";
    int jogada;
    printf("Digite um numero de 0 a 19 para selecionar um posiçao do campo minado: ");
    scanf("%d", &jogada);
    
    int verificacao = 0;
    
    if(campoMinado[jogada] == 'x'){
        printf("BUMM");
    }
    else if(jogada == 0 && campoMinado[jogada+1] == 'x'){
        verificacao = 1;
    }
    else if(jogada == 0 && campoMinado[jogada+1] == '.'){
        verificacao = 0;
    }
    else if(jogada == 19 && campoMinado[jogada-1] == 'x'){
        verificacao = 1;
    }
    else if(jogada == 19 && campoMinado[jogada-1] == '.'){
        verificacao = 0;
    }
    else if(campoMinado[jogada+1] == 'x' && campoMinado[jogada-1] == 'x'){
        verificacao = 2; 
    }
    else if((campoMinado[jogada+1] == 'x' || campoMinado[jogada-1] == 'x') &&
    (campoMinado[jogada+1] == '.' || campoMinado[jogada-1] == '.')){
        verificacao = 1;
    }
    else if(campoMinado[jogada+1] == '.' && campoMinado[jogada-1] == '.'){
        verificacao = 0;
    }
    
    if(campoMinado[jogada] != 'x'){
        printf("Bombas nas adjacencias: %d", verificacao);
    }
    
    
    return 0;
    
}