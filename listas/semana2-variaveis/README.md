# Introdução a Técnicas de Programação (2025.2) - Lista de Exercícios da Semana 2

## Variáveis, Tipos e Operadores

Esta lista de exercícios aborda conceitos como a declaração de variáveis, a utilização de diferentes tipos de dados e a aplicação de operadores aritméticos para resolver problemas práticos.

### Problemas

1. **Calculadora de IMC**

    * Descrição: Lê o peso (em kg) e a altura (em metros) de uma pessoa, calcula e exibe o Índice de Massa Corporal (IMC) com 2 casas decimais.
    * Arquivo: problema1.c

2. **Conversão de Temperatura**

    * Descrição: Lê uma temperatura em graus Celsius e a converte para Fahrenheit e Kelvin, exibindo os resultados com 2 casas decimal.
    * Arquivo: problema2.c

3. **Cálculo de Juros Compostos**

    * Descrição: Lê o capital inicial, a taxa de juros e o tempo, e calcula o montante final utilizando a fórmula de juros compostos.
    * Observação: Requer a biblioteca math.h.
    * Arquivo: problema3.c

4. **Operações Aritméticas Básicas**

    * Descrição: Lê dois números inteiros e realiza as operações de soma, diferença, produto, divisão real, resto da divisão e média aritmética.
    * Arquivo: problema4.c

### COMO COMPILAR E EXECUTAR ---------------------------------------------------------------------------------------

Para compilar os programas, utilize o compilador GCC.
No caso do problema3.c, é necessário incluir a flag -lm para a biblioteca matemática.
```bash
### Problema 1
gcc problema1.c -o problema1
./problema1

### Problema 2
gcc problema2.c -o problema2
./problema2

### Problema 3 (usa biblioteca matemática)
gcc problema3.c -o problema3 -lm
./problema3

### Problema 4
gcc problema4.c -o problema4
./problema4