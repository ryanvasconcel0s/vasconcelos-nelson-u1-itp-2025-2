# Introdução a Técnicas de Programação (2025.2) - Lista de Exercícios da Semana 8

## Repetições Aninhadas

Esta lista de exercícios pratica o uso de **laços de repetição aninhados** (loops dentro de loops), essenciais para algoritmos de ordenação, comparação de conjuntos e processamento de dados complexos.

### Problemas

1.  **Estou com Sorte (ou não)** 
    * Descrição: Simula a conferência de jogos de loteria (como Mega-sena ou Lotomania).
      O programa lê os números sorteados e os números apostados (de tamanhos variados) e calcula quantos acertos o jogador obteve.
    * Arquivo: `problema1.c`

2.  **Os Dias Mais Chuvosos** 
    * Descrição: Realiza a ordenação de dados climáticos.
      Lê a quantidade de chuva dos 12 meses do ano e gera um ranking ordenado do mês mais chuvoso para o menos chuvoso.
    * Arquivo: `problema2.c`

3.  **Esse Sim é Piloto** 
    * Descrição: Analisa o desempenho de pilotos em uma corrida de Fórmula 1.
      Lê a ordem de largada e a ordem de chegada de $N$ pilotos e identifica qual piloto ganhou o maior número de posições.
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