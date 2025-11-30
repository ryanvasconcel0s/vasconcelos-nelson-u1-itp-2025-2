# Introdução a Técnicas de Programação (2025.2) - Lista de Exercícios da Semana 10

## Ponteiros e Alocação Dinâmica

Esta lista de exercícios avança para o gerenciamento manual de memória, utilizando **ponteiros** e funções de **alocação dinâmica** (`malloc`, `free`) para criar estruturas de dados flexíveis.

### Problemas

1.  **Soma de Vetores**
    * Descrição: Realiza a soma de dois vetores alocados dinamicamente.
      O programa lê o tamanho e os elementos de dois vetores, verifica a compatibilidade das dimensões e gera um terceiro vetor com a soma.
    * Arquivo: `problema1.c`

2.  **Ocorrências no Vetor**
    * Descrição: Implementa uma função de busca que retorna múltiplos valores usando ponteiros.
      A função deve retornar um vetor alocado dinamicamente contendo os índices onde um valor ocorre, além de retornar indiretamente a quantidade de ocorrências via parâmetro por referência.
    * Arquivo: `problema2.c`

3.  **Sopa de Letrinhas**
    * Descrição: Manipulação de strings com memória dinâmica.
      Implementa a função `misturar` que recebe duas strings e retorna uma nova string (alocada dinamicamente) contendo as letras das duas originais intercaladas.
    * Arquivo: `problema3.c`

### COMO COMPILAR E EXECUTAR ---------------------------------------------------------------------------------------

Para compilar os programas, utilize o **GCC**. Recomenda-se o uso de ferramentas como o Valgrind (no Linux) para verificar vazamentos de memória, já que esta lista envolve alocação manual.

```bash
# =========================================
# Compilar e executar os problemas
# =========================================

# Problema 1
gcc problema1.c -o problema1
./problema1

# Problema 2
gcc problema2.c -o problema2
./problema2

# Problema 3
gcc problema3.c -o problema3
./problema3