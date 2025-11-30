#ifndef BIBLIOTECA_H 
#define BIBLIOTECA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAM_STRING 80

// === PROTÓTIPOS DAS FUNÇÕES ===

void menuPrincipal();

void cadastroLivros(char (**titulo)[TAM_STRING], char (**autor)[TAM_STRING], 
                    int **ano, int **disponibilidade, int *total_Livros, int *capacidade);

void listaLivros(char (*titulo)[TAM_STRING], char (*autor)[TAM_STRING], 
                 int *ano, int *disponibilidade, int total_Livros);

void emprestimoLivros(char (*titulo)[TAM_STRING], char (*autor)[TAM_STRING], 
                      int *ano, int *disponibilidade, int total_Livros);

void devolucaoLivros(char (*titulo)[TAM_STRING], int *disponibilidade, int total_Livros);

void ordenarLivros(char (*titulo)[TAM_STRING], char (*autor)[TAM_STRING], 
                   int *ano, int *disponibilidade, int total_Livros);

void buscarLivro(char (*titulo)[TAM_STRING], char (*autor)[TAM_STRING], 
                 int *ano, int *disponibilidade, int total_Livros);

#endif