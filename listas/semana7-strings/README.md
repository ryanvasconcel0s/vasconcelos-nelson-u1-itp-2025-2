# Introdução a Técnicas de Programação (2025.2) - Lista de Exercícios da Semana 7

## Strings

Esta lista de exercícios foca na manipulação de **strings** (cadeias de caracteres), abordando leitura, comparação, identificação de padrões e extração de informações em textos.

### Problemas

1.  **Campo Minado 1D**
    * Descrição: Lê uma string composta por '.' (espaço vazio) e 'x' (bomba) e um índice.
      O programa deve verificar se o índice contém uma bomba ("bum!") ou informar quantas bombas existem nas posições adjacentes (imediata esquerda e direita).
    * Arquivo: `problema1.c`

2.  **Detecção de Placas**
    * Descrição: Identifica o padrão de uma placa de carro.
      O programa recebe uma string e deve classificar se ela pertence ao padrão "brasileiro" (LLL-AAAA), "mercosul" (LLLALAA) ou se é "inválido".
    * Arquivo: `problema2.c`

3.  **OpenMeet - Relatório de Presença**
    * Descrição: Auxilia na contagem de faltas de alunos em aulas remotas.
      O programa lê o nome de um aluno alvo e uma string longa contendo registros de datas e presenças. Deve processar o texto e informar o número de ausências do aluno especificado.
    * Arquivo: `problema3.c`

### COMO COMPILAR E EXECUTAR ---------------------------------------------------------------------------------------

Para compilar os programas, utilize o **GCC**.

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