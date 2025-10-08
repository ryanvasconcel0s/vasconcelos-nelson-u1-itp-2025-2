# Introdução a Técnicas de Programação (2025.2) - Lista de Exercícios da Semana 4 - Parte B

## Análise de Código e Padrões com Estruturas de Repetição

Esta parte da lista foca na análise de algoritmos com laços aninhados e na implementação de programas que geram padrões numéricos e resolvem problemas lógicos mais complexos.

### Questões de Análise (questoes1-4.txt)

* **Descrição:** Análise de trechos de código com `for` aninhados para prever a saída sem executar o programa.  
  Lembrar de colocar os arquivos txt

### Questões de Implementação (questoes5-11.c)

5.  **Padrão Numérico Triangular**
    * Descrição: Lê um número `n` e imprime um padrão de números triangulares com `n` linhas.  
    * Arquivo: `questao5.c`

6.  **Trios Pitagóricos**
    * Descrição: Encontra e exibe todos os trios pitagóricos `(a, b, c)` onde `a^2 + b^2 = c^2` e o maior número é menor que 1000.  
    * Arquivo: `questao6.c`

7.  **Números Primos em Intervalo**
    * Descrição: Lê dois inteiros `a` e `b` (com `a > b`) e imprime todos os números primos nesse intervalo.  
    * Arquivo: `questao7.c`

8.  **Compra de Placas de Alumínio**
    * Descrição: Calcula o dinheiro restante para todas as combinações possíveis de compra de placas de dois fornecedores, dado um orçamento e um limite de 10 unidades por fornecedor.  
    * Arquivo: `questao8.c`

9.  **Modificação da Questão 8**
    * Descrição: Modifica o programa anterior para exibir a combinação de compra que resulta no menor valor restante de dinheiro.  
    * Arquivo: `questao9.c`

10. **Pacote Promocional**
    * Descrição: Determina a melhor promoção "leve X, pague Y" (com X > Y e X ≤ 10) que maximiza a razão X/Y sem causar prejuízo para a empresa.  
    * Arquivo: `questao10.c`

11. **Problema das 4 Rainhas**
    * Descrição: Encontra e exibe todas as maneiras de posicionar 4 rainhas em um tabuleiro 4x4 sem que nenhuma ataque a outra.  
    * Arquivo: `questao11.c`

### COMO COMPILAR E EXECUTAR ---------------------------------------------------------------------------------------

Para compilar os programas, utilize o GCC.  
Para a questão 6, que envolve potenciação, pode ser necessário incluir a flag `-lm`.

# Problema 6
gcc problema6.c -o problema6 -lm
./problema6

# =========================================
# Compilar e executar os demais problemas
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

# Problema 4
gcc problema4.c -o problema4
./problema4

# Problema 5
gcc problema5.c -o problema5
./problema5

# Problema 7
gcc problema7.c -o problema7
./problema7

# Problema 8
gcc problema8.c -o problema8
./problema8

# Problema 9
gcc problema9.c -o problema9
./problema9

# Problema 10
gcc problema10.c -o problema10
./problema10

# Problema 11
gcc problema11.c -o problema11
./problema11
