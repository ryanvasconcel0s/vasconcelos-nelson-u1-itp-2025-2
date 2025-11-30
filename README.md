# Introdução a Técnicas de Programação - 2025.2

**Aluno:** Nelson Ryan Silva de Vasconcelos  
**Matrícula:** 20250062976

---

## Estrutura do Repositório

Este repositório documenta minha evolução na disciplina, contendo desde exercícios básicos até projetos complexos de gerenciamento de memória.

- `projeto/`: Código-fonte do Sistema de Biblioteca (agora modularizado em `src/` e `include/`).
- `listas/`: Soluções para as listas de exercícios semanais (Semanas 2 a 10).
- `relatorios/`: Relatórios técnicos das Unidades 1 e 2.
- `videos/`: Links para os vídeos de demonstração.
- `README.md`: Este arquivo de apresentação.

---

## Projeto: Sistema de Gerenciamento de Biblioteca (Versão Dinâmica)

**Descrição:** O projeto evoluiu de um sistema estático para uma aplicação robusta com **alocação dinâmica de memória**. O sistema gerencia um acervo de livros sem limites pré-fixados, expandindo sua capacidade automaticamente conforme a necessidade. Além disso, conta com funcionalidades avançadas de busca e ordenação.

**Repositório:** https://github.com/ryanvasconcel0s/vasconcelos-nelson-u1-itp-2025-2.git

---

### Funcionalidades Implementadas (U2)

- **Cadastro Dinâmico (`cadastroLivros`)**: Adiciona livros expandindo a memória (*Heap*) automaticamente via `realloc`.
- **Listagem (`listaLivros`)**: Exibe o acervo com formatação tabular.
- **Busca (`buscarLivro`)**: [NOVO] Localiza livros por trechos do título ou autor (substrings).
- **Ordenação (`ordenarLivros`)**: [NOVO] Organiza o acervo alfabeticamente (A-Z) usando *Bubble Sort*.
- **Empréstimo/Devolução**: Gerencia o status de disponibilidade dos livros.
- **Menu Modular**: Interface de controle limpa e modularizada.

---

### Conceitos Aplicados (Foco na Unidade 2)

- **Alocação Dinâmica:** Uso de `malloc` e `realloc` para criar estruturas de dados escaláveis, superando as limitações de vetores estáticos da Unidade 1.
- **Ponteiros e Ponteiros Duplos:** Utilizados para manipulação direta de memória e passagem por referência para atualização de variáveis na `main`.
- **Manipulação de Strings:** Uso profissional da biblioteca `<string.h>` (`strstr`, `strcmp`, `strlen`) para busca e ordenação.
- **Modularização:** O código foi separado em arquivos de cabeçalho (`.h`) e implementação (`.c`), facilitando a manutenção.
- **Estruturas Aninhadas:** Uso de loops dentro de loops para algoritmos de ordenação.

---

## Listas de Exercícios

## Listas de Exercícios

### Semana 2 - Variáveis, Tipos e Operadores
- [ok] Problema 1: Calculadora de IMC  
- [ok] Problema 2: Conversão de temperatura  
- [ok] Problema 3: Cálculo de juros compostos  
- [ok] Problema 4: Operações aritméticas básicas  

### Semana 3 - Condicionais
- [ok] Problema 1: Classificação de IMC  
- [ok] Problema 2: Calculadora de energia elétrica  
- [ok] Problema 3: Sistema de notas  
- [ok] Problema 4: Pedra, papel, tesoura  
- [ok] Problema 5: Calculadora de desconto progressivo  
- [ok] Problema 6: Diagnóstico médico simples  
- [ok] Problema 7: Sistema de equações do 2º grau  
- [ok] Problema 8: Validador de triângulos  

### Semana 4A - Repetições
- [ok] Problema 1: Dobrar folha  
- [ok] Problema 2: Homem-Aranha  
- [ok] Problema 3: Números colegas  
- [ok] Problema 4: Jogo de dardos  

### Semana 4B - Análise e Padrões
- [ok] Questões 1-4: Análise de código  
- [ok] Questões 5-11: Implementações  

### Semana 5 - Funções (Parte 1)
- [ok] Problema 1: Horários das rondas  
- [ok] Problema 2: Primos triplos  
- [ok] Problema 3: Pousando a sonda espacial  

### Semana 6 - Vetores
- [ok] Problema 1: MEC Correção ENEM  
- [ok] Problema 2: Álbum de figurinhas  
- [ok] Problema 3: A construção da ponte  
- [ok] Problema 4: Em busca do tesouro perdido  

### Semana 7 - Strings:
  - [ok] Problema 1: Campo Minado 1D
  - [ok] Problema 2: Detecção de Placas (Mercosul/BR)
  - [ok] Problema 3: Relatório de Presença (OpenMeet)

### Semana 8 - Repetições Aninhadas:
  - [ok] Problema 1: Loteria (Estou com sorte)
  - [ok] Problema 2: Ranking de Chuva (Ordenação)
  - [ok] Problema 3: Fórmula 1 (Ganho de posições)

### Semana 9 - Matrizes:
  - [ok] Problema 1: Campo Agrícola (Irrigação)
  - [ok] Problema 2: Sugestão de Amigos (Rede Social)
  - [ok] Problema 3: Campeonato de Futebol
  - [ok] Problema 4: Menor Custo de Viagem
  
### Semana 10 - Ponteiros e Alocação:
  - [ok] Problema 1: Soma de Vetores Dinâmicos
  - [ok] Problema 2: Busca de Ocorrências com Ponteiros
  - [ok] Problema 3: Sopa de Letrinhas (Mistura de Strings)

---

## Principais Aprendizados e Evolução

A transição da Unidade 1 para a Unidade 2 foi desafiadora. O principal aprendizado foi compreender a **aritmética de ponteiros** e como o computador gerencia a memória.
Entender a diferença entre `*titulo[i]` e `(*titulo)[i]` e manipular ponteiros duplos (`**`) para funções de realocação foram os pontos cruciais para o sucesso desta etapa.

---

## Ambiente de Desenvolvimento

- **SO:** Windows 11 Home
- **Compilador:** GCC versão 15.2.0
- **Editor:** Visual Studio Code
- **Ferramentas Extras:** Git, Valgrind (para verificação de memória)