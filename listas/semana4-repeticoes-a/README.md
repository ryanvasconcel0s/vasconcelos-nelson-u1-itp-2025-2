# Introdução a Técnicas de Programação (2025.2) - Lista de Exercícios da Semana 4 - Parte A

## Estruturas de Repetição Simples

Esta lista de exercícios se concentra na aplicação de **estruturas de repetição** para resolver problemas que envolvem processos iterativos.

### Problemas

1.  **Dobrando até não poder mais**
    * **Descrição:** Calcula o número de dobras necessárias em uma folha de papel para que uma de suas dimensões seja menor que a largura de um bolso, sempre dobrando o maior lado.
    * **Arquivo:** `problema1.c`

2.  **Salve o Homem-Aranha**
    * **Descrição:** Simula a trajetória do Homem-Aranha, verificando se ele consegue alcançar uma sequência de alvos com base no comprimento máximo de sua teia e na distância euclidiana.
    * **Arquivo:** `problema2.c`

3.  **Números Colegas**
    * **Descrição:** Determina se dois números inteiros são "colegas". Dois números A e B são colegas se a diferença entre a soma dos divisores próprios de A e o número B for no máximo 2, e vice-versa.
    * **Arquivo:** `problema3.c`

4.  **Jogo de Dardos**
    * **Descrição:** Calcula a pontuação total em um jogo de dardos após 10 lançamentos, considerando a distância do centro do alvo (0,0) e a proximidade com o lançamento anterior.
    * **Arquivo:** `problema4.c`

### COMO COMPILAR E EXECUTAR ---------------------------------------------------------------------------------------

Para compilar os programas, utilize o **GCC**.  
Para os problemas 2 e 4, que utilizam a distância euclidiana e, portanto, podem necessitar da função `sqrt()`, inclua a flag `-lm`.

```bash
# =========================================
# Compilar e executar Problemas 2 e 4
# (usam a biblioteca matemática -lm)
# =========================================

# Problema 2
gcc problema2.c -o problema2 -lm
./problema2

# Problema 4
gcc problema4.c -o problema4 -lm
./problema4

# =========================================
# Compilar e executar os demais problemas
# =========================================

# Problema 1
gcc problema1.c -o problema1
./problema1

# Problema 3
gcc problema3.c -o problema3
./problema3


