#include "../include/biblioteca.h" 

int main(){

    int total_Livros = 0;
    int capacidade = 2; 
    int escolha;

    // Alocação inicial
    char(*titulo)[TAM_STRING] = malloc(capacidade * sizeof(*titulo));
    char(*autor)[TAM_STRING] = malloc(capacidade * sizeof(*autor));
    int *ano = malloc(capacidade * sizeof(int));
    int *disponibilidade = malloc(capacidade * sizeof(int));

    if(titulo == NULL || autor == NULL || ano == NULL || disponibilidade == NULL){
        printf("Erro fatal: Memoria insuficiente.\n");
        return 1; 
    }
    
    do{
        printf("\nTotal de livros: %d\n Capacidade atual: %d\n", total_Livros, capacidade);
        menuPrincipal();
        scanf("%d", &escolha);
        while(getchar() != '\n'); 

        switch(escolha)
        {
        case 1:
            cadastroLivros(&titulo, &autor, &ano, &disponibilidade, &total_Livros, &capacidade);
            break;
        case 2:
            listaLivros(titulo, autor, ano, disponibilidade, total_Livros);
            break;
        case 3:
            emprestimoLivros(titulo, autor, ano, disponibilidade, total_Livros);
            break;
        case 4:
            devolucaoLivros(titulo, disponibilidade, total_Livros);
            break;
        case 5: 
            ordenarLivros(titulo, autor, ano, disponibilidade, total_Livros);
            listaLivros(titulo, autor, ano, disponibilidade, total_Livros);
            break;
        case 6:
            buscarLivro(titulo, autor, ano, disponibilidade, total_Livros);
            break;
        case 0:
            printf(". . . Saindo . . .");
            break;
        default:
            printf("/OPCAO INVALIDA/\n");
        }

    }while(escolha != 0);

    // Liberação de memória
    free(titulo);
    free(autor);
    free(ano);
    free(disponibilidade);


    return 0;
}