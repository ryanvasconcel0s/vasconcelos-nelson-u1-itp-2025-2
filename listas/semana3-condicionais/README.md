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

**Problema 7 e 8**
gcc problemaX.c -o  problemaX -lm
./problemaX

**Demais problemas:**
gcc problemaX.c -o problemaX
./problemaX

Trocar indice 'X' pela numeração do problema.

