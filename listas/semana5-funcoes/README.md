# Introdução a Técnicas de Programação (2025.2) - Lista de Exercícios da Semana 5

## Funções - Parte 1

Esta lista de exercícios introduz o conceito de **funções**, incentivando a **modularização do código** para resolver problemas de forma mais organizada e reutilizável.

### Problemas

1.  **Horários das Rondas**
    * Descrição: Calcula e exibe uma lista de horários de rondas policiais em formatos de 24h ou 12h.  
      O programa deve implementar uma função para formatar e imprimir os horários corretamente.  
    * Arquivo: `problema1.c`

2.  **Primos Triplos**
    * Descrição: Encontra e exibe todos os trios de números primos na forma `(x, x+2, x+6)` até 50.000.  
      É obrigatório o uso de uma função para verificar se um número é primo.  
    * Arquivo: `problema2.c`

3.  **Pousando a Sonda Espacial**
    * Descrição: Verifica a segurança de um local de pouso para uma sonda, com base em uma função de altura `f(x,y)=sin(cos(y)+x)+cos(y+sin(x))`.  
      Exige a implementação de pelo menos duas funções: uma para calcular a altura e outra para verificar a segurança do pouso.  
    * Arquivo: `problema3.c`


### COMO COMPILAR E EXECUTAR ---------------------------------------------------------------------------------------

Para compilar os programas, utilize o GCC 
O Problema 3 requer a biblioteca `math.h`, então a flag `-lm` é obrigatória.

# =========================================
# Compilar e executar Problemas 1 e 2
# =========================================

# Problema 1
gcc problema1.c -o problema1
./problema1

# Problema 2
gcc problema2.c -o problema2
./problema2

# =========================================
# Compilar e executar Problema 3
# (usa biblioteca matemática -lm)
# =========================================

gcc problema3.c -o problema3 -lm
./problema3
