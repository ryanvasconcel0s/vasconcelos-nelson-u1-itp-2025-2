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


**Problemas 2 e 4**
gcc problemaX.c -o problemaX -lm
./problemaX

**Demais problemas:**
gcc problemaX.c -o problemaX
./problemaX

Trocar indice 'X' pela numeração do problema.