# Jogo-da-velha-em-c-
Um jogo de terminal feito usando a linguagem c++.
# Documentação – Jogo da Velha em C++

## Descrição

O projeto consiste em um jogo da velha desenvolvido em **C++**, executado no terminal. O programa permite iniciar uma partida, visualizar o tabuleiro, reiniciar o jogo e encerrar a aplicação por meio de um menu interativo.

## Objetivo

Aplicar os conceitos básicos da linguagem C++, como:

* Funções;
* Vetores;
* Estruturas de decisão;
* Estruturas de repetição;
* Modularização do código utilizando arquivos `.cpp` e `.hpp`.

## Estrutura do Projeto

* **main.cpp** – Responsável pelo menu principal e controle da execução do programa.
* **functions.cpp** – Contém a lógica do jogo.
* **functions.hpp** – Arquivo de cabeçalho com a declaração das funções utilizadas.

## Funcionalidades

* Iniciar uma partida;
* Exibir o estado atual do tabuleiro;
* Reiniciar o tabuleiro;
* Verificar se existe um vencedor;
* Exibir a pontuação da partida;
* Encerrar o programa.

## Principais Funções

* **Jogo()** – Registra as jogadas dos jogadores.
* **ValidarArray()** – Verifica se a posição escolhida está disponível.
* **ValidaPosicaoJogo()** – Analisa as combinações possíveis e identifica um vencedor.
* **MostraMatrix()** – Exibe o tabuleiro no terminal.
* **PontuacaoJogo()** – Exibe a pontuação dos jogadores.

## Fluxo de Execução

1. O programa apresenta o menu principal.
2. O usuário escolhe uma opção.
3. Caso inicie uma partida, cada jogador informa sua posição.
4. As posições são validadas.
5. O tabuleiro é atualizado.
6. O sistema verifica se existe um vencedor.
7. O usuário pode visualizar o tabuleiro, reiniciar a partida ou encerrar o programa.

## Considerações

Este projeto foi desenvolvido com foco no aprendizado da linguagem C++, explorando conceitos fundamentais de programação estruturada, modularização e manipulação de vetores. Além disso, serve como base para futuras melhorias, como implementação de partidas completas, placar persistente, interface gráfica e inteligência artificial para um jogador automático.
