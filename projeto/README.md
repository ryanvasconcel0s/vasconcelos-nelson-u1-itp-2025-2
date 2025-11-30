# Projeto da Unidade 2: Sistema de Gerenciamento de Biblioteca (Versão Dinâmica)

**Disciplina:** Introdução a Técnicas de Programação (2025.2)
**Aluno:** Nelson Ryan Silva de Vasconcelos
**Matrícula:** 20250062976

---

## Descrição do Projeto

Este projeto consiste na evolução do Sistema de Gerenciamento de Biblioteca desenvolvido na Unidade 1. Trata-se de uma aplicação de console (CLI) desenvolvida em **Linguagem C (Padrão C99)** que permite o controle de um acervo de livros.

O foco principal desta versão é a **eficiência de memória e escalabilidade**. Diferente da versão anterior que possuía um limite fixo de cadastros, esta versão implementa **Alocação Dinâmica de Memória**. O sistema inicia com capacidade reduzida e expande automaticamente (via `realloc`) conforme novos livros são cadastrados, gerenciando os recursos do sistema operacional sob demanda.

O código foi refatorado para seguir uma **arquitetura modular**, separando a lógica de negócio, a interface e as definições em arquivos distintos.

## Funcionalidades Implementadas

O sistema oferece as seguintes operações através de um menu interativo:

* **1. Cadastro de Livros:** Adiciona títulos, autores e anos de lançamento. O sistema gerencia automaticamente a expansão da memória (`malloc`/`realloc`) quando a capacidade atual é excedida.
* **2. Listagem de Acervo:** Exibe todos os livros cadastrados com formatação tabular, mostrando ID, Título, Autor, Ano e Status.
* **3. Empréstimo:** Altera o status de um livro para "Indisponível" com base no seu ID.
* **4. Devolução:** Altera o status de um livro para "Disponível".
* **5. Ordenação (A-Z):** Organiza o acervo em ordem alfabética de título utilizando o algoritmo *Bubble Sort*, mantendo a integridade de todos os dados associados (autor, ano, status).
* **6. Busca Avançada:** Permite localizar livros pesquisando por partes do nome do Título ou do Autor (busca por substring).

## Requisitos Técnicos da Unidade 2

Este projeto atende aos requisitos obrigatórios da avaliação da Unidade 2 conforme listado abaixo:

* **Manipulação de Strings (`string.h`):**
    * Uso de `strlen` para limpeza de buffer de entrada.
    * Uso de `strcmp` para comparação na ordenação alfabética.
    * Uso de `strstr` para a funcionalidade de busca por termos.
    * Uso de `strcpy` para movimentação de dados.
* **Estruturas de Repetição Aninhadas:**
    * Implementação de loops aninhados (`for` dentro de `for`) no algoritmo de ordenação.
* **Matrizes e Vetores Dinâmicos:**
    * Uso de ponteiros para arrays (`char (*ptr)[TAM]`) simulando matrizes de texto alocadas na *Heap*.
* **Ponteiros e Alocação Dinâmica:**
    * Gerenciamento manual de memória com `malloc`, `realloc` e `free`.
    * Uso de **ponteiros duplos** (`**`) para passagem de referência em funções de realocação.
    * Verificação de falhas de alocação para evitar erros de execução.
* **Qualidade de Código:**
    * Ausência de *Memory Leaks* (liberação correta de memória).
    * Modularização em arquivos `.c` e `.h`.


## Ferramenta de Compilação e Execução

Este projeto utiliza múltiplos arquivos fontes. Para compilar, é necessário utilizar o **GCC**.
 
 
## Estrutura do Projeto
* O código está organizado da seguinte forma:

* projeto/
* ├── include/
* │   └── biblioteca.h    # Protótipos das funções e constantes
* └── src/
*     ├── main.c          # Fluxo principal, alocação inicial e menu
*     └── biblioteca.c    # Implementação lógica das funções** 

### Compilação e execução
Abra o terminal na raiz da pasta `projeto/` e execute o comando abaixo. A flag `-Wall` é recomendada para verificar warnings, e `-o` define o nome do executável.

```bash

# =============
# Compilar 
# =============

gcc main.c biblioteca.c -o sistema -Wall

# =========================================
# Executar no Windows
# =========================================

.\sistema.exe

# =========================================
# Executar no Linux
# =========================================

.\sistema.exe