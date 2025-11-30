#include "../include/biblioteca.h" 

void menuPrincipal(){
    printf("\n===SISTEMA DE BIBLIOTECA===\n\n");
    printf("1. Cadastro de livros\n");
    printf("2. Listar livros\n");
    printf("3. Emprestimo de livros\n");
    printf("4. Devolucao de livros\n");
    printf("5. Ordenacao dos livros em ordem alfabetica\n");
    printf("6. Buscar livro (Titulo/Autor)\n");
    printf("0. Sair do programa\n");
    printf("\nDigite o numero correspondente a opcao desejada: ");
}

void cadastroLivros(char (**titulo)[TAM_STRING], char (**autor)[TAM_STRING], 
int **ano, int **disponibilidade, int *total_Livros, int *capacidade){
    
    // Verificacao e Realocação
    if(*total_Livros >= *capacidade){ 
        int nova_capacidade = (*capacidade) * 2;

        char(*novo_titulo)[TAM_STRING] = realloc(*titulo, nova_capacidade * sizeof(*novo_titulo));
        char(*novo_autor)[TAM_STRING] = realloc(*autor, nova_capacidade * sizeof(*novo_autor));
        int *novo_ano = realloc(*ano, nova_capacidade * sizeof(int));
        int *nova_disp = realloc(*disponibilidade, nova_capacidade * sizeof(int));

        if (novo_titulo && novo_autor && novo_ano && nova_disp){
            *titulo = novo_titulo;
            *autor = novo_autor;
            *ano = novo_ano;
            *disponibilidade = nova_disp;
            *capacidade = nova_capacidade;
            printf("Memoria expandida para %d livros.\n", *capacidade);
        } else {
            printf("ERRO: Falha ao expandir a memoria.\n");
            return;
        }
    }

    printf("\n===CADASTRO DE LIVROS===\n\n");

    printf("Digite o titulo do livro: ");
    fgets((*titulo)[*total_Livros], TAM_STRING, stdin);
    size_t tamanho = strlen((*titulo)[*total_Livros]); 
    if(tamanho > 0 && (*titulo)[*total_Livros][tamanho - 1] == '\n'){ //indicar o final da string
        (*titulo)[*total_Livros][tamanho - 1] = '\0';
    }

    printf("Digite o autor do livro: ");
    fgets((*autor)[*total_Livros], TAM_STRING, stdin);
    tamanho = strlen((*autor)[*total_Livros]);
    if(tamanho > 0 && (*autor)[*total_Livros][tamanho -1] == '\n'){
        (*autor)[*total_Livros][tamanho - 1] = '\0';
    }

    printf("Digite o ano de lancamento: ");
    scanf("%d", &(*ano)[*total_Livros]);
    while(getchar() != '\n');

    (*disponibilidade)[*total_Livros] = 0;
    (*total_Livros)++;

    printf("\nLivro cadastrado com sucesso! :)\n");
    printf("\n======================================\n");
}

void listaLivros(char (*titulo)[TAM_STRING], char (*autor)[TAM_STRING], int *ano, int *disponibilidade, int total_Livros){
    if(total_Livros == 0){
        printf("\nNenhum livro foi cadastrado ainda\n");
        return;
    }
    printf("\n===LISTA DE LIVROS DO SISTEMA===\n\n");
    for(int i = 0; i < total_Livros; i++){
        printf("Numeracao: %.2d\n", i);
        printf(" Titulo: %s\n", titulo[i]);
        printf(" Autor: %s\n", autor[i]);
        printf(" Ano: %d\n", ano[i]);
        if(disponibilidade[i] == 0){
            printf(" Situacao: Disponivel\n");
        } else {
            printf(" Situacao: Indisponivel\n");
        }
        printf("--------------------------------\n");
    }
    printf("======================================\n");
}

