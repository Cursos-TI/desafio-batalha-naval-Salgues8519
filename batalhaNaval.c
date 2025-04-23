#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int i, j;
    
    // Inicializa todo o tabuleiro com 0 
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    //Posiciona navio vertical 
    for (i = 1; i < 1 + 3; i++) {
        tabuleiro[i][2] = 3;
    }
    
    //Posiciona navio horizontal 
    for (j = 4; j < 4 + 3; j++) {
        tabuleiro[5][j] = 3;
    }

    //Posiciona navio diagonal 1 (esquerda para direita)
    for (i = 1; i <= 3; i++) {
        for (j = 7; j <= 9; j++) {
            if (i - 1 == j - 7) {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // Posiciona navio diagonal 2 (direira para esquerda)
    for ( j = 2; j <  2 + 1; j++){
        for( j = 1; j < 1 + 1; j++){
            for( j = 0; j < 0 + 1; j++){
                tabuleiro[9][j] = 3;
            }
            tabuleiro[8][j] = 3;
        }
        tabuleiro[7][j] = 3;
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
    
    return 0;
}


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

