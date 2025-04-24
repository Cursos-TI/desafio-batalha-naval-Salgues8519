#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main() {
    int tabuleiro[LINHA][COLUNA];
    int i, j;

    // Inicializa todo o tabuleiro com 0 
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona navio vertical 
    for (i = 1; i < 1 + 3; i++) {
        tabuleiro[i][2] = 3;
    }

    // Posiciona navio horizontal 
    for (j = 4; j < 4 + 3; j++) {
        tabuleiro[5][j] = 3;
    }

    // Posiciona navio diagonal 1 (esquerda para direita)
    for (i = 1; i <= 3; i++) {
        for (j = 7; j <= 9; j++) {
            if (i - 1 == j - 7) {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // Posiciona navio diagonal 2 (direita para esquerda) - seu original
    for ( j = 2; j <  2 + 1; j++){
        for( j = 1; j < 1 + 1; j++){
            for( j = 0; j < 0 + 1; j++){
                tabuleiro[9][j] = 3;
            }
            tabuleiro[8][j] = 3;
        }
        tabuleiro[7][j] = 3;
    }

    // Poder em forma de cone com topo em linha 7, coluna 5
    int centro = 5;
    int linhaTopo = 7;
    for (i = 0; i < 3; i++) { // 3 linhas: 7, 8, 9
        int linha = linhaTopo + i;
        if (linha >= LINHA) break;
        for (j = centro - i; j <= centro + i; j++) {
            if (j >= 0 && j < COLUNA) {
                if (tabuleiro[linha][j] == 0) {
                    tabuleiro[linha][j] = 4; // substitui apenas se for água
                }
            }
        }
    }

    printf("Tabuleiro Batalha Naval\n");

    // Imprime cabeçalho de colunas
    printf("   ");
    for (j = 0; j < COLUNA; j++) {
        printf("%2d ", j);
    }
    printf("\n");

    // Imprime tabuleiro
    for (i = 0; i < LINHA; i++) {
        printf("%2d ", i);
        for (j = 0; j < COLUNA; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