void emprestimoLivros(char(*titulo)[TAM_STRING], char (*autor)[TAM_STRING], int *ano, int *disponibilidade, int total_Livros){
    if(total_Livros == 0){
        printf("\nNao existem livros para serem emprestados\n");
        return;
    }
    listaLivros(titulo, autor, ano, disponibilidade, total_Livros);
    printf("\n==== EMPRESTIMO DE LIVROS ====\n\n");
    int numeroLivro;
    printf("Digite a numeracao do livro: ");
    scanf("%d", &numeroLivro);
    while(getchar() != '\n');

    if(numeroLivro < 0 || numeroLivro >= total_Livros){
        printf("\nFalha: Numeracao invalida\n");
    }else if(disponibilidade[numeroLivro] == 1){
        printf("\nFalha: Livro ja foi emprestado\n");
    }else{
        disponibilidade[numeroLivro] = 1;
        printf("\nSucesso: Livro emprestado\n");
    }
    printf("\n=============================================\n");
}

void devolucaoLivros(char (*titulo)[TAM_STRING], int *disponibilidade, int total_Livros){
    if(total_Livros == 0){
        printf("\nNao existem livros para serem devolvidos\n");
        return;
    }
    int numeroLivro;
    printf("Digite a numeracao do livro: ");
    scanf("%d", &numeroLivro);
    while( getchar() != '\n');

    if(numeroLivro < 0 || numeroLivro >= total_Livros){
        printf("\nFalha: Numeracao invalida\n");
    }else if(disponibilidade[numeroLivro] == 0){
        printf("\nFalha: Livro nao estava emprestado\n");
    }else{
        disponibilidade[numeroLivro] = 0;
        printf("\nSucesso: Livro devolvido\n");
    }
    printf("\n==============================================\n");
}

void ordenarLivros(char (*titulo)[TAM_STRING], char (*autor)[TAM_STRING], int *ano, int *disponibilidade, int total_Livros){
    if (total_Livros < 2) return;
    printf("\n. . . Organizando livros em ordem alfabetica . . .\n");
    for(int i = 0; i < total_Livros - 1; i++){
        for(int j = 0; j < total_Livros - i - 1; j++){
            if(strcmp(titulo[j], titulo[j+1]) > 0){
                char stringTemporaria[TAM_STRING];
                int inteiroTemporario;

                strcpy(stringTemporaria, titulo[j]);
                strcpy(titulo[j], titulo[j+1]);
                strcpy(titulo[j+1], stringTemporaria);

                strcpy(stringTemporaria, autor[j]);
                strcpy(autor[j], autor[j+1]);
                strcpy(autor[j+1], stringTemporaria);

                inteiroTemporario = ano[j];
                ano[j] = ano[j+1];
                ano[j+1] = inteiroTemporario;

                inteiroTemporario = disponibilidade[j];
                disponibilidade[j] = disponibilidade[j+1];
                disponibilidade[j+1] = inteiroTemporario;
            }
        }
    }
    printf("\nOrdenacao realizada com sucesso!\n");
}

void buscarLivro(char (*titulo)[TAM_STRING], char (*autor)[TAM_STRING], int *ano, int *disponibilidade, int total_Livros) {
    
    if (total_Livros == 0) {
        printf("\nNenhum livro cadastrado para busca.\n");
        return;
    }

    char termo[TAM_STRING];
    int encontrados = 0;

    printf("\n==== BUSCA DE LIVROS ====\n");
    printf("Digite o titulo ou autor: ");
    fgets(termo, TAM_STRING, stdin);

    size_t tamanho = strlen(termo);
    if (tamanho > 0 && termo[tamanho - 1] == '\n') {
        termo[tamanho - 1] = '\0';
    }

    printf("\nResultados para '%s':\n\n", termo);

    for (int i = 0; i < total_Livros; i++) {
        if (strstr(titulo[i], termo) != NULL || strstr(autor[i], termo) != NULL) {
            printf("Numeracao: %.2d\n", i);
            printf(" Titulo: %s\n", titulo[i]);
            printf(" Autor: %s\n", autor[i]);
            printf(" Ano: %d\n", ano[i]);
            if(disponibilidade[i] == 0){
                printf(" Situacao: Disponivel\n");
            } else {
                printf(" Situacao: Indisponivel\n");
            }
            printf("---------------------------\n");
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum livro encontrado.\n");
    } else {
        printf("Total encontrados: %d\n", encontrados);
    }
    printf("=========================\n");
}