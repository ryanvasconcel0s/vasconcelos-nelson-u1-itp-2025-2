#include <stdio.h>

//Constante que define a quantidade maxima de livros
#define MAX_LIVROS 50

//Variaveis globais, comuns a todas as funcoes
char titulo[MAX_LIVROS][80];
char autor[MAX_LIVROS][80];
int ano[MAX_LIVROS];
int disponiblidade[MAX_LIVROS];
int total_Livros = 0;

//Prototipo das funcoes
void menuPrincipal();
void cadastroLivros();
void listaLivros();
void emprestimoLivros();
void devolucaoLivros();


int main(){

    int escolha; 
    
    do{
        printf("\nTotal de livros ate agora: %d\n", total_Livros);
        menuPrincipal();
        scanf("%d", &escolha);
        while(getchar() != '\n');  //limpa o buffer de entrada através da função getchar()
        
        switch (escolha)
        {
        case 1:
            cadastroLivros();
            break;
        case 2:
            listaLivros();
            break;
        case 3: 
            emprestimoLivros();
            break;
        case 4: 
            devolucaoLivros();
            break;
        case 0:
            printf(". . . Saindo do programa . . .");
            break;
        default: 
            printf("/OPCAO INVALIDA/\n\n");
            break;
        }

    }while(escolha != 0);


    return 0; 
}
//============================= FUNCOES DO SISTEMA =========================================================

void menuPrincipal(){
    printf("\n===SISTEMA DE BIBLIOTECA===\n\n");
    printf("1. Cadastro de livros\n");
    printf("2. Listar livros\n");
    printf("3. Emprestimo de livros\n");
    printf("4. Devolucao de livros\n");
    printf("0. Sair do programa\n");
    printf("\nDigite o numero correspondente a opcao desejada: ");

}


void cadastroLivros(){
    //Verificacao inicial para saber se a biblioteca esta cheia
    if(total_Livros >= MAX_LIVROS){
        printf("\nFALHA: A biblioteca se encontra cheia\n");
        return; 
    }

    printf("\n==== CADASTRO DE LIVROS ====\n\n");
    
    printf("Digite o titulo do livro: ");
    fgets(titulo[total_Livros], 80, stdin); 
    for(int i = 0; i < 80; i++){                
        if(titulo[total_Livros][i] == '\n'){
            titulo[total_Livros][i]  = '\0';
            break;
        }
        if(titulo[total_Livros][i] == '\0'){
            break;
        }
    }

    printf("Digite a autoria do livro: ");
    fgets(autor[total_Livros], 80, stdin);
    for(int i = 0; i < 80; i++){
        if(autor[total_Livros][i] == '\n'){
            autor[total_Livros][i] = '\0';
            break;
        }
        if(autor[total_Livros][i] == '\0'){
            break;
        }
    }
    
    printf("Digite o ano de lancamento: ");
    scanf("%d", &ano[total_Livros]);
    while (getchar() != '\n'); //limpa o buffer de caracteres

    disponiblidade[total_Livros] = 0;
    total_Livros++;

    printf("\nLivro cadastrado :)\n");

    printf("\n======================================\n");



}


void listaLivros(){
    if(total_Livros == 0){
        printf("\nNenhum livro foi cadastrado ainda\n");
        return;
    }

    printf("\n==== LISTA DE LIVROS DO SISTEMA(%.2d, %.2d) ====\n\n", total_Livros, MAX_LIVROS);

    for(int i = 0; i < total_Livros; i++){
        printf("Numeracao: %.2d\n", i);
        printf(" Titulo: %s\n", titulo[i]);
        printf(" Autor: %s\n", autor[i]);
        printf(" Ano: %d\n", ano[i]);
        
        if(disponiblidade[i] == 0){
            printf(" Situacao: Disponivel\n");
        }else{
            printf(" Situacao: Emprestado\n");         ;
        }
        
    }
    printf("\n================================\n");


}

void emprestimoLivros(){
    if(total_Livros == 0){
        printf("\nNao existem livros para serem emprestados no sistema\n");
    }

    listaLivros();
    printf("\n==== EMPRESTIMO DE LIVROS ====\n\n");

    int numeracaoLivro;
    printf("Digite a numeracao do livro, para solicitar o emprestimo: ");
    scanf("%d", &numeracaoLivro);
    while(getchar() != '\n');

    if(numeracaoLivro < 0 || numeracaoLivro > MAX_LIVROS){
        printf("\nFalha: Numeracao invalida\n");
    }else if(disponiblidade[numeracaoLivro] == 1){
        printf("\nFalha: Livro %.2d %s ja foi emprestado\n", numeracaoLivro, titulo[numeracaoLivro]);
    }else if(disponiblidade[numeracaoLivro] == 0){
        disponiblidade[numeracaoLivro] = 1;
        printf("\nSucesso: Livro %.2d %s foi emprestado\n", numeracaoLivro, titulo[numeracaoLivro]);
    }


    printf("\n=============================================\n");


}
void devolucaoLivros(){

    if(total_Livros == 0){
        printf("\nNao ha livros no sistemas para devolucao\n");
    }

    printf("\n==== DEVOLUCAO DE LIVROS ====\n\n");

    int numeracaoLivro;
    printf("Digite a numeracao do livro que deseja devolver: ");
    scanf("%d", &numeracaoLivro);
    while( getchar() != '\n');

    if(numeracaoLivro < 0 || numeracaoLivro >= MAX_LIVROS){
        printf("\nFalha: Numeracao invalida\n");
    }else if(disponiblidade[numeracaoLivro] == 0){
        printf("\nFalha: Livro %.2d %s nao foi emprestado\n", numeracaoLivro, titulo[numeracaoLivro]);
    }else if(disponiblidade[numeracaoLivro] == 1){
        disponiblidade[numeracaoLivro] = 0;
        printf("\nSucesso: Livro %.2d %s foi devolvido\n", numeracaoLivro, titulo[numeracaoLivro]);
    }

    printf("\n==============================================\n");

}