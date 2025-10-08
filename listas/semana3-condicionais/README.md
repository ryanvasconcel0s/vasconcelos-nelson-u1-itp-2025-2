# Introdução a Técnicas de Programação (2025.2) - Lista de Exercícios da Semana 3

## Estruturas Condicionais

Esta lista de exercícios foca no uso de estruturas condicionais (`if`, `else if`, `else`) para criar programas que tomam decisões com base em diferentes cenários e entradas do usuário.

### Problemas

1.  **Classificação de IMC**
    * Descrição: Modifica o programa anterior de IMC para classificar o resultado em "Abaixo do peso", "Peso normal", "Sobrepeso" ou "Obesidade".
    * Arquivo: `problema1.c`

2.  **Calculadora de Energia Elétrica**
    * Descrição: Calcula o valor da conta de energia com base no consumo em kWh e no tipo de consumidor (Residencial, Comercial ou Industrial).
    * Arquivo: `problema2.c`

3.  **Sistema de Notas**
    * Descrição: Calcula a média de três notas e determina se o aluno está aprovado, em recuperação ou reprovado. Caso esteja em recuperação, calcula a nota necessária na prova final.
    * Arquivo: `problema3.c`

4.  **Jogo: Pedra, Papel, Tesoura**
    * Descrição: Simula uma partida do jogo, lendo as jogadas de dois jogadores e determinando o vencedor.
    * Arquivo: `problema4.c`

5.  **Calculadora de Desconto Progressivo**
    * Descrição: Calcula o valor do desconto e o total a pagar com base no valor da compra, aplicando descontos progressivos.
    * Arquivo: `problema5.c`

6.  **Diagnóstico Médico Simples**
    * Descrição: Sugere um possível diagnóstico com base nas respostas (S/N) a uma série de perguntas sobre sintomas.
    * Arquivo: `problema6.c`

7.  **Sistema de Equações do 2º Grau**
    * Descrição: Resolve equações do segundo grau, calculando o discriminante (Δ) e determinando as raízes reais.
    * Arquivo: `problema7.c`

8.  **Validador de Triângulos**
    * Descrição: Lê os lados de um triângulo e verifica se podem formar um, classificando-o como equilátero, isósceles ou escaleno, e também quanto aos ângulos (retângulo, acutângulo ou obtusângulo).
    * Arquivo: `problema8.c`

### COMO COMPILAR E EXECUTAR ---------------------------------------------------------------------------------------

Para compilar os programas, utilize o GCC. 
Para problemas que possam necessitar de funções matemáticas (`problema7.c` e `problema8.c`), inclua a flag `-lm`.

```bash

### Compilar e executar Problemas 7 e 8
### (usam a biblioteca matemática -lm)


### Problema 7
gcc problema7.c -o problema7 -lm
./problema7

### Problema 8
gcc problema8.c -o problema8 -lm
./problema8

# =========================================
# Compilar e executar os demais problemas
# =========================================

# Exemplo: Problemas 1 a 6 (exceto 7 e 8)
gcc problema1.c -o problema1
./problema1

gcc problema2.c -o problema2
./problema2

gcc problema3.c -o problema3
./problema3

gcc problema4.c -o problema4
./problema4

gcc problema5.c -o problema5
./problema5

gcc problema6.c -o problema6
./problema6

