# Introdução a Técnicas de Programação - 2025.2

**Aluno:** Nelson Ryan Silva de Vasconcelos 
**Matrícula:** 20250062976

---

## Estrutura do Projeto - Unidade 1

- `projeto/`: Contém o código-fonte e a documentação do projeto principal da unidade.  
- `listas/`: Contém as soluções para as listas de exercícios semanais.  
- `README.md`: Este arquivo de apresentação.

---

## Projeto: Sistema de Gerenciamento de Biblioteca

**Descrição:**  
Um sistema simples para gerenciar o acervo de uma biblioteca, permitindo **cadastrar**, **listar**, **emprestar** e **devolver** livros através de uma interface de linha de comando.

**Repositório:** https://github.com/ryanvasconcel0s/vasconcelos-nelson-u1-itp-2025-2.git
**Vídeo de Demonstração:** https://youtu.be/ES23Mb_ViVk

---

### Funcionalidades Implementadas

- **Cadastro de Livros (`cadastroLivros`)**: Permite adicionar novos livros ao acervo.  
- **Listagem de Livros (`listaLivros`)**: Exibe todos os livros cadastrados, incluindo seus status.  
- **Empréstimo de Livros (`emprestimoLivros`)**: Altera a disponibilidade de um livro para “emprestado”.  
- **Devolução de Livros (`devolucaoLivros`)**: Altera a disponibilidade de um livro para “disponível”.  
- **Menu Principal (`menuPrincipal`)**: Interface que navega entre as funcionalidades.  

---

### Conceitos da U1 Aplicados

- **Estruturas condicionais:** Utilizadas nas funções `emprestimoLivros` e `devolucaoLivros` para verificar a variável `disponibilidade` antes de permitir uma operação.  
- **Estruturas de repetição:** Um laço `do-while` foi usado para manter o `menuPrincipal` em execução e um laço `for` foi implementado em `listaLivros` para percorrer e exibir o acervo.  
- **Vetores:** A base de dados do sistema foi implementada com **vetores paralelos** (`titulo`, `autor`, `ano`, `disponibilidade`) para armazenar as informações de cada livro.  
- **Funções:** O código foi modularizado em **5 funções principais**, cada uma com uma responsabilidade clara (cadastrar, listar, etc.), tornando o código mais organizado.  

---

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

---

## Principais Aprendizados

O maior aprendizado foi o gerenciamento do buffer de entrada (`stdin`) em C, entendendo as diferenças entre `scanf` e `fgets` e a necessidade de limpá-lo para evitar bugs na leitura de dados do usuário.

---

## Ambiente de Desenvolvimento

- **SO:** Windows 11 Home 
- **Compilador:** GCC versão 15.2.0  
- **Editor:** Visual Studio Code
