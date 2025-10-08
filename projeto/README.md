# Projeto da Unidade 1: Sistema de Gerenciamento de Biblioteca

Este diretório contém o código-fonte e a documentação do projeto "Sistema de Gerenciamento de Biblioteca", desenvolvido para a disciplina de Introdução a Técnicas de Programação (2025.2).

## Descrição

O programa é uma aplicação de console (CLI) escrita em linguagem C que simula as operações básicas de uma biblioteca. Ele permite ao usuário gerenciar um acervo de livros, controlando o registo de novas obras e o seu estado de disponibilidade (disponível ou emprestado).

Os dados são armazenados em memória através de vetores paralelos e são perdidos quando o programa é encerrado.

## Funcionalidades

O sistema implementa as seguintes funcionalidades, cada uma modularizada na sua própria função:

- **`cadastroLivros()`**: Adiciona um novo livro (título, autor, ano) ao acervo.
- **`listaLivros()`**: Exibe na tela todos os livros registados, juntamente com um ID e o seu estado de disponibilidade.
- **`emprestimoLivros()`**: Permite ao utilizador marcar um livro como "emprestado" com base no seu ID.
- **`devolucaoLivros()`**: Permite ao utilizador marcar um livro como "disponível" com base no seu ID.
- **`menuPrincipal()`**: Apresenta a interface principal ao utilizador, permitindo que ele escolha qual ação deseja realizar.

## Como Compilar e Executar

Para compilar o projeto, utilize o compilador GCC. Certifique-se de que está neste diretório (`projeto/src`) e execute o seguinte comando no seu terminal:

gcc main.c -o main
./main

