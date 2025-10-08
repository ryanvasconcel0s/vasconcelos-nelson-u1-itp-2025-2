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

**Problemas 6**
gcc problema6.c -o problema6 - lm
./problema6

**Demais problemas**
gcc problemaX.c -o  problemaX 
./problemaX

Trocar indice 'X' pela numeração do problema.
