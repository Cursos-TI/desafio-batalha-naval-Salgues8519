#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[10][10];
    int i, j;
    
    // Inicializa todo o tabuleiro com 0 
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    //Posiciona navio vertical de tamanho 3 em (linha=1, coluna=2)
    for (i = 1; i < 1 + 3; i++) {
        tabuleiro[i][2] = 3;
    }
    
    //Posiciona navio horizontal de tamanho 3 em (linha=5, coluna=4)
    for (j = 4; j < 4 + 3; j++) {
        tabuleiro[5][j] = 3;
    }
    printf("Tabuleiro Batalha Naval\n");
    
    //Imprime cabeçalho de colunas
    printf("   ");
    for (j = 0; j < 10; j++) {
        printf("%2d ", j);
    }
    printf("\n");
    
    // Imprime linha com índice e valores
    for (i = 0; i < 10; i++) {
        printf("%2d ", i);
        for (j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
