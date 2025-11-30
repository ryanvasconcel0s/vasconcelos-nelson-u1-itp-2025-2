# Introdução a Técnicas de Programação (2025.2) - Lista de Exercícios da Semana 9

## Matrizes

Esta lista de exercícios introduz o conceito de **matrizes (arrays bidimensionais)**, focando em navegação por índices de linha e coluna, vizinhança e representação de dados tabulares.

### Problemas

1.  **Campo Agrícola**
    * Descrição: Analisa a irrigação em um campo representado por uma matriz.
      Identifica setores férteis, inférteis e irrigadores. O programa calcula quantos setores férteis são atingidos por pelo menos um irrigador (vizinhança 4: norte, sul, leste, oeste).
    * Arquivo: `problema1.c`

2.  **Sugestão de Amigos** 
    * Descrição: Implementa um algoritmo de recomendação para redes sociais usando matriz de adjacência.
      Sugere um amigo B para um usuário A se eles não forem amigos diretos, mas possuírem pelo menos um amigo em comum.
    * Arquivo: `problema2.c`

3.  **Campeonato de Empates** 
    * Descrição: Processa uma matriz de resultados de futebol.
      O programa deve contabilizar quantas partidas terminaram empatadas.
    * Arquivo: `problema3.c`

4.  **Uma Pechincha!** 
    * Descrição: Busca o menor custo de viagem entre duas cidades usando uma matriz de custos.
      Calcula a rota mais barata de X para Z, permitindo no máximo uma cidade intermediária (escala).
    * Arquivo: `problema4.c`

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

# Problema 4
gcc problema4.c -o problema4
./problema4